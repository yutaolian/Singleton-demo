//
//  Person.h
//  Singleton-demo
//
//  Created by lyt on 15/7/15.
//  Copyright (c) 2015年 lyt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property(nonatomic,copy) NSString * name;


+(instancetype) shareInstance;

@end
