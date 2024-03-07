import cv2

def onThreshold1(value):
    gimg = cv2.cvtColor(cvimg, cv2.COLOR_BGR2GRAY)
    bimg = img2 = cv2.GaussianBlur(gimg, (9, 9), 0)
    
    threshold1 = 128
    threshold2 = 128
    cimg = cv2.Canny(bimg, value, threshold2, (9, 9))
    cv2.imshow("result", cimg)

def onThreshold2(value):
    result2 = cv2.threshold(image, value, 255, cv2.THRESH_TOZERO_INV)[1]

    cv2.imshow("result", result2)

image = cv2.imread("chap06/images/color_space.jpg", cv2.IMREAD_GRAYSCALE) # 컬러 영상 읽기
if image is None: raise Exception("영상 파일 읽기 오류")

cv2.namedWindow("result")
cv2.createTrackbar("threshold1", "result", 128, 255, onThreshold1)
cv2.createTrackbar("threshold2", "result", 128, 255, onThreshold2)
onThreshold1(128)
onThreshold2(128)

cv2.imshow("image", image)
cv2.waitKey(0)