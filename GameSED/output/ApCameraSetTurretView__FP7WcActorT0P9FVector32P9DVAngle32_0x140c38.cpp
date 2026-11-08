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

// Function: ApCameraSetTurretView__FP7WcActorT0P9FVector32P9DVAngle32
// Address: 0x140c38 - 0x140d34
void ApCameraSetTurretView__FP7WcActorT0P9FVector32P9DVAngle32_0x140c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetTurretView__FP7WcActorT0P9FVector32P9DVAngle32_0x140c38");
#endif

    switch (ctx->pc) {
        case 0x140c38u: goto label_140c38;
        case 0x140c3cu: goto label_140c3c;
        case 0x140c40u: goto label_140c40;
        case 0x140c44u: goto label_140c44;
        case 0x140c48u: goto label_140c48;
        case 0x140c4cu: goto label_140c4c;
        case 0x140c50u: goto label_140c50;
        case 0x140c54u: goto label_140c54;
        case 0x140c58u: goto label_140c58;
        case 0x140c5cu: goto label_140c5c;
        case 0x140c60u: goto label_140c60;
        case 0x140c64u: goto label_140c64;
        case 0x140c68u: goto label_140c68;
        case 0x140c6cu: goto label_140c6c;
        case 0x140c70u: goto label_140c70;
        case 0x140c74u: goto label_140c74;
        case 0x140c78u: goto label_140c78;
        case 0x140c7cu: goto label_140c7c;
        case 0x140c80u: goto label_140c80;
        case 0x140c84u: goto label_140c84;
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        default: break;
    }

    ctx->pc = 0x140c38u;

label_140c38:
    // 0x140c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_140c3c:
    // 0x140c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_140c40:
    // 0x140c40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x140c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_140c44:
    // 0x140c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140c48:
    // 0x140c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_140c4c:
    // 0x140c4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x140c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_140c50:
    // 0x140c50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x140c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_140c54:
    // 0x140c54: 0xc050292  jal         func_140A48
label_140c58:
    if (ctx->pc == 0x140C58u) {
        ctx->pc = 0x140C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C54u;
        // 0x140c58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C5Cu;
        goto label_140c5c;
    }
    ctx->pc = 0x140C54u;
    SET_GPR_U32(ctx, 31, 0x140C5Cu);
    ctx->pc = 0x140C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C54u;
    // 0x140c58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140A48u, 0x140C54u, 0x140C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C5Cu;
label_140c5c:
    // 0x140c5c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_140c60:
    if (ctx->pc == 0x140C60u) {
        ctx->pc = 0x140C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C5Cu;
        // 0x140c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C64u;
        goto label_140c64;
    }
    ctx->pc = 0x140C5Cu;
    {
        const bool branch_taken_0x140c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C5Cu;
        // 0x140c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c5c) {
            ctx->pc = 0x140C74u;
            goto label_140c74;
        }
    }
    ctx->pc = 0x140C64u;
label_140c64:
    // 0x140c64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x140c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140c68:
    // 0x140c68: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_140c6c:
    // 0x140c6c: 0xc050a56  jal         func_142958
label_140c70:
    if (ctx->pc == 0x140C70u) {
        ctx->pc = 0x140C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C6Cu;
        // 0x140c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C74u;
        goto label_140c74;
    }
    ctx->pc = 0x140C6Cu;
    SET_GPR_U32(ctx, 31, 0x140C74u);
    ctx->pc = 0x140C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C6Cu;
    // 0x140c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x140C6Cu, 0x140C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C74u;
label_140c74:
    // 0x140c74: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x140c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_140c78:
    // 0x140c78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_140c7c:
    // 0x140c7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x140c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_140c80:
    // 0x140c80: 0xc061a46  jal         func_186918
label_140c84:
    if (ctx->pc == 0x140C84u) {
        ctx->pc = 0x140C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C80u;
        // 0x140c84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C88u;
        goto label_140c88;
    }
    ctx->pc = 0x140C80u;
    SET_GPR_U32(ctx, 31, 0x140C88u);
    ctx->pc = 0x140C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C80u;
    // 0x140c84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x140C80u, 0x140C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C88u;
label_140c88:
    // 0x140c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140c8c:
    // 0x140c8c: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
label_140c90:
    if (ctx->pc == 0x140C90u) {
        ctx->pc = 0x140C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C8Cu;
        // 0x140c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140C94u;
        goto label_140c94;
    }
    ctx->pc = 0x140C8Cu;
    {
        const bool branch_taken_0x140c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c8c) {
            ctx->pc = 0x140C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140C8Cu;
            // 0x140c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140D20u;
            goto label_140d20;
        }
    }
    ctx->pc = 0x140C94u;
label_140c94:
    // 0x140c94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_140c98:
    // 0x140c98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_140c9c:
    if (ctx->pc == 0x140C9Cu) {
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C98u;
        // 0x140c9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CA0u;
        goto label_140ca0;
    }
    ctx->pc = 0x140C98u;
    {
        const bool branch_taken_0x140c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C98u;
        // 0x140c9c: 0x8c91000c  lw          $s1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c98) {
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CA0u;
label_140ca0:
    // 0x140ca0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_140ca4:
    // 0x140ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_140ca8:
    if (ctx->pc == 0x140CA8u) {
        ctx->pc = 0x140CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CA4u;
        // 0x140ca8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CACu;
        goto label_140cac;
    }
    ctx->pc = 0x140CA4u;
    {
        const bool branch_taken_0x140ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ca4) {
            ctx->pc = 0x140CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140CA4u;
            // 0x140ca8: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140CB8u;
            goto label_140cb8;
        }
    }
    ctx->pc = 0x140CACu;
