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

// Function: ApCameraSetPositionFree__FP7WcActorP9FVector32P9DVAngle32
// Address: 0x13fac0 - 0x13fbe8
void ApCameraSetPositionFree__FP7WcActorP9FVector32P9DVAngle32_0x13fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetPositionFree__FP7WcActorP9FVector32P9DVAngle32_0x13fac0");
#endif

    switch (ctx->pc) {
        case 0x13fac0u: goto label_13fac0;
        case 0x13fac4u: goto label_13fac4;
        case 0x13fac8u: goto label_13fac8;
        case 0x13faccu: goto label_13facc;
        case 0x13fad0u: goto label_13fad0;
        case 0x13fad4u: goto label_13fad4;
        case 0x13fad8u: goto label_13fad8;
        case 0x13fadcu: goto label_13fadc;
        case 0x13fae0u: goto label_13fae0;
        case 0x13fae4u: goto label_13fae4;
        case 0x13fae8u: goto label_13fae8;
        case 0x13faecu: goto label_13faec;
        case 0x13faf0u: goto label_13faf0;
        case 0x13faf4u: goto label_13faf4;
        case 0x13faf8u: goto label_13faf8;
        case 0x13fafcu: goto label_13fafc;
        case 0x13fb00u: goto label_13fb00;
        case 0x13fb04u: goto label_13fb04;
        case 0x13fb08u: goto label_13fb08;
        case 0x13fb0cu: goto label_13fb0c;
        case 0x13fb10u: goto label_13fb10;
        case 0x13fb14u: goto label_13fb14;
        case 0x13fb18u: goto label_13fb18;
        case 0x13fb1cu: goto label_13fb1c;
        case 0x13fb20u: goto label_13fb20;
        case 0x13fb24u: goto label_13fb24;
        case 0x13fb28u: goto label_13fb28;
        case 0x13fb2cu: goto label_13fb2c;
        case 0x13fb30u: goto label_13fb30;
        case 0x13fb34u: goto label_13fb34;
        case 0x13fb38u: goto label_13fb38;
        case 0x13fb3cu: goto label_13fb3c;
        case 0x13fb40u: goto label_13fb40;
        case 0x13fb44u: goto label_13fb44;
        case 0x13fb48u: goto label_13fb48;
        case 0x13fb4cu: goto label_13fb4c;
        case 0x13fb50u: goto label_13fb50;
        case 0x13fb54u: goto label_13fb54;
        case 0x13fb58u: goto label_13fb58;
        case 0x13fb5cu: goto label_13fb5c;
        case 0x13fb60u: goto label_13fb60;
        case 0x13fb64u: goto label_13fb64;
        case 0x13fb68u: goto label_13fb68;
        case 0x13fb6cu: goto label_13fb6c;
        case 0x13fb70u: goto label_13fb70;
        case 0x13fb74u: goto label_13fb74;
        case 0x13fb78u: goto label_13fb78;
        case 0x13fb7cu: goto label_13fb7c;
        case 0x13fb80u: goto label_13fb80;
        case 0x13fb84u: goto label_13fb84;
        case 0x13fb88u: goto label_13fb88;
        case 0x13fb8cu: goto label_13fb8c;
        case 0x13fb90u: goto label_13fb90;
        case 0x13fb94u: goto label_13fb94;
        case 0x13fb98u: goto label_13fb98;
        case 0x13fb9cu: goto label_13fb9c;
        case 0x13fba0u: goto label_13fba0;
        case 0x13fba4u: goto label_13fba4;
        case 0x13fba8u: goto label_13fba8;
        case 0x13fbacu: goto label_13fbac;
        case 0x13fbb0u: goto label_13fbb0;
        case 0x13fbb4u: goto label_13fbb4;
        case 0x13fbb8u: goto label_13fbb8;
        case 0x13fbbcu: goto label_13fbbc;
        case 0x13fbc0u: goto label_13fbc0;
        case 0x13fbc4u: goto label_13fbc4;
        case 0x13fbc8u: goto label_13fbc8;
        case 0x13fbccu: goto label_13fbcc;
        case 0x13fbd0u: goto label_13fbd0;
        case 0x13fbd4u: goto label_13fbd4;
        case 0x13fbd8u: goto label_13fbd8;
        case 0x13fbdcu: goto label_13fbdc;
        case 0x13fbe0u: goto label_13fbe0;
        case 0x13fbe4u: goto label_13fbe4;
        default: break;
    }

    ctx->pc = 0x13fac0u;

label_13fac0:
    // 0x13fac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13fac4:
    // 0x13fac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13fac8:
    // 0x13fac8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13fac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13facc:
    // 0x13facc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13fad0:
    // 0x13fad0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13fad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13fad4:
    // 0x13fad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fad8:
    // 0x13fad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13fadc:
    // 0x13fadc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13fae0:
    // 0x13fae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13fae4:
    // 0x13fae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13fae8:
    // 0x13fae8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_13faec:
    // 0x13faec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13faf0:
    // 0x13faf0: 0xc04fce4  jal         func_13F390
