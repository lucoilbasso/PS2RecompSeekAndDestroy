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

// Function: Cmd_EXT_CALL_Entry__FP15BsSCDEntControl
// Address: 0x104b48 - 0x104c00
void Cmd_EXT_CALL_Entry__FP15BsSCDEntControl_0x104b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_CALL_Entry__FP15BsSCDEntControl_0x104b48");
#endif

    switch (ctx->pc) {
        case 0x104b68u: goto label_104b68;
        case 0x104b98u: goto label_104b98;
        case 0x104bacu: goto label_104bac;
        case 0x104bd0u: goto label_104bd0;
        case 0x104be4u: goto label_104be4;
        default: break;
    }

    ctx->pc = 0x104b48u;

    // 0x104b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104b54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104b5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104b60: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104B60u;
    SET_GPR_U32(ctx, 31, 0x104B68u);
    ctx->pc = 0x104B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B60u;
    // 0x104b64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104B60u, 0x104B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B68u;
label_104b68:
    // 0x104b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x104b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x104b70: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x104b74: 0x2631ed80  addiu       $s1, $s1, -0x1280
    ctx->pc = 0x104b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962560));
    // 0x104b78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x104b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x104b7c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x104b80: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104b84: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x104B84u;
    {
        const bool branch_taken_0x104b84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x104B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B84u;
        // 0x104b88: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b84) {
            ctx->pc = 0x104BACu;
            goto label_104bac;
        }
    }
    ctx->pc = 0x104B8Cu;
    // 0x104b8c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x104b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x104b90: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x104B90u;
    SET_GPR_U32(ctx, 31, 0x104B98u);
    ctx->pc = 0x104B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B90u;
    // 0x104b94: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x104B90u, 0x104B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B98u;
label_104b98:
    // 0x104b98: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104b9c: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x104b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x104ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ba4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104BA4u;
    SET_GPR_U32(ctx, 31, 0x104BACu);
    ctx->pc = 0x104BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BA4u;
    // 0x104ba8: 0x24a51f38  addiu       $a1, $a1, 0x1F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104BA4u, 0x104BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BACu;
label_104bac:
    // 0x104bac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x104bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104bb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x104bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x104bb4: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104BB4u;
    {
        const bool branch_taken_0x104bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x104BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB4u;
        // 0x104bb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bb4) {
            ctx->pc = 0x104BE4u;
            goto label_104be4;
        }
    }
    ctx->pc = 0x104BBCu;
    // 0x104bbc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x104bc0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104BC0u;
    {
        const bool branch_taken_0x104bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104bc0) {
            ctx->pc = 0x104BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BC0u;
            // 0x104bc4: 0x8e27000c  lw          $a3, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104BD8u;
            goto label_104bd8;
        }
    }
    ctx->pc = 0x104BC8u;
    // 0x104bc8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104BC8u;
    SET_GPR_U32(ctx, 31, 0x104BD0u);
    ctx->pc = 0x104BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BC8u;
    // 0x104bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104BC8u, 0x104BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BD0u;
label_104bd0:
    // 0x104bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bd4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_104bd8:
    // 0x104bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bdc: 0xc060e56  jal         func_183958
    ctx->pc = 0x104BDCu;
    SET_GPR_U32(ctx, 31, 0x104BE4u);
    ctx->pc = 0x104BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BDCu;
    // 0x104be0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104BDCu, 0x104BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE4u;
label_104be4:
    // 0x104be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104bec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104bf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104bf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x104BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BF8u;
        // 0x104bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C00u;
}
