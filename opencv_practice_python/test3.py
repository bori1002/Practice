import cv2
import numpy as np

# cap = cv2.imread("chap05\\images\\flip_test.jpg", cv2.IMREAD_COLOR)
# if cap is None: raise Exception("영상 파일 읽기 오류 발생") # 예외 처리

def houghCircle(image):
    # 원이 있는 이미지를 올림.
    img1 = image
    img2 = img1.copy()

    img2 = cv2.GaussianBlur(img2, (9, 9), 0)
    imgray = cv2.cvtColor(img2, cv2.COLOR_BGR2GRAY)

    circles = cv2.HoughCircles(imgray, cv2.HOUGH_GRADIENT, 1, 5, param1=55, param2=55, minRadius=0, maxRadius=0)

    if circles is not None:
        circles = np.uint16(np.around(circles))

        print(circles)
        for i in circles[0, :]:
            cv2.rectangle(img1, (i[0]-i[2], i[1]-i[2]), (i[0]+i[2], i[1]+i[2]), (0, 0, 255), 2)

            d = "circle"
            cv2.putText(img1, f"{d}", (i[0]+i[2]+10, i[1]+i[2]//2), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255))


cap = cv2.VideoCapture(0)  # 0번 카메라 연결
if cap.isOpened() == False:
    raise Exception("카메라 연결 안됨")


while True:  # 무한 반복
     # 프레임 읽기
    ret, frame = cap.read()
    
    title = "your face"
    
    # 프레임 출력
    houghCircle(frame)
    cv2.imshow(title, frame)

    # 'q' 키를 누르면 종료
    if cv2.waitKey(1) == ord('q'):
        break
    
cap.release()

# 각 행렬을 영상으로 표시
# titles = ['cap', 'x_axis', 'y_axis','xy_axis','rep_image','trans_image']
# for title in titles:
#     cv2.imshow(title, eval(title))
# cv2.waitKey(0)