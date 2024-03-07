import numpy as np, cv2

m1 = np.full((3, 6), 10, np.uint8)			# 단일 채널 생성 및 초기화
m2 = np.full((3, 6), 50, np.uint8)
m_mask = np.zeros(m1.shape, np.uint8)		# 마스크 생성
m_mask[: , 3:] = 1							# 관심영역 지정한후 1을 할당

m_add1 = cv2.add()                    # 행렬 덧셈
m_add2 = cv2.add()       # 

# 




titles = ['m1', 'm2', 'm_mask','m_add1','m_add2','m_div1', 'm_div2']
for title in titles:
    print("[%s] = \n%s \n" % (title, eval(title)))