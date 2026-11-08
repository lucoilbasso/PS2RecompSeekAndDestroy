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

// Function: ApCameraSetActor2Reffer__FP7WcActorP9FVector32b
// Address: 0x13f990 - 0x13fabc
void ApCameraSetActor2Reffer__FP7WcActorP9FVector32b_0x13f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetActor2Reffer__FP7WcActorP9FVector32b_0x13f990");
#endif

    switch (ctx->pc) {
        case 0x13f990u: goto label_13f990;
        case 0x13f994u: goto label_13f994;
        case 0x13f998u: goto label_13f998;
        case 0x13f99cu: goto label_13f99c;
        case 0x13f9a0u: goto label_13f9a0;
        case 0x13f9a4u: goto label_13f9a4;
        case 0x13f9a8u: goto label_13f9a8;
        case 0x13f9acu: goto label_13f9ac;
        case 0x13f9b0u: goto label_13f9b0;
        case 0x13f9b4u: goto label_13f9b4;
        case 0x13f9b8u: goto label_13f9b8;
        case 0x13f9bcu: goto label_13f9bc;
        case 0x13f9c0u: goto label_13f9c0;
        case 0x13f9c4u: goto label_13f9c4;
        case 0x13f9c8u: goto label_13f9c8;
        case 0x13f9ccu: goto label_13f9cc;
        case 0x13f9d0u: goto label_13f9d0;
        case 0x13f9d4u: goto label_13f9d4;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9dcu: goto label_13f9dc;
        case 0x13f9e0u: goto label_13f9e0;
        case 0x13f9e4u: goto label_13f9e4;
        case 0x13f9e8u: goto label_13f9e8;
        case 0x13f9ecu: goto label_13f9ec;
        case 0x13f9f0u: goto label_13f9f0;
        case 0x13f9f4u: goto label_13f9f4;
        case 0x13f9f8u: goto label_13f9f8;
        case 0x13f9fcu: goto label_13f9fc;
        case 0x13fa00u: goto label_13fa00;
        case 0x13fa04u: goto label_13fa04;
        case 0x13fa08u: goto label_13fa08;
        case 0x13fa0cu: goto label_13fa0c;
        case 0x13fa10u: goto label_13fa10;
        case 0x13fa14u: goto label_13fa14;
        case 0x13fa18u: goto label_13fa18;
        case 0x13fa1cu: goto label_13fa1c;
        case 0x13fa20u: goto label_13fa20;
        case 0x13fa24u: goto label_13fa24;
        case 0x13fa28u: goto label_13fa28;
        case 0x13fa2cu: goto label_13fa2c;
        case 0x13fa30u: goto label_13fa30;
        case 0x13fa34u: goto label_13fa34;
        case 0x13fa38u: goto label_13fa38;
        case 0x13fa3cu: goto label_13fa3c;
        case 0x13fa40u: goto label_13fa40;
        case 0x13fa44u: goto label_13fa44;
        case 0x13fa48u: goto label_13fa48;
        case 0x13fa4cu: goto label_13fa4c;
        case 0x13fa50u: goto label_13fa50;
        case 0x13fa54u: goto label_13fa54;
        case 0x13fa58u: goto label_13fa58;
        case 0x13fa5cu: goto label_13fa5c;
        case 0x13fa60u: goto label_13fa60;
        case 0x13fa64u: goto label_13fa64;
        case 0x13fa68u: goto label_13fa68;
        case 0x13fa6cu: goto label_13fa6c;
        case 0x13fa70u: goto label_13fa70;
        case 0x13fa74u: goto label_13fa74;
        case 0x13fa78u: goto label_13fa78;
        case 0x13fa7cu: goto label_13fa7c;
        case 0x13fa80u: goto label_13fa80;
        case 0x13fa84u: goto label_13fa84;
        case 0x13fa88u: goto label_13fa88;
        case 0x13fa8cu: goto label_13fa8c;
        case 0x13fa90u: goto label_13fa90;
        case 0x13fa94u: goto label_13fa94;
        case 0x13fa98u: goto label_13fa98;
        case 0x13fa9cu: goto label_13fa9c;
        case 0x13faa0u: goto label_13faa0;
        case 0x13faa4u: goto label_13faa4;
        case 0x13faa8u: goto label_13faa8;
        case 0x13faacu: goto label_13faac;
        case 0x13fab0u: goto label_13fab0;
        case 0x13fab4u: goto label_13fab4;
        case 0x13fab8u: goto label_13fab8;
        default: break;
    }

    ctx->pc = 0x13f990u;

