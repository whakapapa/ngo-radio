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

#include <radiotray-ng/notification/notification.hpp>
#include <iostream>


int main(int argc, char** argv)
{
	if (argc > 3)
	{
		Notification n;

		n.notify(argv[1], argv[2], argv[3]);
	}

	return 0;
}
