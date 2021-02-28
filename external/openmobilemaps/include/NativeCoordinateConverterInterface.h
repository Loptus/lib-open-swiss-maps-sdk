// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#pragma once

#include "CoordinateConverterInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCoordinateConverterInterface final : ::djinni::JniInterface<::CoordinateConverterInterface, NativeCoordinateConverterInterface> {
public:
    using CppType = std::shared_ptr<::CoordinateConverterInterface>;
    using CppOptType = std::shared_ptr<::CoordinateConverterInterface>;
    using JniType = jobject;

    using Boxed = NativeCoordinateConverterInterface;

    ~NativeCoordinateConverterInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeCoordinateConverterInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeCoordinateConverterInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeCoordinateConverterInterface();
    friend ::djinni::JniClass<NativeCoordinateConverterInterface>;
    friend ::djinni::JniInterface<::CoordinateConverterInterface, NativeCoordinateConverterInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::CoordinateConverterInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        ::Coord convert(const ::Coord & coordinate) override;
        std::string getFrom() override;
        std::string getTo() override;

    private:
        friend ::djinni::JniInterface<::CoordinateConverterInterface, ::djinni_generated::NativeCoordinateConverterInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/coordinates/CoordinateConverterInterface") };
    const jmethodID method_convert { ::djinni::jniGetMethodID(clazz.get(), "convert", "(Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jmethodID method_getFrom { ::djinni::jniGetMethodID(clazz.get(), "getFrom", "()Ljava/lang/String;") };
    const jmethodID method_getTo { ::djinni::jniGetMethodID(clazz.get(), "getTo", "()Ljava/lang/String;") };
};

}  // namespace djinni_generated
