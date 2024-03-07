import numpy as np, cv2

def contain(p, shape):                              # 좌표(y,x)가 범위내 인지 검사
    return 

def translate(img, pt):
   




    return dst

image = cv2.imread('Source/Chap08/images/translate.jpg', cv2.IMREAD_GRAYSCALE)
if image is None: raise Exception("영상 파일을 읽기 에러")

dst1 = 
dst2 = 

cv2.imshow("image", image)
cv2.imshow("dst1: trans to (80, 30)", dst1);
cv2.imshow("dst2: trans to (-50, -70)", dst2);
cv2.waitKey(0)
