import numpy as np, cv2

image = cv2.imread('Source/Chap08/images/perspective.jpg', cv2.IMREAD_COLOR)
if image is None: raise Exception("영상 파일을 읽기 에러")








print(" 원본 영상 좌표 \t 목적 영상 좌표 \t\t 동차 좌표 \t\t 변환 결과 좌표")
for i in range(len(pts4)):
    pts4[i] /= pts4[i][2]
    print("%i : %-14s %-14s %-18s%-18s" % (i, pts1[i], pts2[i], pts3[i], pts4[i]))
    cv2.circle(image, tuple(pts1[i].astype(int)), 4, (0, 255, 0), -1) # 원본 영상에 pts1 표시
    cv2.circle(dst  , tuple(pts2[i].astype(int)), 4, (0, 255, 0), -1) # 목적 영상에 pts2 표시

cv2.imshow("image", image)
cv2.imshow("dst_perspective", dst)
cv2.waitKey(0)