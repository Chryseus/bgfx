#pragma clang diagnostic ignored "-Wmissing-prototypes"
#pragma clang diagnostic ignored "-Wmissing-braces"

#include <metal_stdlib>
#include <simd/simd.h>

using namespace metal;

template<typename T, size_t Num>
struct spvUnsafeArray
{
    T elements[Num ? Num : 1];
    
    thread T& operator [] (size_t pos) thread
    {
        return elements[pos];
    }
    constexpr const thread T& operator [] (size_t pos) const thread
    {
        return elements[pos];
    }
    
    device T& operator [] (size_t pos) device
    {
        return elements[pos];
    }
    constexpr const device T& operator [] (size_t pos) const device
    {
        return elements[pos];
    }
    
    constexpr const constant T& operator [] (size_t pos) const constant
    {
        return elements[pos];
    }
    
    threadgroup T& operator [] (size_t pos) threadgroup
    {
        return elements[pos];
    }
    constexpr const threadgroup T& operator [] (size_t pos) const threadgroup
    {
        return elements[pos];
    }
};

struct VertexOutput
{
    float4 pos;
    float2 uv;
};

struct VertexOutput_1
{
    float2 uv;
};

struct HSOut
{
    float2 uv;
};

struct main0_out
{
    HSOut _entryPointOutput;
    float4 gl_Position;
};

struct main0_in
{
    float2 VertexOutput_uv [[attribute(0)]];
    float4 gl_Position [[attribute(1)]];
};

kernel void main0(main0_in in [[stage_in]], uint gl_InvocationID [[thread_index_in_threadgroup]], uint gl_PrimitiveID [[threadgroup_position_in_grid]], device main0_out* spvOut [[buffer(28)]], constant uint* spvIndirectParams [[buffer(29)]], device MTLTriangleTessellationFactorsHalf* spvTessLevel [[buffer(26)]], threadgroup main0_in* gl_in [[threadgroup(0)]])
{
    device main0_out* gl_out = &spvOut[gl_PrimitiveID * 3];
    if (gl_InvocationID < spvIndirectParams[0])
        gl_in[gl_InvocationID] = in;
    threadgroup_barrier(mem_flags::mem_threadgroup);
    if (gl_InvocationID >= 3)
        return;
    spvUnsafeArray<VertexOutput, 3> _223 = spvUnsafeArray<VertexOutput, 3>({ VertexOutput{ gl_in[0].gl_Position, gl_in[0].VertexOutput_uv }, VertexOutput{ gl_in[1].gl_Position, gl_in[1].VertexOutput_uv }, VertexOutput{ gl_in[2].gl_Position, gl_in[2].VertexOutput_uv } });
    spvUnsafeArray<VertexOutput, 3> param;
    param = _223;
    gl_out[gl_InvocationID].gl_Position = param[gl_InvocationID].pos;
    gl_out[gl_InvocationID]._entryPointOutput.uv = param[gl_InvocationID].uv;
    threadgroup_barrier(mem_flags::mem_device | mem_flags::mem_threadgroup);
    if (int(gl_InvocationID) == 0)
    {
        float2 _174 = float2(1.0) + gl_in[0].VertexOutput_uv;
        float _175 = _174.x;
        spvTessLevel[gl_PrimitiveID].edgeTessellationFactor[0] = half(_175);
        spvTessLevel[gl_PrimitiveID].edgeTessellationFactor[1] = half(_175);
        spvTessLevel[gl_PrimitiveID].edgeTessellationFactor[2] = half(_175);
        spvTessLevel[gl_PrimitiveID].insideTessellationFactor = half(_175);
    }
}
