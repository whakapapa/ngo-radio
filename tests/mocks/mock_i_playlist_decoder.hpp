// Copyright 2017 Edward G. Bruck <ed.bruck1@gmail.com>
//
// This file is part of Radiotray-NG.
//
// Radiotray-NG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Radiotray-NG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Radiotray-NG. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <gmock/gmock.h>
#include <radiotray-ng/i_playlist_decoder.hpp>

class MockIPlaylistDecoder : public IPlaylistDecoder {
public:
	MOCK_METHOD1(is_decodable,
		bool(const std::string& content_type));
		MOCK_METHOD2(decode,
			bool(const std::string& payload, playlist_t& playlist));
			MOCK_METHOD0(get_name,
				std::string());
			};
