// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include <vector>

class CameraInterface {
public:
    virtual ~CameraInterface() {}

    virtual std::vector<float> getMvpMatrix() = 0;

    virtual void viewportSizeChanged() = 0;
};
