/*****************************************************************************
 * builder_data.hpp
 *****************************************************************************
 * Copyright (C) 2003 VideoLAN
 * $Id$
 *
 * Authors: Cyril Deguet     <asmax@via.ecp.fr>
 *          Olivier Teuli�re <ipkiss@via.ecp.fr>
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

//File generated by gen_builder.py
//DO NOT EDIT BY HAND !

#ifndef BUILDER_DATA_HPP
#define BUILDER_DATA_HPP

#include <vlc/vlc.h>
#include <list>
#include <map>
#include <string>

using namespace std;

/// Structure for mapping data from XML file
struct BuilderData
{

    /// Type definition
    struct Theme
    {
        Theme( const string & tooltipfont, int magnet, uint32_t alpha, uint32_t moveAlpha ):
m_tooltipfont( tooltipfont ), m_magnet( magnet ), m_alpha( alpha ), m_moveAlpha( moveAlpha ) {}

        const string m_tooltipfont;
        int m_magnet;
        uint32_t m_alpha;
        uint32_t m_moveAlpha;
    };
    /// List
    list<Theme> m_listTheme;

    /// Type definition
    struct Bitmap
    {
        Bitmap( const string & id, const string & fileName, uint32_t alphaColor ):
m_id( id ), m_fileName( fileName ), m_alphaColor( alphaColor ) {}

        const string m_id;
        const string m_fileName;
        uint32_t m_alphaColor;
    };
    /// List
    list<Bitmap> m_listBitmap;

    /// Type definition
    struct BitmapFont
    {
        BitmapFont( const string & id, const string & file, const string & type ):
m_id( id ), m_file( file ), m_type( type ) {}

        const string m_id;
        const string m_file;
        const string m_type;
    };
    /// List
    list<BitmapFont> m_listBitmapFont;

    /// Type definition
    struct Font
    {
        Font( const string & id, const string & fontFile, int size ):
m_id( id ), m_fontFile( fontFile ), m_size( size ) {}

        const string m_id;
        const string m_fontFile;
        int m_size;
    };
    /// List
    list<Font> m_listFont;

    /// Type definition
    struct Window
    {
        Window( const string & id, int xPos, int yPos, bool visible, bool dragDrop, bool playOnDrop ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_visible( visible ), m_dragDrop( dragDrop ), m_playOnDrop( playOnDrop ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        bool m_visible;
        bool m_dragDrop;
        bool m_playOnDrop;
    };
    /// List
    list<Window> m_listWindow;

    /// Type definition
    struct Layout
    {
        Layout( const string & id, int width, int height, int minWidth, int maxWidth, int minHeight, int maxHeight, const string & windowId ):
m_id( id ), m_width( width ), m_height( height ), m_minWidth( minWidth ), m_maxWidth( maxWidth ), m_minHeight( minHeight ), m_maxHeight( maxHeight ), m_windowId( windowId ) {}

        const string m_id;
        int m_width;
        int m_height;
        int m_minWidth;
        int m_maxWidth;
        int m_minHeight;
        int m_maxHeight;
        const string m_windowId;
    };
    /// List
    list<Layout> m_listLayout;

    /// Type definition
    struct Anchor
    {
        Anchor( int xPos, int yPos, int range, int priority, const string & points, const string & layoutId ):
m_xPos( xPos ), m_yPos( yPos ), m_range( range ), m_priority( priority ), m_points( points ), m_layoutId( layoutId ) {}

        int m_xPos;
        int m_yPos;
        int m_range;
        int m_priority;
        const string m_points;
        const string m_layoutId;
    };
    /// List
    list<Anchor> m_listAnchor;

    /// Type definition
    struct Button
    {
        Button( const string & id, int xPos, int yPos, const string & leftTop, const string & rightBottom, const string & visible, const string & upId, const string & downId, const string & overId, const string & actionId, const string & tooltip, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_visible( visible ), m_upId( upId ), m_downId( downId ), m_overId( overId ), m_actionId( actionId ), m_tooltip( tooltip ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_visible;
        const string m_upId;
        const string m_downId;
        const string m_overId;
        const string m_actionId;
        const string m_tooltip;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Button> m_listButton;

    /// Type definition
    struct Checkbox
    {
        Checkbox( const string & id, int xPos, int yPos, const string & leftTop, const string & rightBottom, const string & visible, const string & up1Id, const string & down1Id, const string & over1Id, const string & up2Id, const string & down2Id, const string & over2Id, const string & state, const string & action1, const string & action2, const string & tooltip1, const string & tooltip2, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_visible( visible ), m_up1Id( up1Id ), m_down1Id( down1Id ), m_over1Id( over1Id ), m_up2Id( up2Id ), m_down2Id( down2Id ), m_over2Id( over2Id ), m_state( state ), m_action1( action1 ), m_action2( action2 ), m_tooltip1( tooltip1 ), m_tooltip2( tooltip2 ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_visible;
        const string m_up1Id;
        const string m_down1Id;
        const string m_over1Id;
        const string m_up2Id;
        const string m_down2Id;
        const string m_over2Id;
        const string m_state;
        const string m_action1;
        const string m_action2;
        const string m_tooltip1;
        const string m_tooltip2;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Checkbox> m_listCheckbox;

    /// Type definition
    struct Image
    {
        Image( const string & id, int xPos, int yPos, const string & leftTop, const string & rightBottom, const string & visible, const string & bmpId, const string & actionId, const string & resize, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_visible( visible ), m_bmpId( bmpId ), m_actionId( actionId ), m_resize( resize ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_visible;
        const string m_bmpId;
        const string m_actionId;
        const string m_resize;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Image> m_listImage;

    /// Type definition
    struct Text
    {
        Text( const string & id, int xPos, int yPos, const string & visible, const string & fontId, const string & text, int width, const string & leftTop, const string & rightBottom, uint32_t color, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_visible( visible ), m_fontId( fontId ), m_text( text ), m_width( width ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_color( color ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        const string m_visible;
        const string m_fontId;
        const string m_text;
        int m_width;
        const string m_leftTop;
        const string m_rightBottom;
        uint32_t m_color;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Text> m_listText;

    /// Type definition
    struct RadialSlider
    {
        RadialSlider( const string & id, const string & visible, int xPos, int yPos, const string & leftTop, const string & rightBottom, const string & sequence, int nbImages, float minAngle, float maxAngle, const string & value, const string & tooltip, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_visible( visible ), m_xPos( xPos ), m_yPos( yPos ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_sequence( sequence ), m_nbImages( nbImages ), m_minAngle( minAngle ), m_maxAngle( maxAngle ), m_value( value ), m_tooltip( tooltip ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        const string m_visible;
        int m_xPos;
        int m_yPos;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_sequence;
        int m_nbImages;
        float m_minAngle;
        float m_maxAngle;
        const string m_value;
        const string m_tooltip;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<RadialSlider> m_listRadialSlider;

    /// Type definition
    struct Slider
    {
        Slider( const string & id, const string & visible, int xPos, int yPos, const string & leftTop, const string & rightBottom, const string & upId, const string & downId, const string & overId, const string & points, int thickness, const string & value, const string & tooltip, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_visible( visible ), m_xPos( xPos ), m_yPos( yPos ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_upId( upId ), m_downId( downId ), m_overId( overId ), m_points( points ), m_thickness( thickness ), m_value( value ), m_tooltip( tooltip ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        const string m_visible;
        int m_xPos;
        int m_yPos;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_upId;
        const string m_downId;
        const string m_overId;
        const string m_points;
        int m_thickness;
        const string m_value;
        const string m_tooltip;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Slider> m_listSlider;

    /// Type definition
    struct List
    {
        List( const string & id, int xPos, int yPos, const string & visible, int width, int height, const string & leftTop, const string & rightBottom, const string & fontId, const string & var, const string & bgImageId, uint32_t fgColor, uint32_t playColor, uint32_t bgColor1, uint32_t bgColor2, uint32_t selColor, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_visible( visible ), m_width( width ), m_height( height ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_fontId( fontId ), m_var( var ), m_bgImageId( bgImageId ), m_fgColor( fgColor ), m_playColor( playColor ), m_bgColor1( bgColor1 ), m_bgColor2( bgColor2 ), m_selColor( selColor ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        const string m_visible;
        int m_width;
        int m_height;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_fontId;
        const string m_var;
        const string m_bgImageId;
        uint32_t m_fgColor;
        uint32_t m_playColor;
        uint32_t m_bgColor1;
        uint32_t m_bgColor2;
        uint32_t m_selColor;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<List> m_listList;

    /// Type definition
    struct Video
    {
        Video( const string & id, int xPos, int yPos, int width, int height, const string & leftTop, const string & rightBottom, const string & visible, const string & help, int layer, const string & windowId, const string & layoutId ):
m_id( id ), m_xPos( xPos ), m_yPos( yPos ), m_width( width ), m_height( height ), m_leftTop( leftTop ), m_rightBottom( rightBottom ), m_visible( visible ), m_help( help ), m_layer( layer ), m_windowId( windowId ), m_layoutId( layoutId ) {}

        const string m_id;
        int m_xPos;
        int m_yPos;
        int m_width;
        int m_height;
        const string m_leftTop;
        const string m_rightBottom;
        const string m_visible;
        const string m_help;
        int m_layer;
        const string m_windowId;
        const string m_layoutId;
    };
    /// List
    list<Video> m_listVideo;


};

#endif
