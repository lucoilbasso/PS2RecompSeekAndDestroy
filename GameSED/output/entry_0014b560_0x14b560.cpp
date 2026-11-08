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

// Function: entry_0014b560
// Address: 0x14b560 - 0x14b588
void entry_0014b560_0x14b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b560_0x14b560");
#endif

    switch (ctx->pc) {
        case 0x14b568u: goto label_14b568;
        default: break;
    }

    ctx->pc = 0x14b560u;

    // 0x14b560: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14B560u;
    SET_GPR_U32(ctx, 31, 0x14B568u);
    ctx->pc = 0x14B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B560u;
    // 0x14b564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14B560u, 0x14B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B568u;
label_14b568:
    // 0x14b568: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x14b56c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14b56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b570: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14B570u;
    {
        const bool branch_taken_0x14b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B570u;
        // 0x14b574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b570) {
            ctx->pc = 0x14B59Cu;
            return;
        }
    }
    ctx->pc = 0x14B578u;
    // 0x14b578: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14b57c: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B57Cu;
    {
        const bool branch_taken_0x14b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x14b57c) {
            ctx->pc = 0x14B59Cu;
            return;
        }
    }
    ctx->pc = 0x14B584u;
    // 0x14b584: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x14b588u;
}
