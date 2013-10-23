//
//  Cat.h
//  MagicalRecordSample
//
//  Created by MacPro01 on 2013/10/22.
//  Copyright (c) 2013年 eyoneya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Cat : NSManagedObject

@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * name;

@end
