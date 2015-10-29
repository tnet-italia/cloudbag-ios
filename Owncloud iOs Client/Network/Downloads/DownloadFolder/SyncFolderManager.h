//
//  SyncFolderManager.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 25/09/15.
//
//

#import <Foundation/Foundation.h>

@class FileDto;
@class CWLOrderedDictionary;
@class IndexedForest;

@interface SyncFolderManager : NSObject

@property (nonatomic, strong) CWLOrderedDictionary *dictOfFoldersToBeCheck;
@property (nonatomic, strong) IndexedForest *forestOfFilesAndFoldersToBeDownloaded;

@property (nonatomic, strong) NSMutableArray *listOfFilesToBeDownloaded;

- (void) setThePermissionsOnDownloadCacheFolder;
- (void) addFolderToBeDownloaded: (FileDto *) folder;
- (void) cancelDownload: (FileDto *) file;
- (void) cancelAllDownloads;
//Method to add the file to the array just to take into account when we come back from background
- (void) simpleDownloadTheFile:(FileDto *) file andTask:(NSURLSessionDownloadTask *) task;
- (void) cancelDownloadsByFolder:(FileDto *) folder;

@end