import numpy as np, cv2

image = cv2.imread('Source/Chap08/images/interpolation.jpg', cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("영상 파일 읽기 에러")

size = (350, 400)




cv2.imshow("image", image)
cv2.imshow("OpenCV_bilinear", dst1)
cv2.imshow("OpenCV_Nearest", dst2)
cv2.waitKey(0)