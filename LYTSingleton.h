//
//  LYTSingleton.h
//  Singleton-demo
//
//  Created by lyt on 15/7/15.
//  Copyright (c) 2015年 lyt. All rights reserved.
//

#ifndef Singleton_demo_LYTSingleton_h
#define Singleton_demo_LYTSingleton_h

// .h文件
#define LYTSingletonH(name) + (instancetype)shared##name;

// .m文件
#define LYTSingletonM(name) \
static id _instance; \
\
+ (instancetype)allocWithZone:(struct _NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
\
+ (instancetype)shared##name \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return _instance; \
}



#endif
