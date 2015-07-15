//
//  common.h
//  Singleton-demo
//
//  Created by lyt on 15/7/15.
//  Copyright (c) 2015年 lyt. All rights reserved.
//


//使用宏定义一个单例模式

//定义.h文件
#define LYTSingletonH(objName)  +(instancetype)shared##objName;

//定义.m文件

#define LYTSingletonM(objName) \
static  id _instance;\
\
+(instancetype) allocWithZone:(struct _NSZone *)zone{\
\
static dispatch_once_t onceToken;\
\
dispatch_once(&onceToken,^{\
    \
    _instance =[super allocWithZone:zone];\
});\
\
return _instance;\
}\
\
+(instancetype)shared##objName{\
\
    static dispatch_once_t onceToken;\
    \
    dispatch_once(&onceToken,^{\
    \
        _instance = [[self alloc]init];\
        \
    });\
    \
    return _instance;\
}\
\
-(id)copyWithZone:(NSZone *)zone{\
    \
    return _instance;\
}\