label_13f990:
    // 0x13f990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f994:
    // 0x13f994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f998:
    // 0x13f998: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13f998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f99c:
    // 0x13f99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f9a0:
    // 0x13f9a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f9a4:
    // 0x13f9a4: 0x11302b  sltu        $a2, $zero, $s1
    ctx->pc = 0x13f9a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_13f9a8:
    // 0x13f9a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f9ac:
    // 0x13f9ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f9b0:
    // 0x13f9b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f9b4:
    // 0x13f9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f9b8:
    // 0x13f9b8: 0xc04fce4  jal         func_13F390
label_13f9bc:
    if (ctx->pc == 0x13F9BCu) {
        ctx->pc = 0x13F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9B8u;
        // 0x13f9bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9C0u;
        goto label_13f9c0;
    }
    ctx->pc = 0x13F9B8u;
    SET_GPR_U32(ctx, 31, 0x13F9C0u);
    ctx->pc = 0x13F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9B8u;
    // 0x13f9bc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13F9B8u, 0x13F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9C0u;
label_13f9c0:
    // 0x13f9c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f9c4:
    // 0x13f9c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13f9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f9c8:
    // 0x13f9c8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x13f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_13f9cc:
    // 0x13f9cc: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_13f9d0:
    // 0x13f9d0: 0xc05063e  jal         func_1418F8
label_13f9d4:
    if (ctx->pc == 0x13F9D4u) {
        ctx->pc = 0x13F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D0u;
        // 0x13f9d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9D8u;
        goto label_13f9d8;
    }
    ctx->pc = 0x13F9D0u;
    SET_GPR_U32(ctx, 31, 0x13F9D8u);
    ctx->pc = 0x13F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9D0u;
    // 0x13f9d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418F8u, 0x13F9D0u, 0x13F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_13f9dc:
    if (ctx->pc == 0x13F9DCu) {
        ctx->pc = 0x13F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D8u;
        // 0x13f9dc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9E0u;
        goto label_13f9e0;
    }
    ctx->pc = 0x13F9D8u;
    {
        const bool branch_taken_0x13f9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D8u;
        // 0x13f9dc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9d8) {
            ctx->pc = 0x13FA84u;
            goto label_13fa84;
        }
    }
    ctx->pc = 0x13F9E0u;
label_13f9e0:
    // 0x13f9e0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f9e4:
    // 0x13f9e4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13f9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_13f9e8:
    // 0x13f9e8: 0xc061a46  jal         func_186918
label_13f9ec:
    if (ctx->pc == 0x13F9ECu) {
        ctx->pc = 0x13F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9E8u;
        // 0x13f9ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F9F0u;
        goto label_13f9f0;
    }
    ctx->pc = 0x13F9E8u;
    SET_GPR_U32(ctx, 31, 0x13F9F0u);
    ctx->pc = 0x13F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9E8u;
    // 0x13f9ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F9E8u, 0x13F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9F0u;
label_13f9f0:
    // 0x13f9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f9f4:
    // 0x13f9f4: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_13f9f8:
    if (ctx->pc == 0x13F9F8u) {
        ctx->pc = 0x13F9FCu;
        goto label_13f9fc;
    }
    ctx->pc = 0x13F9F4u;
    {
        const bool branch_taken_0x13f9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9f4) {
            ctx->pc = 0x13FA84u;
            goto label_13fa84;
        }
    }
    ctx->pc = 0x13F9FCu;