label_13faf4:
    if (ctx->pc == 0x13FAF4u) {
        ctx->pc = 0x13FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAF0u;
        // 0x13faf4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FAF8u;
        goto label_13faf8;
    }
    ctx->pc = 0x13FAF0u;
    SET_GPR_U32(ctx, 31, 0x13FAF8u);
    ctx->pc = 0x13FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAF0u;
    // 0x13faf4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13FAF0u, 0x13FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAF8u;
label_13faf8:
    // 0x13faf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13faf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13fafc:
    // 0x13fafc: 0x26740030  addiu       $s4, $s3, 0x30
    ctx->pc = 0x13fafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_13fb00:
    // 0x13fb00: 0x26750040  addiu       $s5, $s3, 0x40
    ctx->pc = 0x13fb00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_13fb04:
    // 0x13fb04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13fb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13fb08:
    // 0x13fb08: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x13fb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13fb0c:
    // 0x13fb0c: 0x231300b  movn        $a2, $s1, $s1
    ctx->pc = 0x13fb0cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
label_13fb10:
    // 0x13fb10: 0x210380b  movn        $a3, $s0, $s0
    ctx->pc = 0x13fb10u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_13fb14:
    // 0x13fb14: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x13fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_13fb18:
    // 0x13fb18: 0xc0505f0  jal         func_1417C0
label_13fb1c:
    if (ctx->pc == 0x13FB1Cu) {
        ctx->pc = 0x13FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB18u;
        // 0x13fb1c: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB20u;
        goto label_13fb20;
    }
    ctx->pc = 0x13FB18u;
    SET_GPR_U32(ctx, 31, 0x13FB20u);
    ctx->pc = 0x13FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB18u;
    // 0x13fb1c: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417C0u, 0x13FB18u, 0x13FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB20u;
label_13fb20:
    // 0x13fb20: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13fb24:
    // 0x13fb24: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_13fb28:
    // 0x13fb28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13fb2c:
    // 0x13fb2c: 0xc061a46  jal         func_186918
label_13fb30:
    if (ctx->pc == 0x13FB30u) {
        ctx->pc = 0x13FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB2Cu;
        // 0x13fb30: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB34u;
        goto label_13fb34;
    }
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x13FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB2Cu;
    // 0x13fb30: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FB2Cu, 0x13FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB34u;
label_13fb34:
    // 0x13fb34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13fb38:
    // 0x13fb38: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_13fb3c:
    if (ctx->pc == 0x13FB3Cu) {
        ctx->pc = 0x13FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB38u;
        // 0x13fb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB40u;
        goto label_13fb40;
    }
    ctx->pc = 0x13FB38u;
    {
        const bool branch_taken_0x13fb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB38u;
        // 0x13fb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb38) {
            ctx->pc = 0x13FBC8u;
            goto label_13fbc8;
        }
    }
    ctx->pc = 0x13FB40u;
label_13fb40:
    // 0x13fb40: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x13fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_13fb44:
    // 0x13fb44: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_13fb48:
    if (ctx->pc == 0x13FB48u) {
        ctx->pc = 0x13FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB44u;
        // 0x13fb48: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB4Cu;
        goto label_13fb4c;
    }
    ctx->pc = 0x13FB44u;
    {
        const bool branch_taken_0x13fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB44u;
        // 0x13fb48: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb44) {
            ctx->pc = 0x13FBC4u;
            goto label_13fbc4;
        }
    }
    ctx->pc = 0x13FB4Cu;
label_13fb4c:
    // 0x13fb4c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x13fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_13fb50:
    // 0x13fb50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13fb54:
    if (ctx->pc == 0x13FB54u) {
        ctx->pc = 0x13FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB50u;
        // 0x13fb54: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB58u;
        goto label_13fb58;
    }
    ctx->pc = 0x13FB50u;
    {
        const bool branch_taken_0x13fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb50) {
            ctx->pc = 0x13FB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FB50u;
            // 0x13fb54: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FB64u;
            goto label_13fb64;
        }
    }
    ctx->pc = 0x13FB58u;
label_13fb58:
    // 0x13fb58: 0x40f809  jalr        $v0
label_13fb5c:
    if (ctx->pc == 0x13FB5Cu) {
        ctx->pc = 0x13FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB58u;
        // 0x13fb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB60u;
        goto label_13fb60;
    }
    ctx->pc = 0x13FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FB60u);
        ctx->pc = 0x13FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB58u;
        // 0x13fb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB58u, 0x13FB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13FB60u;
label_13fb60:
    // 0x13fb60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13fb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13fb64:
    // 0x13fb64: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_13fb68:
    // 0x13fb68: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_13fb6c:
    if (ctx->pc == 0x13FB6Cu) {
        ctx->pc = 0x13FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB68u;
        // 0x13fb6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB70u;
        goto label_13fb70;
    }
    ctx->pc = 0x13FB68u;
    {
        const bool branch_taken_0x13fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB68u;
        // 0x13fb6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb68) {
            ctx->pc = 0x13FBA8u;
            goto label_13fba8;
        }
    }
    ctx->pc = 0x13FB70u;
