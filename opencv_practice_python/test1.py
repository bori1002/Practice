import cv2
import numpy as np


capture = cv2.VideoCapture(0)  # 0번 카메라 연결
if capture.isOpened() == False:
    raise Exception("카메라 연결 안됨")

mask = np.zeros((capture.get(cv2.CAP_PROP_FRAME_HEIGHT), 
                 capture.get(cv2.CAP_PROP_FRAME_WIDTH), 
                 3), dtype=np.uint8)
mask = [y:]

while True:  # 무한 반복
     # 프레임 읽기
    ret, frame = capture.read()
    
    frame = cv2.merge(mask)

    title = "webcam"
    # 프레임 출력
    cv2.imshow(title, frame)

    # 'q' 키를 누르면 종료
    if cv2.waitKey(1) == ord('q'):
        break
    
capture.release()