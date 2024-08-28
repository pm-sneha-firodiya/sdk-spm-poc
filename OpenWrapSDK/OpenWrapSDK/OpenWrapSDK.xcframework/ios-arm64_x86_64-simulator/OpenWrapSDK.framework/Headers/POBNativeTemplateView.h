/*
* PubMatic Inc. ("PubMatic") CONFIDENTIAL
* Unpublished Copyright (c) 2006-2024 PubMatic, All Rights Reserved.
*
* NOTICE:  All information contained herein is, and remains the property of PubMatic. The intellectual and technical concepts contained
* herein are proprietary to PubMatic and may be covered by U.S. and Foreign Patents, patents in process, and are protected by trade secret or copyright law.
* Dissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained
* from PubMatic.  Access to the source code contained herein is hereby forbidden to anyone except current PubMatic employees, managers or contractors who have executed
* Confidentiality and Non-disclosure agreements explicitly covering such access or to such other persons whom are directly authorized by PubMatic to access the source code and are subject to confidentiality and nondisclosure obligations with respect to the source code.
*
* The copyright notice above does not evidence any actual or intended publication or disclosure  of  this source code, which includes
* information that is confidential and/or proprietary, and is a trade secret, of  PubMatic.   ANY REPRODUCTION, MODIFICATION, DISTRIBUTION, PUBLIC  PERFORMANCE,
* OR PUBLIC DISPLAY OF OR THROUGH USE  OF THIS  SOURCE CODE  WITHOUT  THE EXPRESS WRITTEN CONSENT OF PUBMATIC IS STRICTLY PROHIBITED, AND IN VIOLATION OF APPLICABLE
* LAWS AND INTERNATIONAL TREATIES.  THE RECEIPT OR POSSESSION OF  THIS SOURCE CODE AND/OR RELATED INFORMATION DOES NOT CONVEY OR IMPLY ANY RIGHTS
* TO REPRODUCE, DISCLOSE OR DISTRIBUTE ITS CONTENTS, OR TO MANUFACTURE, USE, OR SELL ANYTHING THAT IT  MAY DESCRIBE, IN WHOLE OR IN PART.
*/

#import <UIKit/UIKit.h>

/*!
 @abstract POBNativeTemplateView class is a superclass for small / medium templates and contains common assets.
 All these assets are required, and will be rendered by OpenWrap SDK.
 */
@interface POBNativeTemplateView : UIView
/*!
 @abstract NativeAd title with 25 character length
 */
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

/*!
 @abstract NativeAd description with 90 character length
 */
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

/*!
 @abstract Ad Icon Image with size 50x50
 */
@property (weak, nonatomic) IBOutlet UIImageView *iconImgView;

/*!
 @abstract NativeAd Privacy Icon with size 16x15
 */
@property (weak, nonatomic) IBOutlet UIImageView *privacyIconImgView;

/*!
 @abstract NativeAd AdIcon with size 16x15
 */
@property (weak, nonatomic) IBOutlet UIImageView *adIconImgView;

/*!
 @abstract CTA button with 15 character length
 */
@property (weak, nonatomic) IBOutlet UIButton *ctaButton;

/*!
 @abstract DSA icon with size 16x15
 */
@property (weak, nonatomic) IBOutlet UIImageView *dsaIconImgView;

@end
