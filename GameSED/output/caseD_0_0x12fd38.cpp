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

// Function: caseD_0
// Address: 0x12fd38 - 0x12fd50
void caseD_0_0x12fd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12fd38");
#endif

    switch (ctx->pc) {
        case 0x12fd48u: goto label_12fd48;
        default: break;
    }

    ctx->pc = 0x12fd38u;

    // 0x12fd38: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd40: 0xc047be4  jal         func_11EF90
    ctx->pc = 0x12FD40u;
    SET_GPR_U32(ctx, 31, 0x12FD48u);
    ctx->pc = 0x12FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD40u;
    // 0x12fd44: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EF90u, 0x12FD40u, 0x12FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD48u;
label_12fd48:
    // 0x12fd48: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x12FD48u;
    {
        const bool branch_taken_0x12fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD48u;
        // 0x12fd4c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd48) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FD50u;
}
