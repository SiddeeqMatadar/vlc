/*****************************************************************************
 * VLCLibraryAudioDataSource.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2019 VLC authors and VideoLAN
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan -dot- org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

#import "VLCLibraryTableView.h"

NS_ASSUME_NONNULL_BEGIN

@class VLCLibraryModel;
@class VLCLibraryGroupDataSource;
@class VLCMediaLibraryAlbum;

@interface VLCLibraryAudioDataSource : NSObject <VLCLibraryTableViewDataSource, NSTableViewDelegate>

@property (readwrite, assign) VLCLibraryModel *libraryModel;
@property (readwrite, assign) VLCLibraryGroupDataSource *groupDataSource;
@property (readwrite, assign) NSSegmentedControl *segmentedControl;
@property (readwrite, assign) NSTableView *collectionSelectionTableView;
@property (readwrite, assign) NSTableView *groupSelectionTableView;
@property (readwrite, assign) NSCollectionView *collectionView;
@property (nonatomic, readwrite, assign) NSImageView *placeholderImageView;
@property (nonatomic, readwrite, assign) NSTextField *placeholderLabel;
@property (nonatomic, readonly, strong) NSString *imageNameForCurrentSegment;

- (IBAction)segmentedControlAction:(id)sender;
- (void)setupAppearance;
- (void)reloadAppearance;
- (void)reloadEmptyViewAppearance;
- (void)reloadData;

@end

@interface VLCLibraryGroupDataSource : NSObject <VLCLibraryTableViewDataSource, NSTableViewDelegate>

@property (readwrite, retain, nullable) NSArray <VLCMediaLibraryAlbum *> *representedListOfAlbums;

@end

NS_ASSUME_NONNULL_END
