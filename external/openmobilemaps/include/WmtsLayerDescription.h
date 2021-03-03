// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wmts_capabilities.djinni

#pragma once

#include "RectCoord.h"
#include "WmtsLayerDimension.h"
#include <optional>
#include <string>
#include <utility>
#include <vector>

struct WmtsLayerDescription final {
    std::string identifier;
    std::optional<std::string> title;
    std::optional<std::string> abstractText;
    std::vector<WmtsLayerDimension> dimensions;
    ::RectCoord bounds;
    std::string tileMatrixSetLink;
    std::string resourceTemplate;
    std::string resourceFormat;

    WmtsLayerDescription(std::string identifier_,
                         std::optional<std::string> title_,
                         std::optional<std::string> abstractText_,
                         std::vector<WmtsLayerDimension> dimensions_,
                         ::RectCoord bounds_,
                         std::string tileMatrixSetLink_,
                         std::string resourceTemplate_,
                         std::string resourceFormat_)
    : identifier(std::move(identifier_))
    , title(std::move(title_))
    , abstractText(std::move(abstractText_))
    , dimensions(std::move(dimensions_))
    , bounds(std::move(bounds_))
    , tileMatrixSetLink(std::move(tileMatrixSetLink_))
    , resourceTemplate(std::move(resourceTemplate_))
    , resourceFormat(std::move(resourceFormat_))
    {}
};
