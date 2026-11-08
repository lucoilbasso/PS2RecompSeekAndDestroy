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

// Function: CellArraySetup_WINDOW__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePagei
// Address: 0x18e990 - 0x18e9fc
void CellArraySetup_WINDOW__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePagei_0x18e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellArraySetup_WINDOW__16WTxPanelCELLCtrlP9WcTxPanelP17WTxPanelFramePagei_0x18e990");
#endif

    switch (ctx->pc) {
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9e8u: goto label_18e9e8;
        default: break;
    }

    ctx->pc = 0x18e990u;

    // 0x18e990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e994: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18e9a4: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E9A4u;
    {
        const bool branch_taken_0x18e9a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x18E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9A4u;
        // 0x18e9a8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9a4) {
            ctx->pc = 0x18E9D0u;
            goto label_18e9d0;
        }
    }
    ctx->pc = 0x18E9ACu;
    // 0x18e9ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18e9b0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18e9b4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x18e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x18e9b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e9b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9bc: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E9BCu;
    SET_GPR_U32(ctx, 31, 0x18E9C4u);
    ctx->pc = 0x18E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9BCu;
    // 0x18e9c0: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E9BCu, 0x18E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9C4u;
label_18e9c4:
    // 0x18e9c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18E9C4u;
    {
        const bool branch_taken_0x18e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9C4u;
        // 0x18e9c8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9c4) {
            ctx->pc = 0x18E9ECu;
            goto label_18e9ec;
        }
    }
    ctx->pc = 0x18E9CCu;
    // 0x18e9cc: 0x0  nop
    ctx->pc = 0x18e9ccu;
    // NOP
label_18e9d0:
    // 0x18e9d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18e9d4: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x18e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x18e9d8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x18e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x18e9dc: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x18e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18e9e0: 0xc063342  jal         func_18CD08
    ctx->pc = 0x18E9E0u;
    SET_GPR_U32(ctx, 31, 0x18E9E8u);
    ctx->pc = 0x18E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9E0u;
    // 0x18e9e4: 0xac620048  sw          $v0, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD08u, 0x18E9E0u, 0x18E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9E8u;
label_18e9e8:
    // 0x18e9e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_18e9ec:
    // 0x18e9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e9f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9F4u;
        // 0x18e9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E9FCu;
}
