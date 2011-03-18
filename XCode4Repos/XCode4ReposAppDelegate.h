//
//  XCode4ReposAppDelegate.h
//  XCode4Repos
//
//  Created by Lee Walker on 3/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
// comment
#import <UIKit/UIKit.h>

@class XCode4ReposViewController;

@interface XCode4ReposAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet XCode4ReposViewController *viewController;

@end
