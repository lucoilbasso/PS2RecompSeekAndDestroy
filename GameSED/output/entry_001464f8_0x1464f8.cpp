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

// Function: entry_001464f8
// Address: 0x1464f8 - 0x146520
void entry_001464f8_0x1464f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001464f8_0x1464f8");
#endif

    ctx->pc = 0x1464f8u;

    // 0x1464f8: 0xc7808180  lwc1        $f0, -0x7E80($gp)
    ctx->pc = 0x1464f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464fc: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x1464fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146500: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x146500u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x146504: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x146504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x146508: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x146508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14650c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x14650cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x146510: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x146510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x146514: 0xe6030040  swc1        $f3, 0x40($s0)
    ctx->pc = 0x146514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x146518: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x146518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x14651c: 0xe6020044  swc1        $f2, 0x44($s0)
    ctx->pc = 0x14651cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->pc = 0x146520u;
}
