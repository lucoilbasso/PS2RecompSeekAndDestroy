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

// Function: sceDevVif0Continue
// Address: 0x1acd98 - 0x1acdd4
void sceDevVif0Continue_0x1acd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVif0Continue_0x1acd98");
#endif

    switch (ctx->pc) {
        case 0x1acda8u: goto label_1acda8;
        default: break;
    }

    ctx->pc = 0x1acd98u;

    // 0x1acd98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1acd9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acda0: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACDA0u;
    SET_GPR_U32(ctx, 31, 0x1ACDA8u);
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACDA0u, 0x1ACDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDA8u;
label_1acda8:
    // 0x1acda8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acdac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACDACu;
    {
        const bool branch_taken_0x1acdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ACDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDACu;
        // 0x1acdb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdac) {
            ctx->pc = 0x1ACDC8u;
            goto label_1acdc8;
        }
    }
    ctx->pc = 0x1ACDB4u;
    // 0x1acdb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1acdb8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1acdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1acdbc: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x1acdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
    // 0x1acdc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acdc4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1acdc4u;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 4));
label_1acdc8:
    // 0x1acdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDCCu;
        // 0x1acdd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDD4u;
}
