/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevice16BitStorageFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevice16BitStorageFeatures, storageBuffer16BitAccess),
		FEATURE_ITEM (VkPhysicalDevice16BitStorageFeatures, uniformAndStorageBuffer16BitAccess),
		FEATURE_ITEM (VkPhysicalDevice16BitStorageFeatures, storagePushConstant16),
		FEATURE_ITEM (VkPhysicalDevice16BitStorageFeatures, storageInputOutput16),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 4, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMultiviewFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMultiviewFeatures, multiview),
		FEATURE_ITEM (VkPhysicalDeviceMultiviewFeatures, multiviewGeometryShader),
		FEATURE_ITEM (VkPhysicalDeviceMultiviewFeatures, multiviewTessellationShader),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVariablePointersFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVariablePointersFeatures, variablePointersStorageBuffer),
		FEATURE_ITEM (VkPhysicalDeviceVariablePointersFeatures, variablePointers),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceProtectedMemoryFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceProtectedMemoryFeatures, protectedMemory),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceSamplerYcbcrConversionFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceSamplerYcbcrConversionFeatures, samplerYcbcrConversion),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderDrawParametersFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderDrawParametersFeatures, shaderDrawParameters),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVulkan11Features>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, storageBuffer16BitAccess),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, uniformAndStorageBuffer16BitAccess),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, storagePushConstant16),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, storageInputOutput16),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, multiview),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, multiviewGeometryShader),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, multiviewTessellationShader),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, variablePointersStorageBuffer),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, variablePointers),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, protectedMemory),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, samplerYcbcrConversion),
		FEATURE_ITEM (VkPhysicalDeviceVulkan11Features, shaderDrawParameters),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVulkan11Features*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 12, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, DE_NULL, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVulkan12Features>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, samplerMirrorClampToEdge),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, drawIndirectCount),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, storageBuffer8BitAccess),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, uniformAndStorageBuffer8BitAccess),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, storagePushConstant8),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderBufferInt64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderSharedInt64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderFloat16),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderInt8),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderInputAttachmentArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderUniformTexelBufferArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderStorageTexelBufferArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderUniformBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderSampledImageArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderStorageBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderStorageImageArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderInputAttachmentArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderUniformTexelBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderStorageTexelBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingUniformBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingSampledImageUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingStorageImageUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingStorageBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingUniformTexelBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingStorageTexelBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingUpdateUnusedWhilePending),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingPartiallyBound),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, descriptorBindingVariableDescriptorCount),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, runtimeDescriptorArray),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, samplerFilterMinmax),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, scalarBlockLayout),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, imagelessFramebuffer),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, uniformBufferStandardLayout),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderSubgroupExtendedTypes),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, separateDepthStencilLayouts),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, hostQueryReset),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, timelineSemaphore),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, bufferDeviceAddress),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, bufferDeviceAddressCaptureReplay),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, bufferDeviceAddressMultiDevice),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, vulkanMemoryModel),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, vulkanMemoryModelDeviceScope),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, vulkanMemoryModelAvailabilityVisibilityChains),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderOutputViewportIndex),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, shaderOutputLayer),
		FEATURE_ITEM (VkPhysicalDeviceVulkan12Features, subgroupBroadcastDynamicId),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVulkan12Features*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 47, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, DE_NULL, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevice8BitStorageFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevice8BitStorageFeatures, storageBuffer8BitAccess),
		FEATURE_ITEM (VkPhysicalDevice8BitStorageFeatures, uniformAndStorageBuffer8BitAccess),
		FEATURE_ITEM (VkPhysicalDevice8BitStorageFeatures, storagePushConstant8),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderAtomicInt64Features>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicInt64Features, shaderBufferInt64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicInt64Features, shaderSharedInt64Atomics),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderFloat16Int8Features>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderFloat16Int8Features, shaderFloat16),
		FEATURE_ITEM (VkPhysicalDeviceShaderFloat16Int8Features, shaderInt8),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDescriptorIndexingFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderInputAttachmentArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderUniformTexelBufferArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderStorageTexelBufferArrayDynamicIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderUniformBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderSampledImageArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderStorageBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderStorageImageArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderInputAttachmentArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderUniformTexelBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, shaderStorageTexelBufferArrayNonUniformIndexing),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingUniformBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingSampledImageUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingStorageImageUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingStorageBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingUniformTexelBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingStorageTexelBufferUpdateAfterBind),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingUpdateUnusedWhilePending),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingPartiallyBound),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, descriptorBindingVariableDescriptorCount),
		FEATURE_ITEM (VkPhysicalDeviceDescriptorIndexingFeatures, runtimeDescriptorArray),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 20, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceScalarBlockLayoutFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceScalarBlockLayoutFeatures, scalarBlockLayout),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVulkanMemoryModelFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVulkanMemoryModelFeatures, vulkanMemoryModel),
		FEATURE_ITEM (VkPhysicalDeviceVulkanMemoryModelFeatures, vulkanMemoryModelDeviceScope),
		FEATURE_ITEM (VkPhysicalDeviceVulkanMemoryModelFeatures, vulkanMemoryModelAvailabilityVisibilityChains),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceImagelessFramebufferFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceImagelessFramebufferFeatures, imagelessFramebuffer),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceUniformBufferStandardLayoutFeatures, uniformBufferStandardLayout),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures, shaderSubgroupExtendedTypes),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures, separateDepthStencilLayouts),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceHostQueryResetFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceHostQueryResetFeatures, hostQueryReset),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceTimelineSemaphoreFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceTimelineSemaphoreFeatures, timelineSemaphore),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceBufferDeviceAddressFeatures>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeatures, bufferDeviceAddress),
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeatures, bufferDeviceAddressCaptureReplay),
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeatures, bufferDeviceAddressMultiDevice),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePerformanceQueryFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePerformanceQueryFeaturesKHR, performanceCounterQueryPools),
		FEATURE_ITEM (VkPhysicalDevicePerformanceQueryFeaturesKHR, performanceCounterMultipleQueryPools),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderClockFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderClockFeaturesKHR, shaderSubgroupClock),
		FEATURE_ITEM (VkPhysicalDeviceShaderClockFeaturesKHR, shaderDeviceClock),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR, shaderTerminateInvocation),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateFeaturesKHR, pipelineFragmentShadingRate),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateFeaturesKHR, primitiveFragmentShadingRate),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateFeaturesKHR, attachmentFragmentShadingRate),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePresentWaitFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePresentWaitFeaturesKHR, presentWait),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR, pipelineExecutableInfo),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR, shaderIntegerDotProduct),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePresentIdFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePresentIdFeaturesKHR, presentId),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceSynchronization2FeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceSynchronization2FeaturesKHR, synchronization2),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceSynchronization2FeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR, shaderSubgroupUniformControlFlow),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR, shaderZeroInitializeWorkgroupMemory),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, workgroupMemoryExplicitLayout),
		FEATURE_ITEM (VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, workgroupMemoryExplicitLayoutScalarBlockLayout),
		FEATURE_ITEM (VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, workgroupMemoryExplicitLayout8BitAccess),
		FEATURE_ITEM (VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, workgroupMemoryExplicitLayout16BitAccess),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 4, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMaintenance4FeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMaintenance4FeaturesKHR, maintenance4),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMaintenance4FeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceTransformFeedbackFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceTransformFeedbackFeaturesEXT, transformFeedback),
		FEATURE_ITEM (VkPhysicalDeviceTransformFeedbackFeaturesEXT, geometryStreams),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceCornerSampledImageFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceCornerSampledImageFeaturesNV, cornerSampledImage),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT, textureCompressionASTC_HDR),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceASTCDecodeFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceASTCDecodeFeaturesEXT, decodeModeSharedExponent),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceConditionalRenderingFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceConditionalRenderingFeaturesEXT, conditionalRendering),
		FEATURE_ITEM (VkPhysicalDeviceConditionalRenderingFeaturesEXT, inheritedConditionalRendering),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDepthClipEnableFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDepthClipEnableFeaturesEXT, depthClipEnable),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceInlineUniformBlockFeaturesEXT, inlineUniformBlock),
		FEATURE_ITEM (VkPhysicalDeviceInlineUniformBlockFeaturesEXT, descriptorBindingInlineUniformBlockUpdateAfterBind),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT, advancedBlendCoherentOperations),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderSMBuiltinsFeaturesNV, shaderSMBuiltins),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShadingRateImageFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShadingRateImageFeaturesNV, shadingRateImage),
		FEATURE_ITEM (VkPhysicalDeviceShadingRateImageFeaturesNV, shadingRateCoarseSampleOrder),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV, representativeFragmentTest),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT, vertexAttributeInstanceRateDivisor),
		FEATURE_ITEM (VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT, vertexAttributeInstanceRateZeroDivisor),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceComputeShaderDerivativesFeaturesNV, computeDerivativeGroupQuads),
		FEATURE_ITEM (VkPhysicalDeviceComputeShaderDerivativesFeaturesNV, computeDerivativeGroupLinear),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMeshShaderFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMeshShaderFeaturesNV, taskShader),
		FEATURE_ITEM (VkPhysicalDeviceMeshShaderFeaturesNV, meshShader),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV, fragmentShaderBarycentric),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderImageFootprintFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderImageFootprintFeaturesNV, imageFootprint),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceExclusiveScissorFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceExclusiveScissorFeaturesNV, exclusiveScissor),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL, shaderIntegerFunctions2),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentDensityMapFeaturesEXT, fragmentDensityMap),
		FEATURE_ITEM (VkPhysicalDeviceFragmentDensityMapFeaturesEXT, fragmentDensityMapDynamic),
		FEATURE_ITEM (VkPhysicalDeviceFragmentDensityMapFeaturesEXT, fragmentDensityMapNonSubsampledImages),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceSubgroupSizeControlFeaturesEXT, subgroupSizeControl),
		FEATURE_ITEM (VkPhysicalDeviceSubgroupSizeControlFeaturesEXT, computeFullSubgroups),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceCoherentMemoryFeaturesAMD>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceCoherentMemoryFeaturesAMD, deviceCoherentMemory),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT, shaderImageInt64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT, sparseImageInt64Atomics),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMemoryPriorityFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMemoryPriorityFeaturesEXT, memoryPriority),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV, dedicatedAllocationImageAliasing),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT, bufferDeviceAddress),
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT, bufferDeviceAddressCaptureReplay),
		FEATURE_ITEM (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT, bufferDeviceAddressMultiDevice),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceCooperativeMatrixFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceCooperativeMatrixFeaturesNV, cooperativeMatrix),
		FEATURE_ITEM (VkPhysicalDeviceCooperativeMatrixFeaturesNV, cooperativeMatrixRobustBufferAccess),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceCoverageReductionModeFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceCoverageReductionModeFeaturesNV, coverageReductionMode),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT, fragmentShaderSampleInterlock),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT, fragmentShaderPixelInterlock),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT, fragmentShaderShadingRateInterlock),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceYcbcrImageArraysFeaturesEXT, ycbcrImageArrays),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceProvokingVertexFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceProvokingVertexFeaturesEXT, provokingVertexLast),
		FEATURE_ITEM (VkPhysicalDeviceProvokingVertexFeaturesEXT, transformFeedbackPreservesProvokingVertex),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceLineRasterizationFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, rectangularLines),
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, bresenhamLines),
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, smoothLines),
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, stippledRectangularLines),
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, stippledBresenhamLines),
		FEATURE_ITEM (VkPhysicalDeviceLineRasterizationFeaturesEXT, stippledSmoothLines),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 6, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderBufferFloat32Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderBufferFloat32AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderBufferFloat64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderBufferFloat64AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderSharedFloat32Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderSharedFloat32AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderSharedFloat64Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderSharedFloat64AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderImageFloat32Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, shaderImageFloat32AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, sparseImageFloat32Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, sparseImageFloat32AtomicAdd),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 12, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceIndexTypeUint8FeaturesEXT, indexTypeUint8),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceExtendedDynamicStateFeaturesEXT, extendedDynamicState),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderBufferFloat16Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderBufferFloat16AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderBufferFloat16AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderBufferFloat32AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderBufferFloat64AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderSharedFloat16Atomics),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderSharedFloat16AtomicAdd),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderSharedFloat16AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderSharedFloat32AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderSharedFloat64AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, shaderImageFloat32AtomicMinMax),
		FEATURE_ITEM (VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, sparseImageFloat32AtomicMinMax),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 12, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT, shaderDemoteToHelperInvocation),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV, deviceGeneratedCommands),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceInheritedViewportScissorFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceInheritedViewportScissorFeaturesNV, inheritedViewportScissor2D),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT, texelBufferAlignment),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDeviceMemoryReportFeaturesEXT, deviceMemoryReport),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT, formatRgba10x6WithoutYCbCrSampler),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRobustness2FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRobustness2FeaturesEXT, robustBufferAccess2),
		FEATURE_ITEM (VkPhysicalDeviceRobustness2FeaturesEXT, robustImageAccess2),
		FEATURE_ITEM (VkPhysicalDeviceRobustness2FeaturesEXT, nullDescriptor),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceCustomBorderColorFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceCustomBorderColorFeaturesEXT, customBorderColors),
		FEATURE_ITEM (VkPhysicalDeviceCustomBorderColorFeaturesEXT, customBorderColorWithoutFormat),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePrivateDataFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePrivateDataFeaturesEXT, privateData),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePrivateDataFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT, pipelineCreationCacheControl),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceDiagnosticsConfigFeaturesNV, diagnosticsConfig),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV, fragmentShadingRateEnums),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV, supersampleFragmentShadingRates),
		FEATURE_ITEM (VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV, noInvocationFragmentShadingRates),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRayTracingMotionBlurFeaturesNV, rayTracingMotionBlur),
		FEATURE_ITEM (VkPhysicalDeviceRayTracingMotionBlurFeaturesNV, rayTracingMotionBlurPipelineTraceRaysIndirect),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT, ycbcr2plane444Formats),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceFragmentDensityMap2FeaturesEXT, fragmentDensityMapDeferred),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceImageRobustnessFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceImageRobustnessFeaturesEXT, robustImageAccess),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevice4444FormatsFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevice4444FormatsFeaturesEXT, formatA4R4G4B4),
		FEATURE_ITEM (VkPhysicalDevice4444FormatsFeaturesEXT, formatA4B4G4R4),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE, mutableDescriptorType),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceAddressBindingReportFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceAddressBindingReportFeaturesEXT, reportAddressBinding),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT, vertexInputDynamicState),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT, primitiveTopologyListRestart),
		FEATURE_ITEM (VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT, primitiveTopologyPatchListRestart),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 2, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceSubpassShadingFeaturesHUAWEI, subpassShading),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceInvocationMaskFeaturesHUAWEI, invocationMask),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceExternalMemoryRDMAFeaturesNV, externalMemoryRDMA),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceExtendedDynamicState2FeaturesEXT, extendedDynamicState2),
		FEATURE_ITEM (VkPhysicalDeviceExtendedDynamicState2FeaturesEXT, extendedDynamicState2LogicOp),
		FEATURE_ITEM (VkPhysicalDeviceExtendedDynamicState2FeaturesEXT, extendedDynamicState2PatchControlPoints),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 3, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceColorWriteEnableFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceColorWriteEnableFeaturesEXT, colorWriteEnable),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT, globalPriorityQuery),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceMultiDrawFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceMultiDrawFeaturesEXT, multiDraw),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT, pageableDeviceLocalMemory),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceAccelerationStructureFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceAccelerationStructureFeaturesKHR, accelerationStructure),
		FEATURE_ITEM (VkPhysicalDeviceAccelerationStructureFeaturesKHR, accelerationStructureCaptureReplay),
		FEATURE_ITEM (VkPhysicalDeviceAccelerationStructureFeaturesKHR, accelerationStructureIndirectBuild),
		FEATURE_ITEM (VkPhysicalDeviceAccelerationStructureFeaturesKHR, accelerationStructureHostCommands),
		FEATURE_ITEM (VkPhysicalDeviceAccelerationStructureFeaturesKHR, descriptorBindingAccelerationStructureUpdateAfterBind),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 5, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRayTracingPipelineFeaturesKHR, rayTracingPipeline),
		FEATURE_ITEM (VkPhysicalDeviceRayTracingPipelineFeaturesKHR, rayTracingPipelineShaderGroupHandleCaptureReplay),
		FEATURE_ITEM (VkPhysicalDeviceRayTracingPipelineFeaturesKHR, rayTracingPipelineShaderGroupHandleCaptureReplayMixed),
		FEATURE_ITEM (VkPhysicalDeviceRayTracingPipelineFeaturesKHR, rayTracingPipelineTraceRaysIndirect),
		FEATURE_ITEM (VkPhysicalDeviceRayTracingPipelineFeaturesKHR, rayTraversalPrimitiveCulling),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 5, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDeviceRayQueryFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDeviceRayQueryFeaturesKHR, rayQuery),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 1, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

if (const void* featuresStruct = findStructureInChain(const_cast<const void*>(deviceFeatures2.pNext), getStructureType<VkPhysicalDevicePortabilitySubsetFeaturesKHR>()))
{
	static const Feature features[] =
	{
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, constantAlphaColorBlendFactors),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, events),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, imageViewFormatReinterpretation),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, imageViewFormatSwizzle),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, imageView2DOn3DImage),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, multisampleArrayImage),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, mutableComparisonSamplers),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, pointPolygons),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, samplerMipLodBias),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, separateStencilMaskRef),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, shaderSampleRateInterpolationFunctions),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, tessellationIsolines),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, tessellationPointMode),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, triangleFans),
		FEATURE_ITEM (VkPhysicalDevicePortabilitySubsetFeaturesKHR, vertexAttributeAccessBeyondStride),
	};
	auto* supportedFeatures = reinterpret_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR*>(featuresStruct);
	checkFeatures(vkp, instance, instanceDriver, physicalDevice, 15, features, supportedFeatures, queueFamilyIndex, queueCount, queuePriority, numErrors, resultCollector, &extensionNames, emptyDeviceFeatures);
}

