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

// Function: entry_0017fed8
// Address: 0x17fed8 - 0x17fef0
void entry_0017fed8_0x17fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fed8_0x17fed8");
#endif

    ctx->pc = 0x17fed8u;

    // 0x17fed8: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x17fed8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x17fedc: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x17fedcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x17fee0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x17fee0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x17fee4: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x17fee4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x17fee8: 0xc7818558  lwc1        $f1, -0x7AA8($gp)
    ctx->pc = 0x17fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17feec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17feecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x17fef0u;
}
