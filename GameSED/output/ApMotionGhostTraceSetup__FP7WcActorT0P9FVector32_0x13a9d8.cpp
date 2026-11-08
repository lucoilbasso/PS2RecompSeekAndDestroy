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

// Function: ApMotionGhostTraceSetup__FP7WcActorT0P9FVector32
// Address: 0x13a9d8 - 0x13aad8
void ApMotionGhostTraceSetup__FP7WcActorT0P9FVector32_0x13a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionGhostTraceSetup__FP7WcActorT0P9FVector32_0x13a9d8");
#endif

    switch (ctx->pc) {
        case 0x13aa20u: goto label_13aa20;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa60u: goto label_13aa60;
        case 0x13aab8u: goto label_13aab8;
        default: break;
    }

    ctx->pc = 0x13a9d8u;

    // 0x13a9d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a9dc: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x13a9e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a9e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13a9ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13a9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13a9f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a9f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a9fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13aa00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13aa04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13aa08: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13aa0c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AA0Cu;
    {
        const bool branch_taken_0x13aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA0Cu;
        // 0x13aa10: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa0c) {
            ctx->pc = 0x13AA20u;
            goto label_13aa20;
        }
    }
    ctx->pc = 0x13AA14u;
    // 0x13aa14: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x13aa18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13AA18u;
    SET_GPR_U32(ctx, 31, 0x13AA20u);
    ctx->pc = 0x13AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA18u;
    // 0x13aa1c: 0x24a56828  addiu       $a1, $a1, 0x6828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13AA18u, 0x13AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA20u;
label_13aa20:
    // 0x13aa20: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x13aa24: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x13aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa28: 0x2610a8f8  addiu       $s0, $s0, -0x5708
    ctx->pc = 0x13aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945016));
    // 0x13aa2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa30: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x13AA30u;
    SET_GPR_U32(ctx, 31, 0x13AA38u);
    ctx->pc = 0x13AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA30u;
    // 0x13aa34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x13AA30u, 0x13AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA38u;
label_13aa38:
    // 0x13aa38: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13aa3c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x13aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa40: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13aa44: 0xc06164c  jal         func_185930
    ctx->pc = 0x13AA44u;
    SET_GPR_U32(ctx, 31, 0x13AA4Cu);
    ctx->pc = 0x13AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA44u;
    // 0x13aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13AA44u, 0x13AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA4Cu;
label_13aa4c:
    // 0x13aa4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13aa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa58: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13AA58u;
    SET_GPR_U32(ctx, 31, 0x13AA60u);
    ctx->pc = 0x13AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA58u;
    // 0x13aa5c: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13AA58u, 0x13AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA60u;
label_13aa60:
    // 0x13aa60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13aa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa6c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13aa70: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x13aa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13aa78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13aa7c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AA7Cu;
    {
        const bool branch_taken_0x13aa7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA7Cu;
        // 0x13aa80: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa7c) {
            ctx->pc = 0x13AA8Cu;
            goto label_13aa8c;
        }
    }
    ctx->pc = 0x13AA84u;
    // 0x13aa84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13aa88: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13aa8c:
    // 0x13aa8c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x13aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13aa90: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x13aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x13aa94: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13aa98: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13aa9c: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x13aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x13aaa0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13aaa4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x13aaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13aaa8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13aaac: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x13aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13aab0: 0xc066810  jal         func_19A040
    ctx->pc = 0x13AAB0u;
    SET_GPR_U32(ctx, 31, 0x13AAB8u);
    ctx->pc = 0x13AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AAB0u;
    // 0x13aab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x13AAB0u, 0x13AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAB8u;
label_13aab8:
    // 0x13aab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13aab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13aabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13aac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13aac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13aac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13aac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13aac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aacc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13aaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x13AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAD0u;
        // 0x13aad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AAD8u;
}
