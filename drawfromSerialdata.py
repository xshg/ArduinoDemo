'''
本代码需要配合Arduino UNO 烧入程序 genHeatRates.ino 后运行
xshg
ver: 0.1
2018.12.12
'''
import serial
import time
import turtle

turtle.setup(1000, 400)
turtle.penup()
turtle.speed(0)
turtle.goto(-500, 0)
turtle.pendown()
turtle.speed(1)
ser = serial.Serial('COM4')
i = 0
byteNum = b'0'

while True:
    
    c = ser.read()
    if b'0' <= c <= b'9':
        byteNum = byteNum + c
    elif c == b'-':
        byteNum = c
    elif c == b'\r':
        intNum = int(byteNum)
        i += 1
        x = turtle.xcor() + 10
        turtle.goto(x, intNum)
        print(intNum, i)
        
        byteNum = b'0'
        ser.read()
    
    if i % 100 == 0:
        time.sleep(.1)
        turtle.penup()
        turtle.speed(0)
        turtle.goto(-500, 0)
        turtle.pendown()
        turtle.speed(1)
        turtle.clear()
        i = 0
        