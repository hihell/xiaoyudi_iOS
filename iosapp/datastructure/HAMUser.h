//
//  HAMUser.h
//  iosapp
//
//  Created by daiyue on 13-8-12.
//  Copyright (c) 2013年 Droplings. All rights reserved.
//

#import <Foundation/Foundation.h>

#define USER_DEFAULT_LAYOUTX 3
#define USER_DEFAULT_LAYOUTY 3

@interface HAMUser : NSObject
{
}

@property NSString* UUID;
@property NSString* name;
@property NSString* rootID;

@property int layoutx;
@property int layouty;

-(id)initWithName:(NSString*)_name;

@end