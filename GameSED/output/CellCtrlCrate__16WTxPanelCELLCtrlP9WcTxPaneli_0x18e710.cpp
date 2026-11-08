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

// Function: CellCtrlCrate__16WTxPanelCELLCtrlP9WcTxPaneli
// Address: 0x18e710 - 0x18e7e8
void CellCtrlCrate__16WTxPanelCELLCtrlP9WcTxPaneli_0x18e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CellCtrlCrate__16WTxPanelCELLCtrlP9WcTxPaneli_0x18e710");
#endif

    switch (ctx->pc) {
        case 0x18e730u: goto label_18e730;
        case 0x18e734u: goto label_18e734;
        case 0x18e7d8u: goto label_18e7d8;
        default: break;
    }

    ctx->pc = 0x18e710u;

    // 0x18e710: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18e714: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e718: 0x24461688  addiu       $a2, $v0, 0x1688
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5768));
    // 0x18e71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E728u;
    {
        const bool branch_taken_0x18e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E728u;
        // 0x18e72c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e728) {
            ctx->pc = 0x18E734u;
            goto label_18e734;
        }
    }
    ctx->pc = 0x18E730u;
label_18e730:
    // 0x18e730: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x18e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_18e734:
    // 0x18e734: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x18e734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18e738: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18E738u;
    {
        const bool branch_taken_0x18e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E738u;
        // 0x18e73c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e738) {
            ctx->pc = 0x18E784u;
            goto label_18e784;
        }
    }
    ctx->pc = 0x18E740u;
    // 0x18e740: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e748: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E748u;
    {
        const bool branch_taken_0x18e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e748) {
            ctx->pc = 0x18E74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E748u;
            // 0x18e74c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E770u;
            goto label_18e770;
        }
    }
    ctx->pc = 0x18E750u;
    // 0x18e750: 0x0  nop
    ctx->pc = 0x18e750u;
    // NOP
    // 0x18e754: 0x50e0fff6  beql        $a3, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18E754u;
    {
        const bool branch_taken_0x18e754 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e754) {
            ctx->pc = 0x18E758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E754u;
            // 0x18e758: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e730;
        }
    }
    ctx->pc = 0x18E75Cu;
    // 0x18e75c: 0x0  nop
    ctx->pc = 0x18e75cu;
    // NOP
    // 0x18e760: 0x0  nop
    ctx->pc = 0x18e760u;
    // NOP
    // 0x18e764: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x18E764u;
    {
        const bool branch_taken_0x18e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E764u;
        // 0x18e768: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e764) {
            ctx->pc = 0x18E734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e734;
        }
    }
    ctx->pc = 0x18E76Cu;
    // 0x18e76c: 0x0  nop
    ctx->pc = 0x18e76cu;
    // NOP
label_18e770:
    // 0x18e770: 0x0  nop
    ctx->pc = 0x18e770u;
    // NOP
    // 0x18e774: 0x0  nop
    ctx->pc = 0x18e774u;
    // NOP
    // 0x18e778: 0x5445ffee  bnel        $v0, $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18E778u;
    {
        const bool branch_taken_0x18e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e778) {
            ctx->pc = 0x18E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E778u;
            // 0x18e77c: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e734;
        }
    }
    ctx->pc = 0x18E780u;
    // 0x18e780: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x18e780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18e784:
    // 0x18e784: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E784u;
    {
        const bool branch_taken_0x18e784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E784u;
        // 0x18e788: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e784) {
            ctx->pc = 0x18E7A0u;
            goto label_18e7a0;
        }
    }
    ctx->pc = 0x18E78Cu;
    // 0x18e78c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18e790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e794: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18E794u;
    {
        const bool branch_taken_0x18e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E794u;
        // 0x18e798: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e794) {
            ctx->pc = 0x18E7DCu;
            goto label_18e7dc;
        }
    }
    ctx->pc = 0x18E79Cu;
    // 0x18e79c: 0x0  nop
    ctx->pc = 0x18e79cu;
    // NOP
label_18e7a0:
    // 0x18e7a0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E7A0u;
    {
        const bool branch_taken_0x18e7a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7A0u;
        // 0x18e7a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7a0) {
            ctx->pc = 0x18E7C8u;
            goto label_18e7c8;
        }
    }
    ctx->pc = 0x18E7A8u;
    // 0x18e7a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e7ac: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x18e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x18e7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e7b4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x18e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x18e7b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x18e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x18e7bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E7BCu;
    {
        const bool branch_taken_0x18e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7BCu;
        // 0x18e7c0: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7bc) {
            ctx->pc = 0x18E7DCu;
            goto label_18e7dc;
        }
    }
    ctx->pc = 0x18E7C4u;
    // 0x18e7c4: 0x0  nop
    ctx->pc = 0x18e7c4u;
    // NOP
label_18e7c8:
    // 0x18e7c8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e7cc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18e7d0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E7D0u;
    SET_GPR_U32(ctx, 31, 0x18E7D8u);
    ctx->pc = 0x18E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7D0u;
    // 0x18e7d4: 0x24a580d0  addiu       $a1, $a1, -0x7F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E7D0u, 0x18E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E7D8u;
label_18e7d8:
    // 0x18e7d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18e7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e7dc:
    // 0x18e7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7E0u;
        // 0x18e7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E7E8u;
}
