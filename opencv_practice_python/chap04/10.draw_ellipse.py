import numpy as np
import cv2

orange, blue, white = (0, 165, 255), (255, 0, 0), (255,255,255) # 색상 지정
image = np.full((300, 700, 3), white, np.uint8)

pt1, pt2 = (180, 150), (550, 150)                       # 타원 중심점
size = (120, 60)                                        # 타원 크기 - 반지름 값임

cv2.circle(image, pt1, 1, 0, 2)                         # 타원의 중심점(2화소 원) 표시
cv2.circle(image, pt2, 1, 0, 2)

# 각 중심점을 중심으로 하는 타원 두게 그리기
#색상은 파란색
#호도 각각 그려보기

cv2. ellipse(image, pt1, , 0, 0,

cv2.imshow("Draw Eclipse & Arc", image)
cv2.waitKey()                                           # 키입력 대기