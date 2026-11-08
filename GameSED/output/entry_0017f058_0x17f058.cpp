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

// Function: entry_0017f058
// Address: 0x17f058 - 0x17f078
void entry_0017f058_0x17f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f058_0x17f058");
#endif

    switch (ctx->pc) {
        case 0x17f070u: goto label_17f070;
        default: break;
    }

    ctx->pc = 0x17f058u;

    // 0x17f058: 0x56970007  bnel        $s4, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F058u;
    {
        const bool branch_taken_0x17f058 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x17f058) {
            ctx->pc = 0x17F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F058u;
            // 0x17f05c: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F078u;
            return;
        }
    }
    ctx->pc = 0x17F060u;
    // 0x17f060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f064: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x17f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17f068: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x17F068u;
    SET_GPR_U32(ctx, 31, 0x17F070u);
    ctx->pc = 0x17F06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F068u;
    // 0x17f06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x17F068u, 0x17F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F070u;
label_17f070:
    // 0x17f070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F070u;
    {
        const bool branch_taken_0x17f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F070u;
        // 0x17f074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f070) {
            ctx->pc = 0x17F07Cu;
            return;
        }
    }
    ctx->pc = 0x17F078u;
}
