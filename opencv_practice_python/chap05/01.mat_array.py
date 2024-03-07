import cv2

# cap = cv2.imread("chap05\\images\\flip_test.jpg", cv2.IMREAD_COLOR)
# if cap is None: raise Exception("영상 파일 읽기 오류 발생") # 예외 처리

cap = cv2.VideoCapture(0)  # 0번 카메라 연결
if cap.isOpened() == False:
    raise Exception("카메라 연결 안됨")

while True:  # 무한 반복
     # 프레임 읽기
    ret, frame = cap.read()
    
    x_axis = cv2.flip(frame, 0)                  # x축 기준 상하 뒤집기
    y_axis = cv2.flip(frame, 1)                   # y축 기준 좌우 뒤집기
    xy_axis = cv2.flip(frame, -1)
    rep_image = cv2.repeat(frame, 1,2)        # 반복 복사
    trans_image = cv2.transpose(frame)           # 행렬 전치

    titles = ['frame', 'x_axis', 'y_axis','xy_axis','rep_image','trans_image']
    # 프레임 출력
    for title in titles:
        cv2.imshow(title, eval(title))
        # framecnt = framecnt + 1
        # print (framecnt)

    # 'q' 키를 누르면 종료
    if cv2.waitKey(1) == ord('q'):
        break
    
cap.release()

# 각 행렬을 영상으로 표시
# titles = ['cap', 'x_axis', 'y_axis','xy_axis','rep_image','trans_image']
# for title in titles:
#     cv2.imshow(title, eval(title))
# cv2.waitKey(0)