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

// Function: ApRscKeyPopMode__Fv
// Address: 0x1146e0 - 0x114730
void ApRscKeyPopMode__Fv_0x1146e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyPopMode__Fv_0x1146e0");
#endif

    switch (ctx->pc) {
        case 0x114724u: goto label_114724;
        default: break;
    }

    ctx->pc = 0x1146e0u;

    // 0x1146e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1146e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1146e4: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x1146e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1146e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1146ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1146f0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1146f4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1146f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1146f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1146F8u;
    {
        const bool branch_taken_0x1146f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146F8u;
        // 0x1146fc: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146f8) {
            ctx->pc = 0x114718u;
            goto label_114718;
        }
    }
    ctx->pc = 0x114700u;
    // 0x114700: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x114700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x114704: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114708: 0x8c420730  lw          $v0, 0x730($v0)
    ctx->pc = 0x114708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x11470c: 0xaf849124  sw          $a0, -0x6EDC($gp)
    ctx->pc = 0x11470cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 4));
    // 0x114710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114710u;
    {
        const bool branch_taken_0x114710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114710u;
        // 0x114714: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114710) {
            ctx->pc = 0x114724u;
            goto label_114724;
        }
    }
    ctx->pc = 0x114718u;
label_114718:
    // 0x114718: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11471c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11471Cu;
    SET_GPR_U32(ctx, 31, 0x114724u);
    ctx->pc = 0x114720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11471Cu;
    // 0x114720: 0x24844268  addiu       $a0, $a0, 0x4268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11471Cu, 0x114724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114724u;
label_114724:
    // 0x114724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114728: 0x3e00008  jr          $ra
    ctx->pc = 0x114728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114728u;
        // 0x11472c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114730u;
}
