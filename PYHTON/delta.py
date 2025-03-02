#delta
#배열을 만들어서 네방향으로 움직이도록 하는 것
def IsSafe(y, x):#행렬범위를 벗어나지 않도록 검사
    if y<=4 and x<=4 and y>=0 and x>=0:
        return True
    else:
        return False
    
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, -1] #up, down, left, right

for y in range(5):
    for x in range(5):
        for dir in range(4):
            newY = y + dy[dir]
            newX = x + dx[dir]
            if(IsSafe(newY, newX))
