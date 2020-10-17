//
//  ACViewController.m
//  ACStatusHUD
//
//  Created by mrcrow on 10/16/2020.
//  Copyright (c) 2020 mrcrow. All rights reserved.
//

#import "ACViewController.h"
#import <ACStatusHUD/ACStatusHUD.h>

@interface ACViewController ()

@end

@implementation ACViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [ACStatusHUD presentTitle:@"New card added" message:nil iconStyle:ACStatusIconTypeCard];
    });
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