label_140cac:
    // 0x140cac: 0x40f809  jalr        $v0
label_140cb0:
    if (ctx->pc == 0x140CB0u) {
        ctx->pc = 0x140CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CACu;
        // 0x140cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CB4u;
        goto label_140cb4;
    }
    ctx->pc = 0x140CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140CB4u);
        ctx->pc = 0x140CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CACu;
        // 0x140cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x140cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_140cb8:
    // 0x140cb8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x140cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_140cbc:
    // 0x140cbc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_140cc0:
    if (ctx->pc == 0x140CC0u) {
        ctx->pc = 0x140CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CBCu;
        // 0x140cc0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CC4u;
        goto label_140cc4;
    }
    ctx->pc = 0x140CBCu;
    {
        const bool branch_taken_0x140cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x140CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CBCu;
        // 0x140cc0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cbc) {
            ctx->pc = 0x140D00u;
            goto label_140d00;
        }
    }
    ctx->pc = 0x140CC4u;
label_140cc4:
    // 0x140cc4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_140cc8:
    if (ctx->pc == 0x140CC8u) {
        ctx->pc = 0x140CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CC4u;
        // 0x140cc8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CCCu;
        goto label_140ccc;
    }
    ctx->pc = 0x140CC4u;
    {
        const bool branch_taken_0x140cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CC4u;
        // 0x140cc8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cc4) {
            ctx->pc = 0x140CD8u;
            goto label_140cd8;
        }
    }
    ctx->pc = 0x140CCCu;
label_140ccc:
    // 0x140ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140cd0:
    // 0x140cd0: 0xc0618c2  jal         func_186308
label_140cd4:
    if (ctx->pc == 0x140CD4u) {
        ctx->pc = 0x140CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CD0u;
        // 0x140cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CD8u;
        goto label_140cd8;
    }
    ctx->pc = 0x140CD0u;
    SET_GPR_U32(ctx, 31, 0x140CD8u);
    ctx->pc = 0x140CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CD0u;
    // 0x140cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140CD0u, 0x140CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD8u;
label_140cd8:
    // 0x140cd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_140cdc:
    if (ctx->pc == 0x140CDCu) {
        ctx->pc = 0x140CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CD8u;
        // 0x140cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CE0u;
        goto label_140ce0;
    }
    ctx->pc = 0x140CD8u;
    {
        const bool branch_taken_0x140cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CD8u;
        // 0x140cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cd8) {
            ctx->pc = 0x140CECu;
            goto label_140cec;
        }
    }
    ctx->pc = 0x140CE0u;
label_140ce0:
    // 0x140ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140ce4:
    // 0x140ce4: 0xc0618da  jal         func_186368
label_140ce8:
    if (ctx->pc == 0x140CE8u) {
        ctx->pc = 0x140CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CE4u;
        // 0x140ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CECu;
        goto label_140cec;
    }
    ctx->pc = 0x140CE4u;
    SET_GPR_U32(ctx, 31, 0x140CECu);
    ctx->pc = 0x140CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CE4u;
    // 0x140ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140CE4u, 0x140CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CECu;
label_140cec:
    // 0x140cec: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_140cf0:
    // 0x140cf0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x140cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_140cf4:
    // 0x140cf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_140cf8:
    if (ctx->pc == 0x140CF8u) {
        ctx->pc = 0x140CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF4u;
        // 0x140cf8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CFCu;
        goto label_140cfc;
    }
    ctx->pc = 0x140CF4u;
    {
        const bool branch_taken_0x140cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF4u;
        // 0x140cf8: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140cf4) {
            ctx->pc = 0x140D1Cu;
            goto label_140d1c;
        }
    }
    ctx->pc = 0x140CFCu;
label_140cfc:
    // 0x140cfc: 0x0  nop
    ctx->pc = 0x140cfcu;
    // NOP
label_140d00:
    // 0x140d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140d04:
    // 0x140d04: 0xc0618c2  jal         func_186308
label_140d08:
    if (ctx->pc == 0x140D08u) {
        ctx->pc = 0x140D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D04u;
        // 0x140d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D0Cu;
        goto label_140d0c;
    }
    ctx->pc = 0x140D04u;
    SET_GPR_U32(ctx, 31, 0x140D0Cu);
    ctx->pc = 0x140D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D04u;
    // 0x140d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140D04u, 0x140D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D0Cu;
label_140d0c:
    // 0x140d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140d10:
    // 0x140d10: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x140d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_140d14:
    // 0x140d14: 0xc0618da  jal         func_186368
label_140d18:
    if (ctx->pc == 0x140D18u) {
        ctx->pc = 0x140D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D14u;
        // 0x140d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D1Cu;
        goto label_140d1c;
    }
    ctx->pc = 0x140D14u;
    SET_GPR_U32(ctx, 31, 0x140D1Cu);
    ctx->pc = 0x140D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D14u;
    // 0x140d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140D14u, 0x140D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D1Cu;
label_140d1c:
    // 0x140d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140d20:
    // 0x140d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_140d24:
    // 0x140d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x140d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140d28:
    // 0x140d28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x140d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_140d2c:
    // 0x140d2c: 0x3e00008  jr          $ra
label_140d30:
    if (ctx->pc == 0x140D30u) {
        ctx->pc = 0x140D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D2Cu;
        // 0x140d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D34u;
        goto label_fallthrough_0x140d2c;
    }
    ctx->pc = 0x140D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D2Cu;
        // 0x140d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140d2c:
    ctx->pc = 0x140D34u;
}
