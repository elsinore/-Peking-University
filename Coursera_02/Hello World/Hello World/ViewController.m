//
//  ViewController.m
//  Hello World
//
//  Created by 王紫仪 on 11/06/2017.
//  Copyright © 2017 王紫仪. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UILabel *testLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)TestButtonTapped:(id)sender {
    self.testLabel.text = @"It worked!";
}


@end
