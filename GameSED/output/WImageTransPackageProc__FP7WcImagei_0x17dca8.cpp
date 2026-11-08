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

// Function: WImageTransPackageProc__FP7WcImagei
// Address: 0x17dca8 - 0x17dda0
void WImageTransPackageProc__FP7WcImagei_0x17dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageTransPackageProc__FP7WcImagei_0x17dca8");
#endif

    switch (ctx->pc) {
        case 0x17dcd0u: goto label_17dcd0;
        case 0x17dcf4u: goto label_17dcf4;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd84u: goto label_17dd84;
        default: break;
    }

    ctx->pc = 0x17dca8u;

    // 0x17dca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17dca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17dcac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17dcb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17dcb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17dcb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17dcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcbc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17dcc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17dcc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17dcc8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17DCC8u;
    SET_GPR_U32(ctx, 31, 0x17DCD0u);
    ctx->pc = 0x17DCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCC8u;
    // 0x17dccc: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17DCC8u, 0x17DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCD0u;
label_17dcd0:
    // 0x17dcd0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17dcd4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dcd8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17dcdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17dce0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17dce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dce8: 0x24847c78  addiu       $a0, $a0, 0x7C78
    ctx->pc = 0x17dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31864));
    // 0x17dcec: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17DCECu;
    SET_GPR_U32(ctx, 31, 0x17DCF4u);
    ctx->pc = 0x17DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DCECu;
    // 0x17dcf0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17DCECu, 0x17DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCF4u;
label_17dcf4:
    // 0x17dcf4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17dcf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dcfc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17DCFCu;
    {
        const bool branch_taken_0x17dcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCFCu;
        // 0x17dd00: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcfc) {
            ctx->pc = 0x17DD50u;
            goto label_17dd50;
        }
    }
    ctx->pc = 0x17DD04u;
    // 0x17dd04: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x17dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17dd08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DD08u;
    {
        const bool branch_taken_0x17dd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD08u;
        // 0x17dd0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd08) {
            ctx->pc = 0x17DD30u;
            goto label_17dd30;
        }
    }
    ctx->pc = 0x17DD10u;
    // 0x17dd10: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x17dd10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17dd14: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x17dd14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x17dd18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17dd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd1c: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x17dd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dd20: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x17dd20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dd24: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x17dd24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dd28: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17DD28u;
    SET_GPR_U32(ctx, 31, 0x17DD30u);
    ctx->pc = 0x17DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD28u;
    // 0x17dd2c: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17DD28u, 0x17DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD30u;
label_17dd30:
    // 0x17dd30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17dd34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DD34u;
    {
        const bool branch_taken_0x17dd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd34) {
            ctx->pc = 0x17DD50u;
            goto label_17dd50;
        }
    }
    ctx->pc = 0x17DD3Cu;
    // 0x17dd3c: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17dd3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17dd40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD40u;
    {
        const bool branch_taken_0x17dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd40) {
            ctx->pc = 0x17DD50u;
            goto label_17dd50;
        }
    }
    ctx->pc = 0x17DD48u;
    // 0x17dd48: 0xc05f6f6  jal         func_17DBD8
    ctx->pc = 0x17DD48u;
    SET_GPR_U32(ctx, 31, 0x17DD50u);
    ctx->pc = 0x17DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD48u;
    // 0x17dd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBD8u, 0x17DD48u, 0x17DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD50u;
label_17dd50:
    // 0x17dd50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DD50u;
    SET_GPR_U32(ctx, 31, 0x17DD58u);
    ctx->pc = 0x17DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD50u;
    // 0x17dd54: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DD50u, 0x17DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD58u;
label_17dd58:
    // 0x17dd58: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17dd5c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17dd60: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dd64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17dd68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dd70: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17dd74: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD74u;
    {
        const bool branch_taken_0x17dd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x17DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD74u;
        // 0x17dd78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd74) {
            ctx->pc = 0x17DD84u;
            goto label_17dd84;
        }
    }
    ctx->pc = 0x17DD7Cu;
    // 0x17dd7c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DD7Cu;
    SET_GPR_U32(ctx, 31, 0x17DD84u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DD7Cu, 0x17DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD84u;
label_17dd84:
    // 0x17dd84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17dd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dd88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17dd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dd8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17dd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dd90: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dd94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17dd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD98u;
        // 0x17dd9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DDA0u;
}
