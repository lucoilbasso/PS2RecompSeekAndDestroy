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

// Function: entry_0013ef2c
// Address: 0x13ef2c - 0x13ef50
void entry_0013ef2c_0x13ef2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef2c_0x13ef2c");
#endif

    switch (ctx->pc) {
        case 0x13ef40u: goto label_13ef40;
        default: break;
    }

    ctx->pc = 0x13ef2cu;

    // 0x13ef2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ef30: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13ef34: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13ef34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ef38: 0xc06164c  jal         func_185930
    ctx->pc = 0x13EF38u;
    SET_GPR_U32(ctx, 31, 0x13EF40u);
    ctx->pc = 0x13EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EF38u;
    // 0x13ef3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13EF38u, 0x13EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EF40u;
label_13ef40:
    // 0x13ef40: 0x8e700148  lw          $s0, 0x148($s3)
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x13ef44: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EF44u;
    {
        const bool branch_taken_0x13ef44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF44u;
        // 0x13ef48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef44) {
            ctx->pc = 0x13EF74u;
            return;
        }
    }
    ctx->pc = 0x13EF4Cu;
    // 0x13ef4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x13ef50u;
}
