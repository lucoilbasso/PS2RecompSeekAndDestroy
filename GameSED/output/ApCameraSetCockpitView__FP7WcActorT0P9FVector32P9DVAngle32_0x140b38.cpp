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

// Function: ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32
// Address: 0x140b38 - 0x140c34
void ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32_0x140b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32_0x140b38");
#endif

    switch (ctx->pc) {
        case 0x140b38u: goto label_140b38;
        case 0x140b3cu: goto label_140b3c;
        case 0x140b40u: goto label_140b40;
        case 0x140b44u: goto label_140b44;
        case 0x140b48u: goto label_140b48;
        case 0x140b4cu: goto label_140b4c;
        case 0x140b50u: goto label_140b50;
        case 0x140b54u: goto label_140b54;
        case 0x140b58u: goto label_140b58;
        case 0x140b5cu: goto label_140b5c;
        case 0x140b60u: goto label_140b60;
        case 0x140b64u: goto label_140b64;
        case 0x140b68u: goto label_140b68;
        case 0x140b6cu: goto label_140b6c;
        case 0x140b70u: goto label_140b70;
        case 0x140b74u: goto label_140b74;
        case 0x140b78u: goto label_140b78;
        case 0x140b7cu: goto label_140b7c;
        case 0x140b80u: goto label_140b80;
        case 0x140b84u: goto label_140b84;
        case 0x140b88u: goto label_140b88;
        case 0x140b8cu: goto label_140b8c;
        case 0x140b90u: goto label_140b90;
        case 0x140b94u: goto label_140b94;
        case 0x140b98u: goto label_140b98;
        case 0x140b9cu: goto label_140b9c;
        case 0x140ba0u: goto label_140ba0;
        case 0x140ba4u: goto label_140ba4;
        case 0x140ba8u: goto label_140ba8;
        case 0x140bacu: goto label_140bac;
        case 0x140bb0u: goto label_140bb0;
        case 0x140bb4u: goto label_140bb4;
        case 0x140bb8u: goto label_140bb8;
        case 0x140bbcu: goto label_140bbc;
        case 0x140bc0u: goto label_140bc0;
        case 0x140bc4u: goto label_140bc4;
        case 0x140bc8u: goto label_140bc8;
        case 0x140bccu: goto label_140bcc;
        case 0x140bd0u: goto label_140bd0;
        case 0x140bd4u: goto label_140bd4;
        case 0x140bd8u: goto label_140bd8;
        case 0x140bdcu: goto label_140bdc;
        case 0x140be0u: goto label_140be0;
        case 0x140be4u: goto label_140be4;
        case 0x140be8u: goto label_140be8;
        case 0x140becu: goto label_140bec;
        case 0x140bf0u: goto label_140bf0;
        case 0x140bf4u: goto label_140bf4;
        case 0x140bf8u: goto label_140bf8;
        case 0x140bfcu: goto label_140bfc;
        case 0x140c00u: goto label_140c00;
        case 0x140c04u: goto label_140c04;
        case 0x140c08u: goto label_140c08;
        case 0x140c0cu: goto label_140c0c;
        case 0x140c10u: goto label_140c10;
        case 0x140c14u: goto label_140c14;
        case 0x140c18u: goto label_140c18;
        case 0x140c1cu: goto label_140c1c;
        case 0x140c20u: goto label_140c20;
        case 0x140c24u: goto label_140c24;
        case 0x140c28u: goto label_140c28;
        case 0x140c2cu: goto label_140c2c;
        case 0x140c30u: goto label_140c30;
        default: break;
    }

    ctx->pc = 0x140b38u;

label_140b38:
    // 0x140b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_140b3c:
    // 0x140b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_140b40:
    // 0x140b40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x140b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_140b44:
    // 0x140b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x140b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140b48:
    // 0x140b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_140b4c:
    // 0x140b4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x140b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_140b50:
    // 0x140b50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x140b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_140b54:
    // 0x140b54: 0xc050292  jal         func_140A48
label_140b58:
    if (ctx->pc == 0x140B58u) {
        ctx->pc = 0x140B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B54u;
        // 0x140b58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B5Cu;
        goto label_140b5c;
    }
    ctx->pc = 0x140B54u;
    SET_GPR_U32(ctx, 31, 0x140B5Cu);
    ctx->pc = 0x140B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B54u;
    // 0x140b58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140A48u, 0x140B54u, 0x140B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B5Cu;
