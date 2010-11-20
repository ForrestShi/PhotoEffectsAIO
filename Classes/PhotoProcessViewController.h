#import <UIKit/UIKit.h>
#import "MagickWand.h"

#import <AudioToolbox/AudioToolbox.h>
#import <MessageUI/MFMailComposeViewController.h>

#import "LabeledActivityIndicatorView.h"
#import "ImageScrollView.h"

@interface PhotoProcessViewController : UIViewController <UIActionSheetDelegate, 
														 UIScrollViewDelegate,
														 UIImagePickerControllerDelegate,
														 UIPopoverControllerDelegate,
														 UINavigationControllerDelegate,
                                                         MFMailComposeViewControllerDelegate> 
{
															 
															 
	//UIImageView *imageView;
	ImageScrollView* imageView;
	UIScrollView *scrollView;														 
	UISlider* slider1;
	UISlider* blurAdjustSlider;
	
	LabeledActivityIndicatorView* activity;
	SystemSoundID alertSoundID;

	UIImagePickerController * _picker;
	UIPopoverController* _popover;
	UIToolbar *toolbar;
	UIBarButtonItem *loadItem;
	
	CGImageRef beforeCGImage;
	CGImageRef afterCGImage;   // after applying effects 
}

- (IBAction)loadImage:(id)sender;
- (IBAction)shareImage:(id)sender;


@property (nonatomic, retain) LabeledActivityIndicatorView* activity;
@property (nonatomic, retain) ImageScrollView* imageView;
@property (nonatomic, retain) UISlider* slider1;
@property (nonatomic,retain) UISlider* blurAdjustSlider;

@property (nonatomic, retain) UIPopoverController* popover;
@property (nonatomic, retain) UIImagePickerController *picker;

@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) UIBarButtonItem *loadItem;


@property (nonatomic, assign) CGImageRef beforeCGImage;
@property (nonatomic, assign) CGImageRef afterCGImage;


@end