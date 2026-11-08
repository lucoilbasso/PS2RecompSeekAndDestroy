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

// Function: entry_001238e8
// Address: 0x1238e8 - 0x1238fc
void entry_001238e8_0x1238e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001238e8_0x1238e8");
#endif

    ctx->pc = 0x1238e8u;

    // 0x1238e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1238ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1238f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1238f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1238f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1238f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1238f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1238f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x1238fcu;
}
