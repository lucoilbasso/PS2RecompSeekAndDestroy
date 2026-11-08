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

// Function: entry_0011e9f8
// Address: 0x11e9f8 - 0x11ea14
void entry_0011e9f8_0x11e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9f8_0x11e9f8");
#endif

    ctx->pc = 0x11e9f8u;

    // 0x11e9f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e9fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11ea00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11ea00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ea04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11ea04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11ea08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x11ea08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x11ea0c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x11ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ea10: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x11ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x11ea14u;
}
