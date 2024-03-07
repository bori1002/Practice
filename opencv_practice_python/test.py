import cv2
import numpy as np
import threading

cap = cv2.VideoCapture(0)

while True:
    # 프레임 읽기
    ret, frame = cap.read()

    # 프레임 출력
    cv2.imshow('Webcam', frame)

    # 'q' 키를 누르면 종료
    if cv2.waitKey(1) == ord('q'):
        break
 
# 웹캠해제   
cap.release()
cv2.destroyAllWindows()          


