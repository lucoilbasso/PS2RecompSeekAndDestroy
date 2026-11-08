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

// Function: entry_00104860
// Address: 0x104860 - 0x1048a0
void entry_00104860_0x104860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104860_0x104860");
#endif

    switch (ctx->pc) {
        case 0x104878u: goto label_104878;
        default: break;
    }

    ctx->pc = 0x104860u;

    // 0x104860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x104860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104864: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x104868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10486c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x104870: 0xc06a228  jal         func_1A88A0
    ctx->pc = 0x104870u;
    SET_GPR_U32(ctx, 31, 0x104878u);
    ctx->pc = 0x104874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104870u;
    // 0x104874: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88A0u, 0x104870u, 0x104878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104878u;
label_104878:
    // 0x104878: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x104878u;
    {
        const bool branch_taken_0x104878 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104878u;
        // 0x10487c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104878) {
            ctx->pc = 0x104858u;
            return;
        }
    }
    ctx->pc = 0x104880u;
    // 0x104880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10488c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10488cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104890: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104894: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x104894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104898: 0x3e00008  jr          $ra
    ctx->pc = 0x104898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104898u;
        // 0x10489c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1048A0u;
}
