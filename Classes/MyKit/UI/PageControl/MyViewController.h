/*
     File: MyViewController.h
 Abstract: A controller for a single page of content. For this application, pages simply display text on a colored background. The colors are retrieved from a static color list.
  Version: 1.3
 
*/

#import <UIKit/UIKit.h>


@interface MyViewController : UIViewController {
 
    int pageNumber;
	
	UIButton* firstButton;
	UIButton* secondButton;
	UIButton* thirdButton;
	
	UILabel* firstLabel;
	UILabel* secondLabel;
	UILabel* thirdLabel;
	
}


- (IBAction)onClickButton:(id)sender;

- (id)initWithPageNumber:(int)page;


@end
