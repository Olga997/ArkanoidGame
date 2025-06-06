#include "BlockFactory.h"
#include "Block.h"

namespace ArkanoidGame
{
    int BlockFactory::GetcreatedBreackableBlocksCount()
    {
        return createdBreackableBlocksCount;
    }

    void BlockFactory::ClearCounter()
    {
        createdBreackableBlocksCount = 0;
    }

    std::shared_ptr<Block> SimpleBlockFactory::CreateBlock(const sf::Vector2f& position)
    {
        ++createdBreackableBlocksCount;
        return std::make_shared<SmoothDestroyableBlock>(position);
    }

    std::shared_ptr<Block> TwoHitBlockFactory::CreateBlock(const sf::Vector2f& position)
    {
        ++createdBreackableBlocksCount;
        return std::make_shared<TwoHitBlock>(position);
    }

    std::shared_ptr<Block> UnbreackableBlockFactory::CreateBlock(const sf::Vector2f& position)
    {
        return std::make_shared<UnbreackableBlock>(position);
    }
}
