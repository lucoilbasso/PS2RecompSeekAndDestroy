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

// Function: entry_00155434
// Address: 0x155434 - 0x155454
void entry_00155434_0x155434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155434_0x155434");
#endif

    switch (ctx->pc) {
        case 0x15543cu: goto label_15543c;
        default: break;
    }

    ctx->pc = 0x155434u;

    // 0x155434: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x155438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155434u;
    // 0x155438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x155440: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x155440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x155444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155448: 0x1454fff3  bne         $v0, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x155448u;
    {
        const bool branch_taken_0x155448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x15544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155448u;
        // 0x15544c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155448) {
            ctx->pc = 0x155418u;
            return;
        }
    }
    ctx->pc = 0x155450u;
    // 0x155450: 0x8e42089c  lw          $v0, 0x89C($s2)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    ctx->pc = 0x155454u;
}
