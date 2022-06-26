# Compile all cpp files in one program
# Copyright (C) 2022 lgmulti
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

# Contact me by email mid_sc@outlook.com

for i in `ls *.cpp` 
do
	exec=$(basename $i .cpp)
	echo -e Compiling "\033[36m $i \033[0m" using command "\033[36m \"g++ -o $exec $i ../../../lib/*.cpp\" \033[0m"
	g++ -o $exec $i ../../../lib/*.cpp
done

