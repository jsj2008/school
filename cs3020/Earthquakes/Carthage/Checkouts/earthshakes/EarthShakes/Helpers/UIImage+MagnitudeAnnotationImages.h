//
//  UIImage+MagnitudeAnnotationImages.h
//  EarthShakes
//
//  Created by Nate Armstrong on 8/21/15.
//  Copyright (c) 2015 Nate Armstrong. All rights reserved.
//

@import UIKit;
@import EarthShakeKit;

@interface UIImage (MagnitudeAnnotationImages)

+ (UIImage *)annotationImageForMagnitude:(EarthquakeMagnitude)magnitude;

@end
