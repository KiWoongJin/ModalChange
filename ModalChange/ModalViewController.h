//
//  ModalViewController.h
//  ModalChange
//
//  Created by SDT-1 on 2014. 1. 10..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ModalViewController : UIViewController <UITextFieldDelegate>
@property (strong, nonatomic)NSString *msg;
@property (weak, nonatomic) IBOutlet UITextField *modalInput;
@end
