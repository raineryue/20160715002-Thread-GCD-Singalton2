//
//  RYPerson.h
//  20160715002-Thread-GCD-Singalton2
//
//  Created by Rainer on 16/7/15.
//  Copyright © 2016年 Rainer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RYPerson : NSObject

@property (nonatomic, copy) NSString *name;

+ (instancetype)sharedInstance;

@end
