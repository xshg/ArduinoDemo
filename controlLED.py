import serial
import time

ser = serial.Serial('COM5')
time.sleep(3)
ser.write(str.encode('aaa'))
print(ser.read())
print(ser.read())
ser.close()