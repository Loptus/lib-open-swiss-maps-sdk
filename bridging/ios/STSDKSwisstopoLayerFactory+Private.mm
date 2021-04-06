// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from layers.djinni

#import "STSDKSwisstopoLayerFactory+Private.h"
#import "STSDKSwisstopoLayerFactory.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCTileLoaderInterface+Private.h"
#import "MCTiled2dMapRasterLayerInterface+Private.h"
#import "MCTiled2dMapZoomInfo+Private.h"
#import "MCWmtsLayerDescription+Private.h"
#import "STSDKSwisstopoLayerType+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface STSDKSwisstopoLayerFactory ()

- (id)initWithCpp:(const std::shared_ptr<::SwisstopoLayerFactory>&)cppRef;

@end

@implementation STSDKSwisstopoLayerFactory {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::SwisstopoLayerFactory>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::SwisstopoLayerFactory>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCTiled2dMapRasterLayerInterface *)createSwisstopoTiledRasterLayer:(STSDKSwisstopoLayerType)layerType
                                                                    tileLoader:(nullable id<MCTileLoaderInterface>)tileLoader {
    try {
        auto objcpp_result_ = ::SwisstopoLayerFactory::createSwisstopoTiledRasterLayer(::djinni::Enum<::SwisstopoLayerType, STSDKSwisstopoLayerType>::toCpp(layerType),
                                                                                       ::djinni_generated::TileLoaderInterface::toCpp(tileLoader));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCTiled2dMapRasterLayerInterface *)createSwisstopoTiledRasterLayerFromMetadata:(nonnull MCWmtsLayerDescription *)description
                                                                                   maxZoom:(int32_t)maxZoom
                                                                                  zoomInfo:(nonnull MCTiled2dMapZoomInfo *)zoomInfo
                                                                                tileLoader:(nullable id<MCTileLoaderInterface>)tileLoader {
    try {
        auto objcpp_result_ = ::SwisstopoLayerFactory::createSwisstopoTiledRasterLayerFromMetadata(::djinni_generated::WmtsLayerDescription::toCpp(description),
                                                                                                   ::djinni::I32::toCpp(maxZoom),
                                                                                                   ::djinni_generated::Tiled2dMapZoomInfo::toCpp(zoomInfo),
                                                                                                   ::djinni_generated::TileLoaderInterface::toCpp(tileLoader));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto SwisstopoLayerFactory::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto SwisstopoLayerFactory::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<STSDKSwisstopoLayerFactory>(cpp);
}

}  // namespace djinni_generated

@end
