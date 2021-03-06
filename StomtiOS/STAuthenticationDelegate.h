//
//  STAuthenticationDelegate.h
//  StomtiOS
//
//  Created by Leonardo Cascianelli on 28/10/15.
//  Copyright © 2015 Leonardo Cascianelli. All rights reserved.
//

#import <Foundation/Foundation.h>


@class STAuthenticationController;
@class STUser;

@protocol STAuthenticationDelegate <NSObject>
@optional
- (void)authenticationController:(STAuthenticationController*)authController successfullyLoggedInWithUser:(STUser*)user;
- (void)authenticationController:(STAuthenticationController*)authController loginFailedWithResponse:(NSURLResponse*)response receivedData:(NSData*)data error:(NSError*)error;
@end
