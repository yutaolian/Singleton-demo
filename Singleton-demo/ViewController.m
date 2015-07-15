//
//  ViewController.m
//  Singleton-demo
//
//  Created by lyt on 15/7/15.
//  Copyright (c) 2015年 lyt. All rights reserved.
//

#import "ViewController.h"

#import "Person.h"
#import "Student.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //类实现
    Person *p1 = [Person shareInstance];
    
    NSLog(@"%@",p1);
    
    Person *p2 = [Person shareInstance];
    
    NSLog(@"%@",p2);

    
    Person *p3 = [Person shareInstance];
    
    NSLog(@"%@",p3);
    
    //宏实现
    Student *s1 = [Student sharedStudent];
    
    NSLog(@"%@",s1);
    
    
    Student *s2 = [Student sharedStudent];
    
    NSLog(@"%@",s2);

    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
