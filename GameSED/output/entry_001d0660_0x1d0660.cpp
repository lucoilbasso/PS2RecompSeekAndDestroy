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

// Function: entry_001d0660
// Address: 0x1d0660 - 0x1d0678
void entry_001d0660_0x1d0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0660_0x1d0660");
#endif

    ctx->pc = 0x1d0660u;

    // 0x1d0660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0664: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0668: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    // 0x1d066c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0670: 0x8074156  j           func_1D0558
    ctx->pc = 0x1D0670u;
    ctx->pc = 0x1D0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0670u;
    // 0x1d0674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0558u;
    ps2___sigtramp_r_0x1d0558(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0678u;
}