label_13fb70:
    // 0x13fb70: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_13fb74:
    if (ctx->pc == 0x13FB74u) {
        ctx->pc = 0x13FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB70u;
        // 0x13fb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB78u;
        goto label_13fb78;
    }
    ctx->pc = 0x13FB70u;
    {
        const bool branch_taken_0x13fb70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB70u;
        // 0x13fb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb70) {
            ctx->pc = 0x13FB80u;
            goto label_13fb80;
        }
    }
    ctx->pc = 0x13FB78u;
label_13fb78:
    // 0x13fb78: 0xc0618c2  jal         func_186308
label_13fb7c:
    if (ctx->pc == 0x13FB7Cu) {
        ctx->pc = 0x13FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB78u;
        // 0x13fb7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB80u;
        goto label_13fb80;
    }
    ctx->pc = 0x13FB78u;
    SET_GPR_U32(ctx, 31, 0x13FB80u);
    ctx->pc = 0x13FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB78u;
    // 0x13fb7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FB78u, 0x13FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB80u;
label_13fb80:
    // 0x13fb80: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_13fb84:
    if (ctx->pc == 0x13FB84u) {
        ctx->pc = 0x13FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB80u;
        // 0x13fb84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB88u;
        goto label_13fb88;
    }
    ctx->pc = 0x13FB80u;
    {
        const bool branch_taken_0x13fb80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB80u;
        // 0x13fb84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb80) {
            ctx->pc = 0x13FB94u;
            goto label_13fb94;
        }
    }
    ctx->pc = 0x13FB88u;
label_13fb88:
    // 0x13fb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13fb8c:
    // 0x13fb8c: 0xc0618da  jal         func_186368
label_13fb90:
    if (ctx->pc == 0x13FB90u) {
        ctx->pc = 0x13FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB8Cu;
        // 0x13fb90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FB94u;
        goto label_13fb94;
    }
    ctx->pc = 0x13FB8Cu;
    SET_GPR_U32(ctx, 31, 0x13FB94u);
    ctx->pc = 0x13FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB8Cu;
    // 0x13fb90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FB8Cu, 0x13FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB94u;
label_13fb94:
    // 0x13fb94: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_13fb98:
    // 0x13fb98: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13fb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_13fb9c:
    // 0x13fb9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_13fba0:
    if (ctx->pc == 0x13FBA0u) {
        ctx->pc = 0x13FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB9Cu;
        // 0x13fba0: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FBA4u;
        goto label_13fba4;
    }
    ctx->pc = 0x13FB9Cu;
    {
        const bool branch_taken_0x13fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB9Cu;
        // 0x13fba0: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb9c) {
            ctx->pc = 0x13FBC4u;
            goto label_13fbc4;
        }
    }
    ctx->pc = 0x13FBA4u;
label_13fba4:
    // 0x13fba4: 0x0  nop
    ctx->pc = 0x13fba4u;
    // NOP
label_13fba8:
    // 0x13fba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fbac:
    // 0x13fbac: 0xc0618c2  jal         func_186308
label_13fbb0:
    if (ctx->pc == 0x13FBB0u) {
        ctx->pc = 0x13FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBACu;
        // 0x13fbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FBB4u;
        goto label_13fbb4;
    }
    ctx->pc = 0x13FBACu;
    SET_GPR_U32(ctx, 31, 0x13FBB4u);
    ctx->pc = 0x13FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBACu;
    // 0x13fbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FBACu, 0x13FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB4u;
label_13fbb4:
    // 0x13fbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13fbb8:
    // 0x13fbb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13fbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13fbbc:
    // 0x13fbbc: 0xc0618da  jal         func_186368
label_13fbc0:
    if (ctx->pc == 0x13FBC0u) {
        ctx->pc = 0x13FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBBCu;
        // 0x13fbc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FBC4u;
        goto label_13fbc4;
    }
    ctx->pc = 0x13FBBCu;
    SET_GPR_U32(ctx, 31, 0x13FBC4u);
    ctx->pc = 0x13FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBBCu;
    // 0x13fbc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FBBCu, 0x13FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBC4u;
label_13fbc4:
    // 0x13fbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fbc8:
    // 0x13fbc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13fbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13fbcc:
    // 0x13fbcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13fbccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13fbd0:
    // 0x13fbd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13fbd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fbd4:
    // 0x13fbd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13fbd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13fbd8:
    // 0x13fbd8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13fbd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13fbdc:
    // 0x13fbdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13fbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13fbe0:
    // 0x13fbe0: 0x3e00008  jr          $ra
label_13fbe4:
    if (ctx->pc == 0x13FBE4u) {
        ctx->pc = 0x13FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBE0u;
        // 0x13fbe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FBE8u;
        goto label_fallthrough_0x13fbe0;
    }
    ctx->pc = 0x13FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBE0u;
        // 0x13fbe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13fbe0:
    ctx->pc = 0x13FBE8u;
}
