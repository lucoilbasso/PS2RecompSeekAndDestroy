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

// Function: caseD_13
// Address: 0x155098 - 0x1550d0
void caseD_13_0x155098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x155098");
#endif

    switch (ctx->pc) {
        case 0x1550a0u: goto label_1550a0;
        default: break;
    }

    ctx->pc = 0x155098u;

    // 0x155098: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155098u;
    SET_GPR_U32(ctx, 31, 0x1550A0u);
    ctx->pc = 0x15509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155098u;
    // 0x15509c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155098u, 0x1550A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1550a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1550a8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1550A8u;
    {
        const bool branch_taken_0x1550a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1550ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A8u;
        // 0x1550ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a8) {
            ctx->pc = 0x1550E0u;
            return;
        }
    }
    ctx->pc = 0x1550B0u;
    // 0x1550b0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1550b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1550b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1550B4u;
    {
        const bool branch_taken_0x1550b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550B4u;
        // 0x1550b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550b4) {
            ctx->pc = 0x1550D0u;
            return;
        }
    }
    ctx->pc = 0x1550BCu;
    // 0x1550bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1550c0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1550C0u;
    {
        const bool branch_taken_0x1550c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1550c0) {
            ctx->pc = 0x1550C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1550C0u;
            // 0x1550c4: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1550E4u;
            return;
        }
    }
    ctx->pc = 0x1550C8u;
    // 0x1550c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1550C8u;
    {
        const bool branch_taken_0x1550c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550c8) {
            ctx->pc = 0x1550E4u;
            return;
        }
    }
    ctx->pc = 0x1550D0u;
}
