//
//  ViewController.m
//  UnitConverer
//
//  Created by 王紫仪 on 18/06/2017.
//  Copyright © 2017 王紫仪. All rights reserved.
//

#import "ViewController.h"
double convertUnitOneToUnitTwo (unitOneValue){
    double unitTwoValue;
    
    unitTwoValue = 10* unitOneValue;
    return unitTwoValue;
}
double function2 (input2){
    double output2;
    
    output2 = 100* input2;
    return output2;
}
double function3 (input3){
    double output3;
    
    output3 = 1000* input3;
    return output3;
}

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *inputField;

@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentController;

@property (weak, nonatomic) IBOutlet UILabel *outputField;

@end

@implementation ViewController

- (IBAction)updateButton:(id)sender {
    NSMutableString *buf = [NSMutableString new];
    
    double userInput = [self.inputField.text doubleValue];
    
    if(self.segmentController.selectedSegmentIndex == 0){
        double unitTwoValue = convertUnitOneToUnitTwo(userInput);
        [buf appendString:[@(unitTwoValue) stringValue]];
    }
    else if(self.segmentController.selectedSegmentIndex == 1){
        double output2 = function2(userInput);
        [buf appendString: [@(output2) stringValue]];
    }
    else{
        double output3 = function3(userInput);
        [buf appendString: [@(output3) stringValue]];
        
    }
    
    self.outputField.text = buf;
    
}


@end
