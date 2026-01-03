#pragma once

#include <onyx/engine/enginesystem.h>

namespace meshproceduralgeneration
{
    class GameSystem : public Onyx::IEngineSystem
    {
    public:
        static constexpr Onyx::StringId32 TypeId = "meshproceduralgeneration::GameSystem";
        Onyx::StringId32 GetTypeId() const override { return TypeId; }

        void Init();
    };
}
