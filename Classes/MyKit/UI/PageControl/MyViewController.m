/*
     File: MyViewController.m
 Abstract: A controller for a single page of content. For this application, pages simply display text on a colored background. The colors are retrieved from a static color list.
  Version: 1.3
 
 
*/

#import "MyViewController.h"

static NSArray *__pageControlColorList = nil;

@implementation MyViewController


// Load the view nib and initialize the pageNumber ivar.
- (id)initWithPageNumber:(int)page {
    if (self = [super initWithNibName:@"MyView" bundle:nil]) {
        pageNumber = page;
	}
    return self;
}

- (void)dealloc {
    [firstLabel release];
	[secondLabel release];
	[thirdLabel release];
	
	[firstButton release];
	[secondButton release];
	[thirdButton release];
	
    [super dealloc];
}


// Set the label and background color when the view has finished loading.
- (void)viewDidLoad {
	//self.view.backgroundColor = [UIColor redColor];
	[firstButton setImage:[UIImage imageNamed:@"Icon.png"] forState:UIControlStateNormal];
	[firstLabel setText:@"oil painting"];
	
	[secondButton setImage:[UIImage imageNamed:@"Icon.png"] forState:UIControlStateNormal];
	
	[thirdButton setImage:[UIImage imageNamed:@"Icon.png"] forState:UIControlStateNormal];
	
		NSLog(@"%s",__FUNCTION__);
}


- (IBAction)onClickButton:(id)sender{

	NSLog(@"%s", __FUNCTION__);
	
	NSLog(@"page number %d",pageNumber);
	
	NSLog(@"sender %@", sender);
	
}

@end
