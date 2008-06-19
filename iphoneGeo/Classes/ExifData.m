//
//  ExifData.m
//  iphone-test
//
//  Created by steve woodcock on 14/03/2008.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "ExifData.h"


@implementation ExifData

-(void)dealloc{
    [tags release];
    [exif release];
    [super dealloc];
}

@end
