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

// Function: Cmd_LIGHT_VECTOR_Entry__FP15BsSCDEntControl
// Address: 0x10d418 - 0x10d4f0
void Cmd_LIGHT_VECTOR_Entry__FP15BsSCDEntControl_0x10d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIGHT_VECTOR_Entry__FP15BsSCDEntControl_0x10d418");
#endif

    switch (ctx->pc) {
        case 0x10d44cu: goto label_10d44c;
        case 0x10d478u: goto label_10d478;
        case 0x10d490u: goto label_10d490;
        case 0x10d498u: goto label_10d498;
        case 0x10d4b0u: goto label_10d4b0;
        default: break;
    }

    ctx->pc = 0x10d418u;

    // 0x10d418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d42c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d430: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10d434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d438: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d43c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d440: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x10d440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d444: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D444u;
    SET_GPR_U32(ctx, 31, 0x10D44Cu);
    ctx->pc = 0x10D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D444u;
    // 0x10d448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D444u, 0x10D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D44Cu;
label_10d44c:
    // 0x10d44c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d450: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d454: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10d454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d458: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D458u;
    {
        const bool branch_taken_0x10d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D458u;
        // 0x10d45c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d458) {
            ctx->pc = 0x10D468u;
            goto label_10d468;
        }
    }
    ctx->pc = 0x10D460u;
    // 0x10d460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D460u;
    {
        const bool branch_taken_0x10d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D460u;
        // 0x10d464: 0x8e3101c0  lw          $s1, 0x1C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d460) {
            ctx->pc = 0x10D490u;
            goto label_10d490;
        }
    }
    ctx->pc = 0x10D468u;
label_10d468:
    // 0x10d468: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D468u;
    {
        const bool branch_taken_0x10d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d468) {
            ctx->pc = 0x10D490u;
            goto label_10d490;
        }
    }
    ctx->pc = 0x10D470u;
    // 0x10d470: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D470u;
    SET_GPR_U32(ctx, 31, 0x10D478u);
    ctx->pc = 0x10D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D470u;
    // 0x10d474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D470u, 0x10D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D478u;
label_10d478:
    // 0x10d478: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d480: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d484: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d488: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D488u;
    SET_GPR_U32(ctx, 31, 0x10D490u);
    ctx->pc = 0x10D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D488u;
    // 0x10d48c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D488u, 0x10D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D490u;
label_10d490:
    // 0x10d490: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D490u;
    SET_GPR_U32(ctx, 31, 0x10D498u);
    ctx->pc = 0x10D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D490u;
    // 0x10d494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D490u, 0x10D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D498u;
label_10d498:
    // 0x10d498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d49c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d4a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D4A8u;
    SET_GPR_U32(ctx, 31, 0x10D4B0u);
    ctx->pc = 0x10D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4A8u;
    // 0x10d4ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D4A8u, 0x10D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4B0u;
label_10d4b0:
    // 0x10d4b0: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x10d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10d4b4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x10d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x10d4b8: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10d4bc: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x10d4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x10d4c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d4c4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x10d4c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10d4cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d4d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d4d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d4d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10d4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10d4dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10d4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d4e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4E8u;
        // 0x10d4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D4F0u;
}
