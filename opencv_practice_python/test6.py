import cv2
import numpy as np
import pytesseract

TESSERACT_PATH = "C:/Program Files/Tesseract-OCR/tesseract.exe" #테서렉스 설치 경로
imgpath='./images/'  #이미지 파일 경로
imgType=['.jpg', '.png']

win_name = "Image To Text"  #OpenCV 창 이름

imgName=input("Put Image name in images folder: ")
selectType=input("1.jpg 2.png\nselect image type: ")
i = int(selectType) - 1
img = cv2.imread(imgpath+imgName+imgType[i])   #이미지 읽어오기

# 명함 검출 함수(canny 사용)
def detnameCard(cvimg):
    contours, hierarchy = contourIMG(cvimg) # 튜플 반환
    result = cropConImg(cvimg, contours)
   
    return result

def contourIMG(cvimg):
    gimg = cv2.cvtColor(cvimg, cv2.COLOR_BGR2GRAY)
    bimg = img2 = cv2.GaussianBlur(gimg, (9, 9), 0)
    
    threshold1 = 128
    threshold2 = 128
    cimg = cv2.Canny(bimg, threshold1, threshold2, (9, 9))
    
    kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (9, 9))   #morphologyEX 함수로 형태를 뭉갠다.
    mimg = cv2.morphologyEx(cimg, 1, kernel, cv2.MORPH_CLOSE)
    contours, hierarchy = cv2.findContours(mimg, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE) # 튜플 반환
    
    return contours, hierarchy
    
def cropConImg(cvimg, contours):
    mask = np.zeros_like(cvimg)
    
    for cnt in contours:
        cv2.drawContours(mask, [cnt], 0, (0, 0, 255), -1) 
        out = np.zeros_like(img)
        out[mask == 255] = img[mask == 255]
        
    (y, x) = (np.where(mask == 255), np.where(mask == 255))
    (topy, topx) = (np.min(y), np.min(x))
    bottomy, bottomx = (np.max(y), np.max(x))
    output = out[topy:bottomy+1, topx:bottomx+1]
    
    x, y, w, h = cv2.boundingRect(contours[1])
    
    pts1 = np.float32([[bottomy,bottomx], [bottomy, topx], [topy, bottomx], [topy, topx]])
    pts2 = np.float32([[y, x], [y, x + w], [y + h, x], [y + h, x + w]])
    mtrx = cv2.getPerspectiveTransform(pts1, pts2)
    result = cv2.warpPerspective(cvimg, mtrx, (topy, topx))
    
    return result
    
# 이미치 처리 함수
def ImgProcessing(cvimg):
    nameCard = detnameCard(cvimg)
    
    result = nameCard

    return result

# OCR 함수
def doOCR(cvimg):
    #OCR모델 불러오기
    pytesseract.pytesseract.tesseract_cmd = TESSERACT_PATH
    
    namecard = ImgProcessing(cvimg)
    
    #OCR모델로 글자 추출
    text = pytesseract.image_to_string(namecard, lang='kor+eng')
    cv2.imshow(imgName, namecard)
        
    return text


# main
text = doOCR(img)             #OCR함수로 텍스트 추출
print(text)                #텍스트 출력
cv2.imshow(win_name, img)   #이미지 출력
cv2.waitKey(0)              #입력 대기