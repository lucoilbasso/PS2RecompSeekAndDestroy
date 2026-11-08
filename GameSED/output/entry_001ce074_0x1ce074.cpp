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

// Function: entry_001ce074
// Address: 0x1ce074 - 0x1ce098
void entry_001ce074_0x1ce074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce074_0x1ce074");
#endif

    ctx->pc = 0x1ce074u;

    // 0x1ce074: 0x8fa70d9c  lw          $a3, 0xD9C($sp)
    ctx->pc = 0x1ce074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x1ce078: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE078u;
    {
        const bool branch_taken_0x1ce078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE078u;
        // 0x1ce07c: 0x8fa80d98  lw          $t0, 0xD98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce078) {
            ctx->pc = 0x1CE098u;
            return;
        }
    }
    ctx->pc = 0x1CE080u;
    // 0x1ce080: 0x27b30900  addiu       $s3, $sp, 0x900
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x1ce084: 0x8fb40d90  lw          $s4, 0xD90($sp)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3472)));
    // 0x1ce088: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE088u;
    {
        const bool branch_taken_0x1ce088 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE088u;
        // 0x1ce08c: 0x8fb00d94  lw          $s0, 0xD94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce088) {
            ctx->pc = 0x1CE098u;
            return;
        }
    }
    ctx->pc = 0x1CE090u;
    // 0x1ce090: 0xc07379a  jal         func_1CDE68
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE68u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
}
