// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from layer_configs.djinni

package ch.admin.geo.openswissmaps.shared.layers.config

import java.util.concurrent.atomic.AtomicBoolean

abstract class SwisstopoTiledLayerConfigFactory {

    companion object {
        @JvmStatic
        fun createRasterTileLayerConfig(layerType: SwisstopoLayerType): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig {
            return CppProxy.createRasterTileLayerConfig(layerType)
        }

        @JvmStatic
        fun createRasterTiledLayerConfigFromMetadata(configuration: io.openmobilemaps.mapscore.shared.map.layers.tiled.WmtsLayerConfiguration, maxZoom: Int, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig {
            return CppProxy.createRasterTiledLayerConfigFromMetadata(configuration, maxZoom, zoomInfo)
        }
    }

    private class CppProxy : SwisstopoTiledLayerConfigFactory {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        companion object {
            @JvmStatic
            external fun createRasterTileLayerConfig(layerType: SwisstopoLayerType): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig

            @JvmStatic
            external fun createRasterTiledLayerConfigFromMetadata(configuration: io.openmobilemaps.mapscore.shared.map.layers.tiled.WmtsLayerConfiguration, maxZoom: Int, zoomInfo: io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapZoomInfo): io.openmobilemaps.mapscore.shared.map.layers.tiled.Tiled2dMapLayerConfig
        }
    }
}
