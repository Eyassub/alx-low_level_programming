#!/usr/bin/python3
import ctypes
n = 1
100-operations = ctypes.CDLL("100-operations.so")
100-operations._abs.argtypes = [ctypes.c_int]
returnVale = 100-operations._abs(n)
