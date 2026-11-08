#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0012cd44
// Address: 0x12cd44 - 0x12cd5c
void entry_0012cd44_0x12cd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd44_0x12cd44");
#endif

    ctx->pc = 0x12cd44u;

    // 0x12cd44: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x12cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12cd48: 0xc601011c  lwc1        $f1, 0x11C($s0)
    ctx->pc = 0x12cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cd4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12cd4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12cd50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12cd50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12cd54: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x12cd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x12cd58: 0xe601011c  swc1        $f1, 0x11C($s0)
    ctx->pc = 0x12cd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    ctx->pc = 0x12cd5cu;
}
