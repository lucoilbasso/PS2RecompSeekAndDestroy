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

// Function: Cmd_PANEL_LOCATE_Entry__FP15BsSCDEntControl
// Address: 0x10ca58 - 0x10cb0c
void Cmd_PANEL_LOCATE_Entry__FP15BsSCDEntControl_0x10ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_LOCATE_Entry__FP15BsSCDEntControl_0x10ca58");
#endif

    switch (ctx->pc) {
        case 0x10ca88u: goto label_10ca88;
        case 0x10cab4u: goto label_10cab4;
        case 0x10cac0u: goto label_10cac0;
        case 0x10cae0u: goto label_10cae0;
        case 0x10caf0u: goto label_10caf0;
        default: break;
    }

    ctx->pc = 0x10ca58u;

    // 0x10ca58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ca5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ca5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ca64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ca64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ca6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ca74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ca78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ca7c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10ca80: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CA80u;
    SET_GPR_U32(ctx, 31, 0x10CA88u);
    ctx->pc = 0x10CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA80u;
    // 0x10ca84: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CA80u, 0x10CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA88u;
label_10ca88:
    // 0x10ca88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca8c: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10ca90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CA90u;
    {
        const bool branch_taken_0x10ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA90u;
        // 0x10ca94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca90) {
            ctx->pc = 0x10CAA8u;
            goto label_10caa8;
        }
    }
    ctx->pc = 0x10CA98u;
    // 0x10ca98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ca9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10caa0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CAA0u;
    {
        const bool branch_taken_0x10caa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10caa0) {
            ctx->pc = 0x10CAACu;
            goto label_10caac;
        }
    }
    ctx->pc = 0x10CAA8u;
label_10caa8:
    // 0x10caa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10caa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10caac:
    // 0x10caac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CAACu;
    SET_GPR_U32(ctx, 31, 0x10CAB4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CAACu, 0x10CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB4u;
label_10cab4:
    // 0x10cab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CAB8u;
    SET_GPR_U32(ctx, 31, 0x10CAC0u);
    ctx->pc = 0x10CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAB8u;
    // 0x10cabc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CAB8u, 0x10CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC0u;
label_10cac0:
    // 0x10cac0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cac4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cac8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10cacc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cad0: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CAD0u;
    {
        const bool branch_taken_0x10cad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10cad0) {
            ctx->pc = 0x10CAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAD0u;
            // 0x10cad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CAE4u;
            goto label_10cae4;
        }
    }
    ctx->pc = 0x10CAD8u;
    // 0x10cad8: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x10CAD8u;
    SET_GPR_U32(ctx, 31, 0x10CAE0u);
    ctx->pc = 0x10CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAD8u;
    // 0x10cadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x10CAD8u, 0x10CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAE0u;
label_10cae0:
    // 0x10cae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cae4:
    // 0x10cae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10cae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cae8: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x10CAE8u;
    SET_GPR_U32(ctx, 31, 0x10CAF0u);
    ctx->pc = 0x10CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAE8u;
    // 0x10caec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x10CAE8u, 0x10CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAF0u;
label_10caf0:
    // 0x10caf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10caf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10caf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10caf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10caf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10caf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cafc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cb00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB04u;
        // 0x10cb08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB0Cu;
}
