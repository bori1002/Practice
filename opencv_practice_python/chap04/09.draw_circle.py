import numpy as np
import cv2

orange, blue, cyan = (0, 165, 255), #orange
(255, 0, 0), #blue
(255, 255, 0) #cyan

white, black = (255, 255, 255), (0, 0, 0)
image = np.full((300, 500, 3), black, np.uint8)             # 

center = (image[0][0]/2, image[0][1]/2)         		# 원의 중심
pt1, pt2 = (300, 50), (100, 220)
shade = (pt2[0] + 2, pt2[1] + 2)                          # 그림자 좌표

cv2.circle(image, center, 3, orange)                         #  
cv2.circle(image, center[0]+20, center[1]+20, 6, blue)
#cv2.circle(               )                   #  

font = cv2.FONT_HERSHEY_COMPLEX
cv2.putText(image, "center_blue", center, font, 1.0, blue)
cv2.putText(image, "pt1_orange", pt1, font, 0.8, orange)
#cv2.putText(                           )   #  
cv2.putText(image, "pt2_cyan",   pt2, font, 1.2, cyan , 1)

title = "Draw circles"
cv2.namedWindow(title)
cv2.imshow(title, image)
cv2.waitKey(0)