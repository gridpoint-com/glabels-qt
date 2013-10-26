/*  Icons.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_Icons_h
#define glabels_Icons_h

#include <QIcon>


namespace gLabels
{

	namespace Icons
	{

		class Arrow : public QIcon
		{
		public:
			Arrow()
			{
				addFile( ":icons/16x16/actions/glabels-arrow.png" );
				addFile( ":icons/24x24/actions/glabels-arrow.png" );
			}
		};

		class Barcode : public QIcon
		{
		public:
			Barcode()
			{
				addFile( ":icons/16x16/actions/glabels-barcode.png" );
				addFile( ":icons/24x24/actions/glabels-barcode.png" );
			}
		};

		class Box : public QIcon
		{
		public:
			Box()
			{
				addFile( ":icons/16x16/actions/glabels-box.png" );
				addFile( ":icons/24x24/actions/glabels-box.png" );
			}
		};

		class Ellipse : public QIcon
		{
		public:
			Ellipse()
			{
				addFile( ":icons/16x16/actions/glabels-ellipse.png" );
				addFile( ":icons/24x24/actions/glabels-ellipse.png" );
			}
		};

		class Image : public QIcon
		{
		public:
			Image()
			{
				addFile( ":icons/16x16/actions/glabels-image.png" );
				addFile( ":icons/24x24/actions/glabels-image.png" );
			}
		};

		class Line : public QIcon
		{
		public:
			Line()
			{
				addFile( ":icons/16x16/actions/glabels-line.png" );
				addFile( ":icons/24x24/actions/glabels-line.png" );
			}
		};

		class Text : public QIcon
		{
		public:
			Text()
			{
				addFile( ":icons/16x16/actions/glabels-text.png" );
				addFile( ":icons/24x24/actions/glabels-text.png" );
			}
		};

		class Merge : public QIcon
		{
		public:
			Merge()
			{
				addFile( ":icons/16x16/actions/glabels-merge.png" );
				addFile( ":icons/24x24/actions/glabels-merge.png" );
			}
		};

		class ObjectProperties : public QIcon
		{
		public:
			ObjectProperties()
			{
				addFile( ":icons/16x16/actions/glabels-object-properties.png" );
				addFile( ":icons/24x24/actions/glabels-object-properties.png" );
			}
		};

		class AlignLeft : public QIcon
		{
		public:
			AlignLeft()
			{
				addFile( ":icons/16x16/actions/glabels-align-left.png" );
			}
		};

		class AlignHCenter : public QIcon
		{
		public:
			AlignHCenter()
			{
				addFile( ":icons/16x16/actions/glabels-align-hcenter.png" );
			}
		};

		class AlignRight : public QIcon
		{
		public:
			AlignRight()
			{
				addFile( ":icons/16x16/actions/glabels-align-right.png" );
			}
		};

		class AlignBottom : public QIcon
		{
		public:
			AlignBottom()
			{
				addFile( ":icons/16x16/actions/glabels-align-bottom.png" );
			}
		};

		class AlignVCenter : public QIcon
		{
		public:
			AlignVCenter()
			{
				addFile( ":icons/16x16/actions/glabels-align-vcenter.png" );
			}
		};

		class AlignTop : public QIcon
		{
		public:
			AlignTop()
			{
				addFile( ":icons/16x16/actions/glabels-align-top.png" );
			}
		};

		class CenterHoriz : public QIcon
		{
		public:
			CenterHoriz()
			{
				addFile( ":icons/16x16/actions/glabels-center-horiz.png" );
			}
		};

		class CenterVert : public QIcon
		{
		public:
			CenterVert()
			{
				addFile( ":icons/16x16/actions/glabels-center-vert.png" );
			}
		};

		class FlipHoriz : public QIcon
		{
		public:
			FlipHoriz()
			{
				addFile( ":icons/16x16/actions/glabels-flip-horiz.png" );
			}
		};

		class FlipVert : public QIcon
		{
		public:
			FlipVert()
			{
				addFile( ":icons/16x16/actions/glabels-flip-vert.png" );
			}
		};

		class RotateLeft : public QIcon
		{
		public:
			RotateLeft()
			{
				addFile( ":icons/16x16/actions/glabels-rotate-left.png" );
			}
		};

		class RotateRight : public QIcon
		{
		public:
			RotateRight()
			{
				addFile( ":icons/16x16/actions/glabels-rotate-right.png" );
			}
		};

		class OrderBottom : public QIcon
		{
		public:
			OrderBottom()
			{
				addFile( ":icons/16x16/actions/glabels-order-bottom.png" );
			}
		};

		class OrderTop : public QIcon
		{
		public:
			OrderTop()
			{
				addFile( ":icons/16x16/actions/glabels-order-top.png" );
			}
		};

		class AlignTextBottom : public QIcon
		{
		public:
			AlignTextBottom()
			{
				addFile( ":icons/24x24/actions/glabels-align-text-bottom.png" );
			}
		};

		class AlignTextMiddle : public QIcon
		{
		public:
			AlignTextMiddle()
			{
				addFile( ":icons/24x24/actions/glabels-align-text-middle.png" );
			}
		};

		class AlignTextTop : public QIcon
		{
		public:
			AlignTextTop()
			{
				addFile( ":icons/24x24/actions/glabels-align-text-top.png" );
			}
		};

		class BucketFill : public QIcon
		{
		public:
			BucketFill()
			{
				addFile( ":icons/16x16/actions/glabels-bucket-fill.png" );
				addFile( ":icons/24x24/actions/glabels-bucket-fill.png" );
			}
		};

		class Pencil : public QIcon
		{
		public:
			Pencil()
			{
				addFile( ":icons/16x16/actions/glabels-pencil.png" );
				addFile( ":icons/24x24/actions/glabels-pencil.png" );
			}
		};

		class Glabels : public QIcon
		{
		public:
			Glabels()
			{
				addFile( ":icons/16x16/apps/glabels.png" );
				addFile( ":icons/24x24/apps/glabels.png" );
				addFile( ":icons/32x32/apps/glabels.png" );
				addFile( ":icons/48x48/apps/glabels.png" );
				addFile( ":icons/scalable/apps/glabels.svg" );
			}
		};

	}
}

#endif // glabels_Icons_h