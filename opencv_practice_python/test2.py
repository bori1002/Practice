import numpy as np
import cv2


image = np.zeros((500, 500), np.uint8)
image[:] = 0    # 흰색 바탕

def onMouse(event, x, y, flags, param):
    center = (x,y)#마우스 오른쪽버튼 클릭시 원 (클릭좌표에서 20화소)                     # 콜백 함수 – 이벤트 내용 출력
    if event == cv2.EVENT_RBUTTONDOWN:
        cv2.circle(image, center, 20, (255,255,255))
        print("draw circle")
        
    elif event == cv2.EVENT_LBUTTONDOWN: #마우스 왼쪽버튼 클릭시 사각형 (크기 30*30)
        roi = (center[0] - 15, center [1] -15, center[0] + 15, center[1] + 15) 
        cv2.rectangle(image, roi, (255,255,255), 3, cv2.LINE_8)
        print("draw rectangle") 
                             

title = 'DARW'		# 윈도우 이름
cv2.namedWindow(title, cv2.WINDOW_AUTOSIZE)
cv2.setMouseCallback(title, onMouse) 
cv2.imshow(title, image)                       # 행렬 원소를 영상으로 표시 

cv2.waitKey(0)                                      # 
cv2.destroyAllWindows()                             # 