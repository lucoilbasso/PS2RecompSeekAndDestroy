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

// Function: caseD_f
// Address: 0x12fe70 - 0x12fe88
void caseD_f_0x12fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x12fe70");
#endif

    switch (ctx->pc) {
        case 0x12fe80u: goto label_12fe80;
        default: break;
    }

    ctx->pc = 0x12fe70u;

    // 0x12fe70: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe78: 0xc04838e  jal         func_120E38
    ctx->pc = 0x12FE78u;
    SET_GPR_U32(ctx, 31, 0x12FE80u);
    ctx->pc = 0x12FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE78u;
    // 0x12fe7c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E38u, 0x12FE78u, 0x12FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12FE80u;
    {
        const bool branch_taken_0x12fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE80u;
        // 0x12fe84: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe80) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE88u;
}
