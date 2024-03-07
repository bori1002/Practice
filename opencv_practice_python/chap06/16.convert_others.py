import cv2

BGR_img = cv2.imread("chap06/images/color_space.jpg", cv2.IMREAD_COLOR) # 컬러 영상 읽기
if BGR_img is None: raise Exception("영상 파일 읽기 오류")
    
GrayImg = cv2.cvtColor(BGR_img, cv2.COLOR_RGB2GRAY) # 명암도 영상 변환
YCCImg = cv2.cvtColor(BGR_img, cv2.COLOR_RGB2YCrCb) # YCbCr 컬러 공간 변환
YUVImg = cv2.cvtColor(BGR_img, cv2.COLOR_RGB2YUV)   # YUV 컬러 공간 변환
LABImg = cv2.cvtColor(BGR_img, cv2.COLOR_RGB2LAB)  # Lab 컬러 공간 변환

YCC_ch = cv2.split(YCCImg)
YUV_ch = cv2.split(YUVImg)
Lab_ch = cv2.split(LABImg)



cv2.imshow("BGR_img", BGR_img)
cv2.imshow("Gray_img", GrayImg)

sp1, sp2, sp3 = ['Y', 'Cr', 'Cb'] , ['Y', 'U', 'V'], ['L', 'A', 'B']
for i in range(len(sp1)):
    cv2.imshow("YCC_img[%d]-%s" %(i, sp1[i]), YCC_ch[i])
    cv2.imshow("YUV_img[%d]-%s" %(i, sp2[i]), YUV_ch[i])
    cv2.imshow("LAB_img[%d]-%s" %(i, sp3[i]), Lab_ch[i])
cv2.waitKey(0)