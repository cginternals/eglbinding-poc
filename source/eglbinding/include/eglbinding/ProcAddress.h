
#pragma once


#include <functional>

#include <eglbinding/eglbinding_api.h>


namespace eglbinding
{


/**
*  @brief
*    The generic pointer to a function
*/
using ProcAddress = void(*)();

/**
*  @brief
*    The signature for the getProcAddress function
*/
using GetProcAddress = std::function<ProcAddress(const char*)>;


} // namespace eglbinding