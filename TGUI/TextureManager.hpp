/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus's Graphical User Interface
// Copyright (C) 2012-2015 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef TGUI_TEXTURE_MANAGER_HPP
#define TGUI_TEXTURE_MANAGER_HPP

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <list>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct TextureData
    {
        TextureData() : image(nullptr) {}

        sf::Image*    image;
        sf::Texture   texture;
        sf::IntRect   rect;
        std::string   filename;
        unsigned int  users;
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    struct Texture
    {
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Texture();

        sf::Vector2u getSize() const;
        bool isTransparentPixel(unsigned int x, unsigned int y);

        operator const sf::Sprite&() const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TextureData* data;
        sf::Sprite   sprite;
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class TGUI_API TextureManager : public sf::NonCopyable
    {
      public:

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Loads a texture.
        ///
        /// \param filename  Filename of the image to load.
        /// \param texture   The texture object to store the loaded image.
        /// \param rect      Load only part of the image. Don't pass this parameter if you want to load the full image.
        ///
        /// The second time you call this function with the same filename, the previously loaded image will be reused.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool getTexture(const std::string& filename, Texture& texture, const sf::IntRect& rect = sf::IntRect(0, 0, 0, 0));


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Share the image with another texture.
        ///
        /// \param textureToCopy  The original texture.
        /// \param newTexture     The texture that will get the same image as the texture that is being copied
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool copyTexture(const Texture& textureToCopy, Texture& newTexture);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// \brief Removes the texture.
        ///
        /// \param textureToRemove  The texture that should be removed.
        ///
        /// When no other texture is using the same image then the image will be removed from memory.
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void removeTexture(Texture& textureToRemove);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      protected:

        struct ImageMapData
        {
            sf::Image image;
            std::list<TextureData> data;
        };

        std::map<std::string, ImageMapData> m_ImageMap;
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_TEXTURE_MANAGER_HPP
