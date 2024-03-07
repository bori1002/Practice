import numpy as np
import cv2

BGR_img = cv2.imread("images/color_spae.jpg", cv2.IMREAD_COLOR)
if BGR_img is None:raise Exception("영상파일 읽기 오류")

HSV_img - cv2.cvtColor(BGR_img, cv2.COLOR_BGR2HSV)
hue = 