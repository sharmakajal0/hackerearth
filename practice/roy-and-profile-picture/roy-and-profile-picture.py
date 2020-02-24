#!/usr/bin/env python

def profile_pic(length, width, height):
    if width < length or height < length:
        print("UPLOAD ANOTHER")

    elif width >= length and height >= length:
        if width == height:
            print("ACCEPTED")
        else:
            print("CROP IT")

length = int(input())
test = int(input())
for i in range(test):
    weight, height = map(int, input().split())
    profile_pic(length, weight, height)
