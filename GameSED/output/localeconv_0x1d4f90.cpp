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

// Function: localeconv
// Address: 0x1d4f90 - 0x1d4fac
void localeconv_0x1d4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("localeconv_0x1d4f90");
#endif

    ctx->pc = 0x1d4f90u;

    // 0x1d4f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4f94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4f9c: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d4fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4fa4: 0x80753d6  j           func_1D4F58
    ctx->pc = 0x1D4FA4u;
    ctx->pc = 0x1D4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FA4u;
    // 0x1d4fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F58u;
    _localeconv_r_0x1d4f58(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4FACu;
}
