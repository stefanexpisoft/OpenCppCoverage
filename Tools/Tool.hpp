// OpenCppCoverage is an open source code coverage for C++.
// Copyright (C) 2014 OpenCppCoverage
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <string>
#include <functional>

#include <boost/filesystem.hpp>

#include "ToolsExport.hpp"

namespace Tools
{	
	TOOLS_DLL std::wstring ToWString(const std::string&);
	TOOLS_DLL std::string ToString(const std::wstring&);
	TOOLS_DLL void Try(std::function<void()>);
	TOOLS_DLL void CheckPathExists(const boost::filesystem::path&);		
	TOOLS_DLL boost::filesystem::path GetTemplateFolder();

	TOOLS_DLL boost::filesystem::path MakeRelativeFrom(
		const boost::filesystem::path& absolutePath, 
		const boost::filesystem::path& currentFolder);

	TOOLS_DLL boost::filesystem::path GetUniquePath(const boost::filesystem::path& prefix);

	TOOLS_DLL void CreateMiniDumpOnUnHandledException();
}

