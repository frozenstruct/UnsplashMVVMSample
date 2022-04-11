//
//  UnsplashService.h
//  UnsplashMVVMSample
//
//  Created by Dmitry Aksyonov on 11.04.2022.
//

#ifndef UnsplashService_h
#define UnsplashService_h

#import <UIKit/UIKit.h>

@protocol UnsplashService <NSObject>

@required
-(void) getEditorialPhotoPage: (int)pageNumber handleWith: (void (^)(UIImage *))completion;

@end


@interface UnsplashServiceIMP : NSObject<UnsplashService>

-(void) getEditorialPhotoPage: (int)pageNumber handleWith: (void (^)(UIImage *))completion;

@end

#endif /* UnsplashService_h */
