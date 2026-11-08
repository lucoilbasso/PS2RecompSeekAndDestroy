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

// Function: Cmd_AMBIENT_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x10d4f0 - 0x10d5b4
void Cmd_AMBIENT_COLOR_Entry__FP15BsSCDEntControl_0x10d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_AMBIENT_COLOR_Entry__FP15BsSCDEntControl_0x10d4f0");
#endif

    switch (ctx->pc) {
        case 0x10d524u: goto label_10d524;
        case 0x10d550u: goto label_10d550;
        case 0x10d568u: goto label_10d568;
        case 0x10d57cu: goto label_10d57c;
        default: break;
    }

    ctx->pc = 0x10d4f0u;

    // 0x10d4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d4f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d4f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d4fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d500: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d508: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10d50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d510: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d514: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d518: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x10d518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d51c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D51Cu;
    SET_GPR_U32(ctx, 31, 0x10D524u);
    ctx->pc = 0x10D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D51Cu;
    // 0x10d520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D51Cu, 0x10D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D524u;
label_10d524:
    // 0x10d524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d528: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d52c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10d52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d530: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D530u;
    {
        const bool branch_taken_0x10d530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D530u;
        // 0x10d534: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d530) {
            ctx->pc = 0x10D540u;
            goto label_10d540;
        }
    }
    ctx->pc = 0x10D538u;
    // 0x10d538: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D538u;
    {
        const bool branch_taken_0x10d538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D538u;
        // 0x10d53c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d538) {
            ctx->pc = 0x10D568u;
            goto label_10d568;
        }
    }
    ctx->pc = 0x10D540u;
label_10d540:
    // 0x10d540: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D540u;
    {
        const bool branch_taken_0x10d540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d540) {
            ctx->pc = 0x10D568u;
            goto label_10d568;
        }
    }
    ctx->pc = 0x10D548u;
    // 0x10d548: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D548u;
    SET_GPR_U32(ctx, 31, 0x10D550u);
    ctx->pc = 0x10D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D548u;
    // 0x10d54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D548u, 0x10D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D550u;
label_10d550:
    // 0x10d550: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d558: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d55c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d560: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D560u;
    SET_GPR_U32(ctx, 31, 0x10D568u);
    ctx->pc = 0x10D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D560u;
    // 0x10d564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D560u, 0x10D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D568u;
label_10d568:
    // 0x10d568: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d56c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d574: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D574u;
    SET_GPR_U32(ctx, 31, 0x10D57Cu);
    ctx->pc = 0x10D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D574u;
    // 0x10d578: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D574u, 0x10D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D57Cu;
label_10d57c:
    // 0x10d57c: 0x260301e0  addiu       $v1, $s0, 0x1E0
    ctx->pc = 0x10d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x10d580: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x10d580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10d584: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d588: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10d588u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x10d58c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d590: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10d594: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d598: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d59c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10d5a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d5a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d5a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10d5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d5a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10d5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5ACu;
        // 0x10d5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D5B4u;
}
