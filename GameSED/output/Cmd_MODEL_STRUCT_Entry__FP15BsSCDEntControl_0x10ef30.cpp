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

// Function: Cmd_MODEL_STRUCT_Entry__FP15BsSCDEntControl
// Address: 0x10ef30 - 0x10f020
void Cmd_MODEL_STRUCT_Entry__FP15BsSCDEntControl_0x10ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_STRUCT_Entry__FP15BsSCDEntControl_0x10ef30");
#endif

    switch (ctx->pc) {
        case 0x10ef60u: goto label_10ef60;
        case 0x10ef6cu: goto label_10ef6c;
        case 0x10ef78u: goto label_10ef78;
        case 0x10ef84u: goto label_10ef84;
        case 0x10ef90u: goto label_10ef90;
        case 0x10ef9cu: goto label_10ef9c;
        case 0x10efa8u: goto label_10efa8;
        case 0x10efbcu: goto label_10efbc;
        case 0x10efc4u: goto label_10efc4;
        case 0x10efe0u: goto label_10efe0;
        case 0x10efecu: goto label_10efec;
        case 0x10effcu: goto label_10effc;
        default: break;
    }

    ctx->pc = 0x10ef30u;

    // 0x10ef30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ef34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10ef38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ef38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10ef40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10ef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10ef44: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10ef48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ef4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10ef50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ef54: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x10ef54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10ef58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10EF58u;
    SET_GPR_U32(ctx, 31, 0x10EF60u);
    ctx->pc = 0x10EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF58u;
    // 0x10ef5c: 0x8e320044  lw          $s2, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10EF58u, 0x10EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF60u;
label_10ef60:
    // 0x10ef60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef64: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10EF64u;
    SET_GPR_U32(ctx, 31, 0x10EF6Cu);
    ctx->pc = 0x10EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF64u;
    // 0x10ef68: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10EF64u, 0x10EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF6Cu;
label_10ef6c:
    // 0x10ef6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef70: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x10EF70u;
    SET_GPR_U32(ctx, 31, 0x10EF78u);
    ctx->pc = 0x10EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF70u;
    // 0x10ef74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x10EF70u, 0x10EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF78u;
label_10ef78:
    // 0x10ef78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10EF7Cu;
    SET_GPR_U32(ctx, 31, 0x10EF84u);
    ctx->pc = 0x10EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF7Cu;
    // 0x10ef80: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10EF7Cu, 0x10EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF84u;
label_10ef84:
    // 0x10ef84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ef84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef88: 0xc040fea  jal         func_103FA8
    ctx->pc = 0x10EF88u;
    SET_GPR_U32(ctx, 31, 0x10EF90u);
    ctx->pc = 0x10EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF88u;
    // 0x10ef8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FA8u, 0x10EF88u, 0x10EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF90u;
label_10ef90:
    // 0x10ef90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef94: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10EF94u;
    SET_GPR_U32(ctx, 31, 0x10EF9Cu);
    ctx->pc = 0x10EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF94u;
    // 0x10ef98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10EF94u, 0x10EF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF9Cu;
label_10ef9c:
    // 0x10ef9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efa0: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10EFA0u;
    SET_GPR_U32(ctx, 31, 0x10EFA8u);
    ctx->pc = 0x10EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFA0u;
    // 0x10efa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10EFA0u, 0x10EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFA8u;
label_10efa8:
    // 0x10efa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10efa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10efacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10efb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efb4: 0xc043b48  jal         func_10ED20
    ctx->pc = 0x10EFB4u;
    SET_GPR_U32(ctx, 31, 0x10EFBCu);
    ctx->pc = 0x10EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFB4u;
    // 0x10efb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x10EFB4u, 0x10EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFBCu;
label_10efbc:
    // 0x10efbc: 0xc065e54  jal         func_197950
    ctx->pc = 0x10EFBCu;
    SET_GPR_U32(ctx, 31, 0x10EFC4u);
    ctx->pc = 0x10EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFBCu;
    // 0x10efc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197950u, 0x10EFBCu, 0x10EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFC4u;
label_10efc4:
    // 0x10efc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10efc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efc8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10efcc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x10efccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x10efd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10efd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd8: 0xc0658a2  jal         func_196288
    ctx->pc = 0x10EFD8u;
    SET_GPR_U32(ctx, 31, 0x10EFE0u);
    ctx->pc = 0x10EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFD8u;
    // 0x10efdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196288u, 0x10EFD8u, 0x10EFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFE0u;
label_10efe0:
    // 0x10efe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efe4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x10EFE4u;
    SET_GPR_U32(ctx, 31, 0x10EFECu);
    ctx->pc = 0x10EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFE4u;
    // 0x10efe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10EFE4u, 0x10EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFECu;
label_10efec:
    // 0x10efec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eff0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10eff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eff4: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10EFF4u;
    SET_GPR_U32(ctx, 31, 0x10EFFCu);
    ctx->pc = 0x10EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFF4u;
    // 0x10eff8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10EFF4u, 0x10EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFFCu;
label_10effc:
    // 0x10effc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10effcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f000: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10f000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10f004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f008: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10f008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f00c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10f00cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f010: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10f010u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10f014: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f018: 0x3e00008  jr          $ra
    ctx->pc = 0x10F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F018u;
        // 0x10f01c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F020u;
}
