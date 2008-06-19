//
//  ExifData.h
//  iphone-test
//
//  Created by steve woodcock on 14/03/2008.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ExifData : NSObject {

    NSMutableDictionary* tags;
    NSMutableDictionary* exif;
    
    UInt8** buffer_ptr;
    bool intelOrder;
    
}


@end
