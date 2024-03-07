import cv2
import numpy as np
import pytesseract

TESSERACT_PATH = "C:/Program Files/Tesseract-OCR/tesseract.exe"

#마우스 이벤트 처리 함수
def onMouse(event, x, y, flags, param):

    return 0


#이미치 처리 함수
def ImgProcessing():
    
    return 0

#OCR 함수
def GetOCR(img):

    #OCR모델 불러오기
    pytesseract.pytesseract.tesseract_cmd = TESSERACT_PATH

    #OCR모델로 글자 추출
    text = pytesseract.image_to_string(img, lang='kor+eng')
        
    return text


cap = cv2.VideoCapture(0)  # 0번 카메라 연결
if cap.isOpened() == False:
    raise Exception("카메라 연결 안됨")


while True:  # 무한 반복
     # 프레임 읽기
    ret, frame = cap.read()
    
    title = "글자인식"
    
    #글자 인식 함수
    text = GetOCR(frame)
    
    # 프레임 출력
    cv2.imshow(title, frame)

    # 'q' 키를 누르면 종료
    if cv2.waitKey(1) == ord('q'):
        break
    
cap.release()