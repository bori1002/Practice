import numpy as np, cv2

def onThreshold(value):
    th[0] = cv2.getTrackbarPos("Hue_th1", "result")
    th[1] = cv2.getTrackbarPos("Hue_th2", "result")
    # opencv 이진화 함수 이용 -상위 값과 하위 값 제거
    
    _, result = cv2.threshold(hue, th[1], 255, cv2.THRESH_TOZERO_INV)[1]

    cv2.threshold(result, th[0], 255, cv2.THRESH_BINARY, result)

    cv2.imshow("result", result)

BGR_img = cv2.imread("Source/chap06/images/color_space.jpg", cv2.IMREAD_COLOR) # 컬러 영상 읽기
if BGR_img is None: raise Exception("영상 파일 읽기 오류")







cv2.imshow("BGR_img", BGR_img)
cv2.waitKey(0)