import cv2
from Common.utils import print_matInfo  # Common 이라는 폴더의 utils이란 파이썬 파일에서
                                        #print_matInfo라는 행렬 정보 출력 함수 임포트

title1, title2 = "color2gray", "color2color"
color2gray = cv2.imread("Source/chap04/images/read_color.jpg", cv2.COLOR_BGR2GRAY)
color2color = cv2.imread("Source/chap04/images/read_color.jpg", cv2.IMREAD_COLOR)
if color2gray is None or color2color is None:
    raise Exception("영상 파일 읽기 에러")

print("행렬 좌표 (100, 100) 화소값")
print("%s %s" % (title1,color2gray[100.100])     # 한 화소값 표시
print("%s %s\n" % (title2,color2color[100,100])

              (title1, color2gray)                   #  
              (title2, color2color)
cv2.imshow(title1, color2gray)                      #  
cv2.imshow(title2, color2color)
cv2.waitKey(0)