label_140b5c:
    // 0x140b5c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_140b60:
    if (ctx->pc == 0x140B60u) {
        ctx->pc = 0x140B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B5Cu;
        // 0x140b60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B64u;
        goto label_140b64;
    }
    ctx->pc = 0x140B5Cu;
    {
        const bool branch_taken_0x140b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B5Cu;
        // 0x140b60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b5c) {
            ctx->pc = 0x140B74u;
            goto label_140b74;
        }
    }
    ctx->pc = 0x140B64u;
label_140b64:
    // 0x140b64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x140b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140b68:
    // 0x140b68: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x140b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_140b6c:
    // 0x140b6c: 0xc050a56  jal         func_142958
label_140b70:
    if (ctx->pc == 0x140B70u) {
        ctx->pc = 0x140B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B6Cu;
        // 0x140b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B74u;
        goto label_140b74;
    }
    ctx->pc = 0x140B6Cu;
    SET_GPR_U32(ctx, 31, 0x140B74u);
    ctx->pc = 0x140B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B6Cu;
    // 0x140b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x140B6Cu, 0x140B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B74u;
label_140b74:
    // 0x140b74: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140b78:
    // 0x140b78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_140b7c:
    // 0x140b7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x140b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_140b80:
    // 0x140b80: 0xc061a46  jal         func_186918
label_140b84:
    if (ctx->pc == 0x140B84u) {
        ctx->pc = 0x140B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B80u;
        // 0x140b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B88u;
        goto label_140b88;
    }
    ctx->pc = 0x140B80u;
    SET_GPR_U32(ctx, 31, 0x140B88u);
    ctx->pc = 0x140B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140B80u;
    // 0x140b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x140B80u, 0x140B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B88u;
label_140b88:
    // 0x140b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140b8c:
    // 0x140b8c: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
label_140b90:
    if (ctx->pc == 0x140B90u) {
        ctx->pc = 0x140B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B8Cu;
        // 0x140b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B94u;
        goto label_140b94;
    }
    ctx->pc = 0x140B8Cu;
    {
        const bool branch_taken_0x140b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b8c) {
            ctx->pc = 0x140B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140B8Cu;
            // 0x140b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140C20u;
            goto label_140c20;
        }
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x140b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_140b98:
    // 0x140b98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_140b9c:
    if (ctx->pc == 0x140B9Cu) {
        ctx->pc = 0x140B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B98u;
        // 0x140b9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BA0u;
        goto label_140ba0;
    }
    ctx->pc = 0x140B98u;
    {
        const bool branch_taken_0x140b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B98u;
        // 0x140b9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b98) {
            ctx->pc = 0x140C1Cu;
            goto label_140c1c;
        }
    }
    ctx->pc = 0x140BA0u;
label_140ba0:
    // 0x140ba0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x140ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_140ba4:
    // 0x140ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140ba8:
    if (ctx->pc == 0x140BA8u) {
        ctx->pc = 0x140BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BA4u;
        // 0x140ba8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BACu;
        goto label_140bac;
    }
    ctx->pc = 0x140BA4u;
    {
        const bool branch_taken_0x140ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ba4) {
            ctx->pc = 0x140BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140BA4u;
            // 0x140ba8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140BB8u;
            goto label_140bb8;
        }
    }
    ctx->pc = 0x140BACu;
label_140bac:
    // 0x140bac: 0x40f809  jalr        $v0
label_140bb0:
    if (ctx->pc == 0x140BB0u) {
        ctx->pc = 0x140BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BACu;
        // 0x140bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BB4u;
        goto label_140bb4;
    }
    ctx->pc = 0x140BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140BB4u);
        ctx->pc = 0x140BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BACu;
        // 0x140bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140BACu, 0x140BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140BB4u;
label_140bb4:
    // 0x140bb4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x140bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_140bb8:
    // 0x140bb8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_140bbc:
    // 0x140bbc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_140bc0:
    if (ctx->pc == 0x140BC0u) {
        ctx->pc = 0x140BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BBCu;
        // 0x140bc0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BC4u;
        goto label_140bc4;
    }
    ctx->pc = 0x140BBCu;
    {
        const bool branch_taken_0x140bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BBCu;
        // 0x140bc0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bbc) {
            ctx->pc = 0x140C00u;
            goto label_140c00;
        }
    }
    ctx->pc = 0x140BC4u;
