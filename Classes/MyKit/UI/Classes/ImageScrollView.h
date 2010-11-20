/*
     File: ImageScrollView.h
 Abstract: Centers image within the scroll view and configures image sizing and display.
  Version: 1.1
 
 */

#import <UIKit/UIKit.h>

@interface ImageScrollView : UIScrollView <UIScrollViewDelegate> {
    UIView        *imageView;
    NSUInteger     index;
}
@property (assign) NSUInteger index;
@property (retain) UIView        *imageView;

- (void)displayImage:(UIImage *)image;
- (void)displayTiledImageNamed:(NSString *)imageName size:(CGSize)imageSize;
- (void)setMaxMinZoomScalesForCurrentBounds;

- (CGPoint)pointToCenterAfterRotation;
- (CGFloat)scaleToRestoreAfterRotation;
- (void)restoreCenterPoint:(CGPoint)oldCenter scale:(CGFloat)oldScale;


@end
