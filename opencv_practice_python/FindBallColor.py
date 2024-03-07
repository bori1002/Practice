import cv2
import numpy as np
import random

red, blue, green = (0, 0, 255), (255, 0, 0), (0, 255, 0)
white, black = (255, 255, 255), (0, 0, 0)
image = np.full((800, 800, 3), black, np.uint8)

def makeCircle():
    randomColor = [random.randint(0,255),random.randint(0,255),random.randint(0,255)]
    Color = (randomColor[0],randomColor[1],randomColor[2])
    center = (random.randint(100,700),random.randint(100,700))
    cv2.circle(image, center, random.randint(5,100), Color, -1)     

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
            cv2.rectangle(img1, (i[0]-i[2], i[1]-i[2]), (i[0]+i[2], i[1]+i[2]), (100, 100, 255), 2)

            d = "circle"
            if (img1[i[1]][i[0]][0], img1[i[1]][i[0]][1], img1[i[1]][i[0]][2]) == red:
                d = "red " + d
            if (img1[i[1]][i[0]][0], img1[i[1]][i[0]][1], img1[i[1]][i[0]][2]) == green:
                d = "green " + d
            if (img1[i[1]][i[0]][0], img1[i[1]][i[0]][1], img1[i[1]][i[0]][2]) == blue:
                d = "blue " + d
            cv2.putText(img1, f"{d}", (i[0]+i[2]+10, i[1]+i[2]//2), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (100, 100, 255))

    else:
        print('원을 찾을 수 없음')


for i in (1,2,3,4,5):
    makeCircle()
    print("make circle")

houghCircle(image)



title = "detect circles"
cv2.namedWindow(title)
cv2.imshow(title, image)
cv2.waitKey(0)