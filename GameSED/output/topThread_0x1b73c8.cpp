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

// Function: topThread
// Address: 0x1b73c8 - 0x1b74a0
void topThread_0x1b73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topThread_0x1b73c8");
#endif

    switch (ctx->pc) {
        case 0x1b7408u: goto label_1b7408;
        case 0x1b7410u: goto label_1b7410;
        case 0x1b7468u: goto label_1b7468;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b7488u: goto label_1b7488;
        case 0x1b7498u: goto label_1b7498;
        default: break;
    }

    ctx->pc = 0x1b73c8u;

    // 0x1b73c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b73cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b73ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b73d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1b73d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1b73d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b73d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1b73dc: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b73dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b73e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b73e4: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1b73e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1b73e8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b73e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b73ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b73ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b73f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b73f4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b73f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b73fc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b7400: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b7400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b7404: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_1b7408:
    // 0x1b7408: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B7408u;
    SET_GPR_U32(ctx, 31, 0x1B7410u);
    ctx->pc = 0x1B740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7408u;
    // 0x1b740c: 0x8ec4bab0  lw          $a0, -0x4550($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B7408u, 0x1B7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7410u;
label_1b7410:
    // 0x1b7410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b7414: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1b7414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1b7418: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b741c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b7420: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1b7420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1b7424: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1b7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b7428: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1b742c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b742cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7430: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7430u;
    {
        const bool branch_taken_0x1b7430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1B7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7430u;
        // 0x1b7434: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7430) {
            ctx->pc = 0x1B7470u;
            goto label_1b7470;
        }
    }
    ctx->pc = 0x1B7438u;
    // 0x1b7438: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7438u;
    {
        const bool branch_taken_0x1b7438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7438u;
        // 0x1b743c: 0x26a4acd8  addiu       $a0, $s5, -0x5328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7438) {
            ctx->pc = 0x1B7450u;
            goto label_1b7450;
        }
    }
    ctx->pc = 0x1B7440u;
    // 0x1b7440: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7440u;
    {
        const bool branch_taken_0x1b7440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7440u;
        // 0x1b7444: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7440) {
            ctx->pc = 0x1B7460u;
            goto label_1b7460;
        }
    }
    ctx->pc = 0x1B7448u;
    // 0x1b7448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7448u;
    {
        const bool branch_taken_0x1b7448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7448) {
            ctx->pc = 0x1B7490u;
            goto label_1b7490;
        }
    }
    ctx->pc = 0x1B7450u;
label_1b7450:
    // 0x1b7450: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7450u;
    {
        const bool branch_taken_0x1b7450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7450u;
        // 0x1b7454: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7450) {
            ctx->pc = 0x1B7480u;
            goto label_1b7480;
        }
    }
    ctx->pc = 0x1B7458u;
    // 0x1b7458: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B7458u;
    {
        const bool branch_taken_0x1b7458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7458) {
            ctx->pc = 0x1B7490u;
            goto label_1b7490;
        }
    }
    ctx->pc = 0x1B7460u;
label_1b7460:
    // 0x1b7460: 0xc06bce4  jal         func_1AF390
    ctx->pc = 0x1B7460u;
    SET_GPR_U32(ctx, 31, 0x1B7468u);
    ctx->pc = 0x1B7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7460u;
    // 0x1b7464: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF390u, 0x1B7460u, 0x1B7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7468u;
label_1b7468:
    // 0x1b7468: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B7468u;
    {
        const bool branch_taken_0x1b7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7468) {
            ctx->pc = 0x1B7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B7470u;
label_1b7470:
    // 0x1b7470: 0xc06bcc4  jal         func_1AF310
    ctx->pc = 0x1B7470u;
    SET_GPR_U32(ctx, 31, 0x1B7478u);
    ctx->pc = 0x1B7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7470u;
    // 0x1b7474: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF310u, 0x1B7470u, 0x1B7478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7478u;
label_1b7478:
    // 0x1b7478: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B7480u;
label_1b7480:
    // 0x1b7480: 0xc06bcf4  jal         func_1AF3D0
    ctx->pc = 0x1B7480u;
    SET_GPR_U32(ctx, 31, 0x1B7488u);
    ctx->pc = 0x1B7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7480u;
    // 0x1b7484: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3D0u, 0x1B7480u, 0x1B7488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7488u;
label_1b7488:
    // 0x1b7488: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B7488u;
    {
        const bool branch_taken_0x1b7488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7488) {
            ctx->pc = 0x1B7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B7490u;
label_1b7490:
    // 0x1b7490: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B7490u;
    SET_GPR_U32(ctx, 31, 0x1B7498u);
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B7490u, 0x1B7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7498u;
label_1b7498:
    // 0x1b7498: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B7498u;
    {
        const bool branch_taken_0x1b7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7498) {
            ctx->pc = 0x1B7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7408;
        }
    }
    ctx->pc = 0x1B74A0u;
}
