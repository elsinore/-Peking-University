//
//  ViewController.m
//  PeerReview003
//
//  Created by 王紫仪 on 10/07/2017.
//  Copyright © 2017 WangZiyi. All rights reserved.
//

#import "ViewController.h"
#import "CurrencyRequest/CRCurrencyRequest.h"
#import "CurrencyRequest/CRCurrencyResults.h"

@interface ViewController () <CRCurrencyRequestDelegate>

@property (nonatomic) CRCurrencyRequest *req;
@property (weak, nonatomic) IBOutlet UITextField *inputField;
@property (weak, nonatomic) IBOutlet UIButton *convertButton;
@property (weak, nonatomic) IBOutlet UILabel *currencyA;
@property (weak, nonatomic) IBOutlet UILabel *currencyB;
@property (weak, nonatomic) IBOutlet UILabel *currencyC;

@end

@implementation ViewController

- (IBAction)buttonTapped:(id)sender {
    self.convertButton.enabled = NO;
    
    self.req = [[CRCurrencyRequest alloc] init];
    self.req.delegate = self;
    [self.req start];
}

- (void)currencyRequest:(CRCurrencyRequest *)req
    retrievedCurrencies:(CRCurrencyResults *)currencies {
    self.convertButton.enabled = YES;
    
    double inputValue = [self.inputField.text floatValue];
    
    double euroValue = inputValue * currencies.EUR;
    double YenValue = inputValue * currencies.JPY;
    double GBPValue = inputValue * currencies.GBP;
    
    NSString *tempA = [NSString stringWithFormat:@"%.2f", euroValue];
    NSString *tempB = [NSString stringWithFormat:@"%.2f", YenValue];
    NSString *tempC = [NSString stringWithFormat:@"%.2f", GBPValue];

    self.currencyA.text = tempA;
    self.currencyB.text = tempB;
    self.currencyC.text = tempC;

}


@end