label_140bc4:
    // 0x140bc4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_140bc8:
    if (ctx->pc == 0x140BC8u) {
        ctx->pc = 0x140BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BC4u;
        // 0x140bc8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BCCu;
        goto label_140bcc;
    }
    ctx->pc = 0x140BC4u;
    {
        const bool branch_taken_0x140bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BC4u;
        // 0x140bc8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bc4) {
            ctx->pc = 0x140BD8u;
            goto label_140bd8;
        }
    }
    ctx->pc = 0x140BCCu;
label_140bcc:
    // 0x140bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140bd0:
    // 0x140bd0: 0xc0618c2  jal         func_186308
label_140bd4:
    if (ctx->pc == 0x140BD4u) {
        ctx->pc = 0x140BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD0u;
        // 0x140bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BD8u;
        goto label_140bd8;
    }
    ctx->pc = 0x140BD0u;
    SET_GPR_U32(ctx, 31, 0x140BD8u);
    ctx->pc = 0x140BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BD0u;
    // 0x140bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140BD0u, 0x140BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BD8u;
label_140bd8:
    // 0x140bd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_140bdc:
    if (ctx->pc == 0x140BDCu) {
        ctx->pc = 0x140BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD8u;
        // 0x140bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BE0u;
        goto label_140be0;
    }
    ctx->pc = 0x140BD8u;
    {
        const bool branch_taken_0x140bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BD8u;
        // 0x140bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bd8) {
            ctx->pc = 0x140BECu;
            goto label_140bec;
        }
    }
    ctx->pc = 0x140BE0u;
label_140be0:
    // 0x140be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140be4:
    // 0x140be4: 0xc0618da  jal         func_186368
label_140be8:
    if (ctx->pc == 0x140BE8u) {
        ctx->pc = 0x140BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BE4u;
        // 0x140be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BECu;
        goto label_140bec;
    }
    ctx->pc = 0x140BE4u;
    SET_GPR_U32(ctx, 31, 0x140BECu);
    ctx->pc = 0x140BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140BE4u;
    // 0x140be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140BE4u, 0x140BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BECu;
label_140bec:
    // 0x140bec: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x140becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_140bf0:
    // 0x140bf0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x140bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_140bf4:
    // 0x140bf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_140bf8:
    if (ctx->pc == 0x140BF8u) {
        ctx->pc = 0x140BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BF4u;
        // 0x140bf8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140BFCu;
        goto label_140bfc;
    }
    ctx->pc = 0x140BF4u;
    {
        const bool branch_taken_0x140bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140BF4u;
        // 0x140bf8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140bf4) {
            ctx->pc = 0x140C1Cu;
            goto label_140c1c;
        }
    }
    ctx->pc = 0x140BFCu;
label_140bfc:
    // 0x140bfc: 0x0  nop
    ctx->pc = 0x140bfcu;
    // NOP
label_140c00:
    // 0x140c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140c04:
    // 0x140c04: 0xc0618c2  jal         func_186308
label_140c08:
    if (ctx->pc == 0x140C08u) {
        ctx->pc = 0x140C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C04u;
        // 0x140c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C0Cu;
        goto label_140c0c;
    }
    ctx->pc = 0x140C04u;
    SET_GPR_U32(ctx, 31, 0x140C0Cu);
    ctx->pc = 0x140C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C04u;
    // 0x140c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140C04u, 0x140C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C0Cu;
label_140c0c:
    // 0x140c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140c10:
    // 0x140c10: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_140c14:
    // 0x140c14: 0xc0618da  jal         func_186368
label_140c18:
    if (ctx->pc == 0x140C18u) {
        ctx->pc = 0x140C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C14u;
        // 0x140c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C1Cu;
        goto label_140c1c;
    }
    ctx->pc = 0x140C14u;
    SET_GPR_U32(ctx, 31, 0x140C1Cu);
    ctx->pc = 0x140C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C14u;
    // 0x140c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140C14u, 0x140C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C1Cu;
label_140c1c:
    // 0x140c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140c20:
    // 0x140c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_140c24:
    // 0x140c24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140c28:
    // 0x140c28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x140c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_140c2c:
    // 0x140c2c: 0x3e00008  jr          $ra
label_140c30:
    if (ctx->pc == 0x140C30u) {
        ctx->pc = 0x140C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C2Cu;
        // 0x140c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C34u;
        goto label_fallthrough_0x140c2c;
    }
    ctx->pc = 0x140C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C2Cu;
        // 0x140c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140c2c:
    ctx->pc = 0x140C34u;
}
