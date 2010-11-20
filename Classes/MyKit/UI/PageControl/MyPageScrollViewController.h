//
//  MyPageScrollViewController.h
//  PageControl
//
//  Created by shi stone on 10-11-19.
//  Copyright 2010 cyanapple. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyPageScrollViewController : UIViewController<UIScrollViewDelegate> {
	UIScrollView *scrollView;
	UIPageControl *pageControl;
    NSMutableArray *viewControllers;
	
    // To be used when scrolls originate from the UIPageControl
    BOOL pageControlUsed;
}

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) IBOutlet UIPageControl *pageControl;
@property (nonatomic, retain) NSMutableArray *viewControllers;

- (IBAction)changePage:(id)sender;

@end
