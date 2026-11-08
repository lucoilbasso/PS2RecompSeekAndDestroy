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

// Function: entry_001d4f70
// Address: 0x1d4f70 - 0x1d4f8c
void entry_001d4f70_0x1d4f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f70_0x1d4f70");
#endif

    ctx->pc = 0x1d4f70u;

    // 0x1d4f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4f74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d4f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f7c: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    // 0x1d4f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4f84: 0x80753b2  j           func_1D4EC8
    ctx->pc = 0x1D4F84u;
    ctx->pc = 0x1D4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F84u;
    // 0x1d4f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EC8u;
    _setlocale_r_0x1d4ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4F8Cu;
}
