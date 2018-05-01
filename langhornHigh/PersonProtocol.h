//
//  PersonProtocol.h
//  langhornHigh
//
//  Created by Laurence Wingo on 11/6/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PersonProtocol <NSObject>

@optional
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, unsafe_unretained) NSUInteger age;

@required
-(void) breathe;

@end
