//
//  AddOrDeleteActivityElement.h
//  Tagtivity
//
//  Created by Rafał Grodziński on 12.07.2013.
//  Copyright (c) 2013 UnalignedByte. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AddOrDeleteActivityElement : NSObject

//Initialization
- (id)init;

//Drawing
- (void)drawInContext:(CGContextRef)ctx_;

//Control
- (void)startAddingWithCurrentLoation:(CGPoint)touchLocation_;
- (void)cancelAddingWithCurrentLocation:(CGPoint)touchLocation_;
- (void)finishAddingWithAddLocation:(CGPoint)addLocation_ activityElementDiameter:(CGFloat)activityElementDiameter_  completed:(void (^)())completedBlock_;
- (void)setCurrentTouchingLocation:(CGPoint)touchLocation_;

//Input
- (BOOL)isTouching:(CGPoint)touchLocation_;
- (BOOL)isTouchingAddLocation:(CGPoint)touchLocation_;
- (BOOL)isTouchingDeleteLocation:(CGPoint)touchLocation_;

@end
