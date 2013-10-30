//
//  FlickrPhotoCell.h
//  Flickr Search
//
//  Created by WPPA on 21/10/13.
//  Copyright (c) 2013 WPPA. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlickrPhoto;

@interface FlickrPhotoCell : UICollectionViewCell
@property(nonatomic, strong) IBOutlet UIImageView *imageView;
@property(nonatomic, strong) FlickrPhoto *photo;
@end
