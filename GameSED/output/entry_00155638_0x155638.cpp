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

// Function: entry_00155638
// Address: 0x155638 - 0x15565c
void entry_00155638_0x155638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155638_0x155638");
#endif

    switch (ctx->pc) {
        case 0x155640u: goto label_155640;
        default: break;
    }

    ctx->pc = 0x155638u;

label_155638:
    // 0x155638: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x155638u;
    SET_GPR_U32(ctx, 31, 0x155640u);
    ctx->pc = 0x15563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155638u;
    // 0x15563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x155638u, 0x155640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155640u;
label_155640:
    // 0x155640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155644: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x155644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15564c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155650: 0x1453fff9  bne         $v0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x155650u;
    {
        const bool branch_taken_0x155650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x155654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155650u;
        // 0x155654: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155650) {
            ctx->pc = 0x155638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155638;
        }
    }
    ctx->pc = 0x155658u;
    // 0x155658: 0x8e4208a0  lw          $v0, 0x8A0($s2)
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
    ctx->pc = 0x15565cu;
}
