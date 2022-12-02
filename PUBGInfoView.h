//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, NSMutableDictionary, PUBGInfoModel, PUBGlnfohpView, UIImageView, UILabel;

@interface PUBGInfoView : UIView
{
    PUBGInfoModel *_model;
    UILabel *_numberLabel;
    UILabel *_nickLabel;
    UILabel *_distanceLabel;
    UIImageView *_armsimage;
    CAShapeLayer *_arrowLayer;
    PUBGlnfohpView *_progressView;
    NSArray *_colors;
    NSMutableDictionary *_imageInfo;
}

+ (double)offsetY;
+ (id)infoView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) PUBGlnfohpView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIImageView *armsimage; // @synthesize armsimage=_armsimage;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) PUBGInfoModel *model; // @synthesize model=_model;
- (void)xjh_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deleteview;

@end

