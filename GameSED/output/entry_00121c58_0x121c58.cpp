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

// Function: entry_00121c58
// Address: 0x121c58 - 0x121c6c
void entry_00121c58_0x121c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121c58_0x121c58");
#endif

    ctx->pc = 0x121c58u;

    // 0x121c58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x121c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x121c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x121c68: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x121c68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x121c6cu;
}