label_13f9fc:
    // 0x13f9fc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_13fa00:
    // 0x13fa00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_13fa04:
    if (ctx->pc == 0x13FA04u) {
        ctx->pc = 0x13FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA00u;
        // 0x13fa04: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA08u;
        goto label_13fa08;
    }
    ctx->pc = 0x13FA00u;
    {
        const bool branch_taken_0x13fa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA00u;
        // 0x13fa04: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa00) {
            ctx->pc = 0x13FA84u;
            goto label_13fa84;
        }
    }
    ctx->pc = 0x13FA08u;
label_13fa08:
    // 0x13fa08: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_13fa0c:
    // 0x13fa0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13fa10:
    if (ctx->pc == 0x13FA10u) {
        ctx->pc = 0x13FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA0Cu;
        // 0x13fa10: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA14u;
        goto label_13fa14;
    }
    ctx->pc = 0x13FA0Cu;
    {
        const bool branch_taken_0x13fa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa0c) {
            ctx->pc = 0x13FA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FA0Cu;
            // 0x13fa10: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FA20u;
            goto label_13fa20;
        }
    }
    ctx->pc = 0x13FA14u;
label_13fa14:
    // 0x13fa14: 0x40f809  jalr        $v0
label_13fa18:
    if (ctx->pc == 0x13FA18u) {
        ctx->pc = 0x13FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA14u;
        // 0x13fa18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA1Cu;
        goto label_13fa1c;
    }
    ctx->pc = 0x13FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FA1Cu);
        ctx->pc = 0x13FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA14u;
        // 0x13fa18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA14u, 0x13FA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13FA1Cu;
label_13fa1c:
    // 0x13fa1c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13fa1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13fa20:
    // 0x13fa20: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_13fa24:
    // 0x13fa24: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_13fa28:
    if (ctx->pc == 0x13FA28u) {
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA2Cu;
        goto label_13fa2c;
    }
    ctx->pc = 0x13FA24u;
    {
        const bool branch_taken_0x13fa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa24) {
            ctx->pc = 0x13FA68u;
            goto label_13fa68;
        }
    }
    ctx->pc = 0x13FA2Cu;
label_13fa2c:
    // 0x13fa2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13fa30:
    if (ctx->pc == 0x13FA30u) {
        ctx->pc = 0x13FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA2Cu;
        // 0x13fa30: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA34u;
        goto label_13fa34;
    }
    ctx->pc = 0x13FA2Cu;
    {
        const bool branch_taken_0x13fa2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA2Cu;
        // 0x13fa30: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa2c) {
            ctx->pc = 0x13FA40u;
            goto label_13fa40;
        }
    }
    ctx->pc = 0x13FA34u;
label_13fa34:
    // 0x13fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13fa38:
    // 0x13fa38: 0xc0618c2  jal         func_186308
label_13fa3c:
    if (ctx->pc == 0x13FA3Cu) {
        ctx->pc = 0x13FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA38u;
        // 0x13fa3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA40u;
        goto label_13fa40;
    }
    ctx->pc = 0x13FA38u;
    SET_GPR_U32(ctx, 31, 0x13FA40u);
    ctx->pc = 0x13FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA38u;
    // 0x13fa3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FA38u, 0x13FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA40u;
label_13fa40:
    // 0x13fa40: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_13fa44:
    if (ctx->pc == 0x13FA44u) {
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA40u;
        // 0x13fa44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA48u;
        goto label_13fa48;
    }
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA40u;
        // 0x13fa44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x13FA54u;
            goto label_13fa54;
        }
    }
    ctx->pc = 0x13FA48u;
label_13fa48:
    // 0x13fa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13fa4c:
    // 0x13fa4c: 0xc0618da  jal         func_186368
