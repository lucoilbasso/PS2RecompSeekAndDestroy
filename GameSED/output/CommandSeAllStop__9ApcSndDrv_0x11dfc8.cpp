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

// Function: CommandSeAllStop__9ApcSndDrv
// Address: 0x11dfc8 - 0x11e008
void CommandSeAllStop__9ApcSndDrv_0x11dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSeAllStop__9ApcSndDrv_0x11dfc8");
#endif

    switch (ctx->pc) {
        case 0x11dfd8u: goto label_11dfd8;
        case 0x11dfecu: goto label_11dfec;
        default: break;
    }

    ctx->pc = 0x11dfc8u;

    // 0x11dfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dfcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11dfd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dfd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dfd8:
    // 0x11dfd8: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFD8u;
    {
        const bool branch_taken_0x11dfd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD8u;
        // 0x11dfdc: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfd8) {
            ctx->pc = 0x11DFECu;
            goto label_11dfec;
        }
    }
    ctx->pc = 0x11DFE0u;
    // 0x11dfe0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11dfe4: 0xc05ee40  jal         func_17B900
    ctx->pc = 0x11DFE4u;
    SET_GPR_U32(ctx, 31, 0x11DFECu);
    ctx->pc = 0x11DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFE4u;
    // 0x11dfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B900u, 0x11DFE4u, 0x11DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFECu;
label_11dfec:
    // 0x11dfec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11dff0: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x11dff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x11dff4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11DFF4u;
    {
        const bool branch_taken_0x11dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFF4u;
        // 0x11dff8: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dff4) {
            ctx->pc = 0x11DFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dfd8;
        }
    }
    ctx->pc = 0x11DFFCu;
    // 0x11dffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e000: 0x3e00008  jr          $ra
    ctx->pc = 0x11E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E000u;
        // 0x11e004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E008u;
}
