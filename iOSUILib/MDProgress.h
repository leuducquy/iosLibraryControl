// The MIT License (MIT)
//
// Copyright (c) 2015 FPT Software
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>


typedef NS_ENUM (NSInteger, MDProgressStyle) {
    MDProgressStyleCircular,
    MDProgressStyleLinear
};

typedef NS_ENUM (NSInteger, MDProgressType) {
    MDProgressTypeIndeterminate,
    MDProgressTypeDeterminate,
    //  MDProgressTypeBuffer,
    //  MDProgressTypeQueryIndeterminateAndDeterminate
};

//IB_DESIGNABLE
@interface MDProgress : UIView

@property(nonatomic) IBInspectable UIColor *progressColor;
@property(nonatomic) IBInspectable UIColor *trackColor;
@property(nonatomic) MDProgressType progressType;
@property(nonatomic) MDProgressStyle progressStyle;

@property(nonatomic) IBInspectable NSInteger type;
@property(nonatomic) IBInspectable NSInteger style;
@property(nonatomic) IBInspectable CGFloat trackWidth;

@property(nonatomic) IBInspectable CGFloat progress;
@property(nonatomic) IBInspectable BOOL enableTrackColor;

- (id)initWithFrame:(CGRect)frame type:(enum MDProgressType)progressType;
@end
