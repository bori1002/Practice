from flask import Flask, render_template, redirect
from flask import request

import requests
import re
import socket

app = Flask(__name__)

# 컴퓨터 이름, ip
hostname = socket.gethostname()
hostip = socket.gethostbyname(socket.gethostname())

#외부 IP, 아래 사이트 호출 후 결과에서 추출
req = requests.get("http://ipconfig.kr")
out_ip = re.search(r'(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3})', req.text)[1]

@app.route("/")
def index():
    return render_template('index.html')

@app.route("/home")
def home():
     return '<div style="display: flex; justify-content: center; align-items: center; height: 100vh; flex-direction: column;">' \
            '<h1>컴퓨터 이름 : {0}<br>내부 IP : {1}<br>외부 IP : {2}<br><br> 당신의 IP :{3}<br><br>안녕?</h1>' \
            '</div>'.format(hostname, hostip, out_ip, request.remote_addr)

@app.route("/redirect-home")
def redirect_home():
    return redirect("/home")
