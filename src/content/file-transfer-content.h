/*
 * file-transfer-content.h
 * Copyright (C) 2010-2017 Belledonne Communications SARL
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _FILE_TRANSFER_CONTENT_H_
#define _FILE_TRANSFER_CONTENT_H_

#include "content.h"
#include "file-content.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class FileTransferContentPrivate;

class LINPHONE_PUBLIC FileTransferContent : public Content {
public:
	FileTransferContent();
	FileTransferContent (const FileTransferContent &src);
	FileTransferContent (FileTransferContent &&src);

	FileTransferContent &operator= (const FileTransferContent &src);
	FileTransferContent &operator= (FileTransferContent &&src);
	bool operator== (const FileTransferContent &content) const;
	
	void setFileName(const std::string &name);
	const std::string& getFileName() const;
	
	void setFileUrl(const std::string &url);
	const std::string& getFileUrl() const;
	
	void setFilePath(const std::string &path);
	const std::string& getFilePath() const;

	void setFileContent(FileContent *content);
	FileContent* getFileContent() const;

	LinphoneContent * toLinphoneContent() const override;

private:
	L_DECLARE_PRIVATE(FileTransferContent);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _FILE_TRANSFER_CONTENT_H_
