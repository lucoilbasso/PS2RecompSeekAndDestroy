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

// Function: Cmd_SE_MASTER_VOLUME_Entry__FP15BsSCDEntControl
// Address: 0x11daa8 - 0x11dad4
void Cmd_SE_MASTER_VOLUME_Entry__FP15BsSCDEntControl_0x11daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_MASTER_VOLUME_Entry__FP15BsSCDEntControl_0x11daa8");
#endif

    switch (ctx->pc) {
        case 0x11dab8u: goto label_11dab8;
        case 0x11dac8u: goto label_11dac8;
        default: break;
    }

    ctx->pc = 0x11daa8u;

    // 0x11daa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11daac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dab0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DAB0u;
    SET_GPR_U32(ctx, 31, 0x11DAB8u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DAB0u, 0x11DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAB8u;
label_11dab8:
    // 0x11dab8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11dabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dac0: 0xc0477b2  jal         func_11DEC8
    ctx->pc = 0x11DAC0u;
    SET_GPR_U32(ctx, 31, 0x11DAC8u);
    ctx->pc = 0x11DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAC0u;
    // 0x11dac4: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEC8u, 0x11DAC0u, 0x11DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAC8u;
label_11dac8:
    // 0x11dac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dacc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DACCu;
        // 0x11dad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DAD4u;
}