label_13fa50:
    if (ctx->pc == 0x13FA50u) {
        ctx->pc = 0x13FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA4Cu;
        // 0x13fa50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA54u;
        goto label_13fa54;
    }
    ctx->pc = 0x13FA4Cu;
    SET_GPR_U32(ctx, 31, 0x13FA54u);
    ctx->pc = 0x13FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA4Cu;
    // 0x13fa50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FA4Cu, 0x13FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA54u;
label_13fa54:
    // 0x13fa54: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_13fa58:
    // 0x13fa58: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_13fa5c:
    // 0x13fa5c: 0x10000009  b           . + 4 + (0x9 << 2)
label_13fa60:
    if (ctx->pc == 0x13FA60u) {
        ctx->pc = 0x13FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA5Cu;
        // 0x13fa60: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA64u;
        goto label_13fa64;
    }
    ctx->pc = 0x13FA5Cu;
    {
        const bool branch_taken_0x13fa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA5Cu;
        // 0x13fa60: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa5c) {
            ctx->pc = 0x13FA84u;
            goto label_13fa84;
        }
    }
    ctx->pc = 0x13FA64u;
label_13fa64:
    // 0x13fa64: 0x0  nop
    ctx->pc = 0x13fa64u;
    // NOP
label_13fa68:
    // 0x13fa68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fa6c:
    // 0x13fa6c: 0xc0618c2  jal         func_186308
label_13fa70:
    if (ctx->pc == 0x13FA70u) {
        ctx->pc = 0x13FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA6Cu;
        // 0x13fa70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA74u;
        goto label_13fa74;
    }
    ctx->pc = 0x13FA6Cu;
    SET_GPR_U32(ctx, 31, 0x13FA74u);
    ctx->pc = 0x13FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA6Cu;
    // 0x13fa70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FA6Cu, 0x13FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA74u;
label_13fa74:
    // 0x13fa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13fa78:
    // 0x13fa78: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_13fa7c:
    // 0x13fa7c: 0xc0618da  jal         func_186368
label_13fa80:
    if (ctx->pc == 0x13FA80u) {
        ctx->pc = 0x13FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA7Cu;
        // 0x13fa80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA84u;
        goto label_13fa84;
    }
    ctx->pc = 0x13FA7Cu;
    SET_GPR_U32(ctx, 31, 0x13FA84u);
    ctx->pc = 0x13FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA7Cu;
    // 0x13fa80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FA7Cu, 0x13FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA84u;
label_13fa84:
    // 0x13fa84: 0xc04ff38  jal         func_13FCE0
label_13fa88:
    if (ctx->pc == 0x13FA88u) {
        ctx->pc = 0x13FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA84u;
        // 0x13fa88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FA8Cu;
        goto label_13fa8c;
    }
    ctx->pc = 0x13FA84u;
    SET_GPR_U32(ctx, 31, 0x13FA8Cu);
    ctx->pc = 0x13FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA84u;
    // 0x13fa88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x13FA84u, 0x13FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA8Cu;
label_13fa8c:
    // 0x13fa8c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x13fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_13fa90:
    // 0x13fa90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13fa94:
    // 0x13fa94: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
label_13fa98:
    // 0x13fa98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13fa9c:
    // 0x13fa9c: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x13fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
label_13faa0:
    // 0x13faa0: 0xe6400148  swc1        $f0, 0x148($s2)
    ctx->pc = 0x13faa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 328), bits); }
label_13faa4:
    // 0x13faa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13faa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13faa8:
    // 0x13faa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13faa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13faac:
    // 0x13faac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13faacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13fab0:
    // 0x13fab0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13fab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13fab4:
    // 0x13fab4: 0x3e00008  jr          $ra
label_13fab8:
    if (ctx->pc == 0x13FAB8u) {
        ctx->pc = 0x13FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAB4u;
        // 0x13fab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13FABCu;
        goto label_fallthrough_0x13fab4;
    }
    ctx->pc = 0x13FAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAB4u;
        // 0x13fab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13fab4:
    ctx->pc = 0x13FABCu;
}
