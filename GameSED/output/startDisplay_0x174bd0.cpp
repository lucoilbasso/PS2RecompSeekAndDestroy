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

// Function: startDisplay
// Address: 0x174bd0 - 0x174c0c
void startDisplay_0x174bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startDisplay_0x174bd0");
#endif

    switch (ctx->pc) {
        case 0x174be0u: goto label_174be0;
        case 0x174be8u: goto label_174be8;
        default: break;
    }

    ctx->pc = 0x174bd0u;

    // 0x174bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174bd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174be0:
    // 0x174be0: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x174BE0u;
    SET_GPR_U32(ctx, 31, 0x174BE8u);
    ctx->pc = 0x174BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BE0u;
    // 0x174be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x174BE0u, 0x174BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BE8u;
label_174be8:
    // 0x174be8: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x174BE8u;
    {
        const bool branch_taken_0x174be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x174BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BE8u;
        // 0x174bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174be8) {
            ctx->pc = 0x174BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174be0;
        }
    }
    ctx->pc = 0x174BF0u;
    // 0x174bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174bf8: 0xaf828c04  sw          $v0, -0x73FC($gp)
    ctx->pc = 0x174bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 2));
    // 0x174bfc: 0xaf8091a0  sw          $zero, -0x6E60($gp)
    ctx->pc = 0x174bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
    // 0x174c00: 0xaf808c08  sw          $zero, -0x73F8($gp)
    ctx->pc = 0x174c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 0));
    // 0x174c04: 0x3e00008  jr          $ra
    ctx->pc = 0x174C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C04u;
        // 0x174c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C0Cu;
}
