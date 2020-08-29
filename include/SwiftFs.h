/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Frank Li(lgl88911@163.com)
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTFS_H_
#define _SWIFTFS_H_

enum {
	SWIFTFS_DIR_ENTRY_FILE = 0,
	SWIFTFS_DIR_ENTRY_DIR
};

enum {
	SWIFTFS_SEEK_SET,
	SWIFTFS_SEEK_CUR,
	SWIFTFS_SEEK_END
};


typedef struct {
	unsigned char type;
	char name[256];
	unsigned int size;
} swift_dirent_t;



typedef struct {
	unsigned long f_bsize;
	unsigned long f_frsize;
	unsigned long f_blocks;
	unsigned long f_bfree;
} swift_statvfs_t;

char *swiftHal_FsGetMountPoint(void);
void *swiftHal_FsOpen(char *path);
int swiftHal_FsClose(void *fp);
int swiftHal_FsRemove(char *path);
int swiftHal_FsRename(char *from, char *to);
int swiftHal_FsWrite(void *fp, void *ptr, unsigned int size);
int swiftHal_FsRead(void *fp, void *ptr, unsigned int size);
int swiftHal_FsSeek(void *fp, int offset, int whence);
int swiftHal_FsTell(void *fp);
int swiftHal_FsTruncate(void *fp, unsigned int length);
int swiftHal_FsSync(void *fp);
int swiftHal_Fsmkdir(char *path);
void *swiftHal_FsOpenDir(char *path);
int swiftHal_FsReadDir(void *dp, swift_dirent_t *entry);
int swiftHal_FsCloseDir(void *dp);
int swiftHal_FsStat(char *path, swift_dirent_t *entry);
int swiftHal_FsStatvfs(char *path, swift_statvfs_t *stat);

#endif /*_SWIFTFS_H_*/

