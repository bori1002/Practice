import cv2

def onThreshold(value):
    result1 = cv2.threshold(image, value, 255, cv2.THRESH_TOZERO)[1]
    result2 = cv2.threshold(image, value, 255, cv2.THRESH_TOZERO_INV)[1]

    cv2.imshow("result", result1)
    cv2.imshow("result", result2)


image = cv2.imread("chap06/images/color_space.jpg", cv2.IMREAD_GRAYSCALE) # 컬러 영상 읽기
if image is None: raise Exception("영상 파일 읽기 오류")

cv2.namedWindow("result")
cv2.createTrackbar("threshold1", "result", 128, 255, onThreshold)
cv2.createTrackbar("threshold2", "result", 128, 255, onThreshold)
onThreshold(128)                                                                   # 이진화 수행

cv2.imshow("image", image)
cv2.waitKey(0)