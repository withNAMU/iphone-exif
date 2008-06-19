/*
 *  EXFGPSLoc.h
 *  iphoneGeo
 *
 *  Created by steve woodcock on 30/03/2008.
 *  Copyright 2008. All rights reserved.
 *
 * A set of fractions that represent the 3 rational numbers that make up the 
 * GPS Location. these are:
 * Degrees
 * Minutes
 * Seconds
 *
 * The EXF Specification suggests the location should be displayed as 3 rationals. ALthough we use fractions 
 * to actually represent any stored number without getting precision errors.
 */

#import "EXFConstants.h"

/*!
	@class EXFGPSLoc
	@abstract A GPS Location
	@discussion EXFGPSLoc represents a GPS Location. In order to remian aligned to the EXIF format for GPS data, the actual object is 
	structured as 3 EXFraction objects, one each for degrees, minutes and seconds. 
	
	
	*/

@interface EXFGPSLoc : NSObject {
    EXFraction* degrees;
    EXFraction* minutes;
    EXFraction* seconds;
}


@property (nonatomic, retain) EXFraction* degrees;
@property (nonatomic, retain) EXFraction* minutes;
@property (nonatomic, retain) EXFraction* seconds;

-(double) descriptionAsDecimal;

@end


@interface EXFGPSTimeStamp : NSObject {
    EXFraction* hours;
    EXFraction* minutes;
    EXFraction* seconds;
}


@property (nonatomic, retain) EXFraction* hours;
@property (nonatomic, retain) EXFraction* minutes;
@property (nonatomic, retain) EXFraction* seconds;

@end