//
//  ViewController.m
//  20160715002-Thread-GCD-Singalton2
//
//  Created by Rainer on 16/7/15.
//  Copyright © 2016年 Rainer. All rights reserved.
//

#import "ViewController.h"
#import "RYPerson.h"
#import "RYCar.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
#warning 这里使用类里写单例方法的方式创建单例对象
    RYPerson *person1 = [RYPerson sharedInstance];
    RYPerson *person2 = [RYPerson sharedInstance];
    RYPerson *person3 = [RYPerson sharedInstance];
    
    NSLog(@"%@ %@ %@", person1, person2, person3);
    
#warning 这里使用宏里写单例方法的方式创建
    RYCar *car1 = [RYCar sharedInstance];
    RYCar *car2 = [RYCar sharedInstance];
    RYCar *car3 = [RYCar sharedInstance];
    
    NSLog(@"%@ %@ %@", car1, car2, car3);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
