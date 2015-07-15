//
//  Person.m
//  Singleton-demo
//
//  Created by lyt on 15/7/15.
//  Copyright (c) 2015年 lyt. All rights reserved.

// 简单设计一个单例模式
//

#import "Person.h"

@implementation Person


static Person *_instance;

+(instancetype) allocWithZone:(struct _NSZone *)zone{
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken,^{
    
        _instance =[super allocWithZone:zone];
    });
    
    return _instance;
}


+(instancetype) shareInstance{
    
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken,^{
    
        _instance = [[self alloc] init];
    });
    
    return _instance;
}

-(id)copyWithZone:(NSZone *) zone{
    
    return _instance;
    
}

@end
