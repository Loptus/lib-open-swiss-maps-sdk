// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "RenderPassInterface.h"
#include <memory>
#include <vector>

class MapInterface;

class LayerInterface {
public:
    virtual ~LayerInterface() {}

    virtual void update() = 0;

    virtual std::vector<std::shared_ptr<::RenderPassInterface>> buildRenderPasses() = 0;

    virtual void onAdded(const std::shared_ptr<MapInterface> & mapInterface) = 0;

    virtual void onRemoved() = 0;

    virtual void pause() = 0;

    virtual void resume() = 0;

    virtual void hide() = 0;

    virtual void show() = 0;
};
