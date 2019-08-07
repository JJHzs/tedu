#!/usr/bin/env python3
#coding:utf8

score = int(input('成绩:'))

if score >= 90:
    print('优秀')
elif score >= 80:
    print('好')
elif score >= 70:
    print('良')
elif score >= 60:
    print('及格')
else:
    print('你要努力了!')