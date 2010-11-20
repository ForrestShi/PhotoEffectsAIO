/*
     File: TilingView.h
 Abstract: Handles tile drawing and tile image loading.
  Version: 1.1
 
 
 */

#import <UIKit/UIKit.h>


@interface TilingView : UIView {
    NSString *imageName;
    BOOL      annotates;
}
@property (assign) BOOL annotates;

- (id)initWithImageName:(NSString *)name size:(CGSize)size;
- (UIImage *)tileForScale:(CGFloat)scale row:(int)row col:(int)col;

@end
