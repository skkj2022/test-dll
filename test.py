from ctypes import *  

dll = CDLL("./mydll.dll")  

print (dll.add_range(1, 102))