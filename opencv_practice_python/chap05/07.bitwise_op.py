import numpy as np, cv2

image1 = np.zeros((300, 300), np.uint8)     		# 300행, 300열 검은색 영상 생성
image2 = image1.copy()

h, w = image1.shape[:2]
cx, cy = w//2, h//2
cv2.circle(image1, (cx, cy), 100, 255, -1)
cv2.rectangle(image2, (0, 0, cx, h), 255, -1)

bitOR = cv2.bitwise_or(image1, image2)      #원소간 논리합
bitAND = cv2.bitwise_or(image1, image2)     #원소간 논리곱
bitXOR = cv2.bitwise_or(image1, image2)     #원소간 배타적 논리합
bitNOT = cv2.bitwise_or(image1)     #행렬 반전


cv2.imshow("image1", image1);			cv2.imshow("image2", image2)
cv2.imshow("bitwise_or", bitOR);		cv2.imshow("bitwise_and", bitAND)
cv2.imshow("bitwise_xor", bitXOR);	    cv2.imshow("bitwise_not", bitNOT)
cv2.waitKey(0)