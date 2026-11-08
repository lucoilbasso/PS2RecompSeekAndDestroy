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

// Function: printfloat
// Address: 0x1b0830 - 0x1b0998
void printfloat_0x1b0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printfloat_0x1b0830");
#endif

    switch (ctx->pc) {
        case 0x1b0830u: goto label_1b0830;
        case 0x1b0834u: goto label_1b0834;
        case 0x1b0838u: goto label_1b0838;
        case 0x1b083cu: goto label_1b083c;
        case 0x1b0840u: goto label_1b0840;
        case 0x1b0844u: goto label_1b0844;
        case 0x1b0848u: goto label_1b0848;
        case 0x1b084cu: goto label_1b084c;
        case 0x1b0850u: goto label_1b0850;
        case 0x1b0854u: goto label_1b0854;
        case 0x1b0858u: goto label_1b0858;
        case 0x1b085cu: goto label_1b085c;
        case 0x1b0860u: goto label_1b0860;
        case 0x1b0864u: goto label_1b0864;
        case 0x1b0868u: goto label_1b0868;
        case 0x1b086cu: goto label_1b086c;
        case 0x1b0870u: goto label_1b0870;
        case 0x1b0874u: goto label_1b0874;
        case 0x1b0878u: goto label_1b0878;
        case 0x1b087cu: goto label_1b087c;
        case 0x1b0880u: goto label_1b0880;
        case 0x1b0884u: goto label_1b0884;
        case 0x1b0888u: goto label_1b0888;
        case 0x1b088cu: goto label_1b088c;
        case 0x1b0890u: goto label_1b0890;
        case 0x1b0894u: goto label_1b0894;
        case 0x1b0898u: goto label_1b0898;
        case 0x1b089cu: goto label_1b089c;
        case 0x1b08a0u: goto label_1b08a0;
        case 0x1b08a4u: goto label_1b08a4;
        case 0x1b08a8u: goto label_1b08a8;
        case 0x1b08acu: goto label_1b08ac;
        case 0x1b08b0u: goto label_1b08b0;
        case 0x1b08b4u: goto label_1b08b4;
        case 0x1b08b8u: goto label_1b08b8;
        case 0x1b08bcu: goto label_1b08bc;
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        default: break;
    }

    ctx->pc = 0x1b0830u;

label_1b0830:
    // 0x1b0830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b0834:
    // 0x1b0834: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b0834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b0838:
    // 0x1b0838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b083c:
    // 0x1b083c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b083cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0840:
    // 0x1b0840: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b0840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b0844:
    // 0x1b0844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0848:
    // 0x1b0848: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b084c:
    // 0x1b084c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b084cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0850:
    // 0x1b0850: 0xc072902  jal         func_1CA408
label_1b0854:
    if (ctx->pc == 0x1B0854u) {
        ctx->pc = 0x1B0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0850u;
        // 0x1b0854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0858u;
        goto label_1b0858;
    }
    ctx->pc = 0x1B0850u;
    SET_GPR_U32(ctx, 31, 0x1B0858u);
    ctx->pc = 0x1B0854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0850u;
    // 0x1b0854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B0850u, 0x1B0858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0858u;
label_1b0858:
    // 0x1b0858: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1b085c:
    if (ctx->pc == 0x1B085Cu) {
        ctx->pc = 0x1B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0858u;
        // 0x1b085c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0860u;
        goto label_1b0860;
    }
    ctx->pc = 0x1B0858u;
    {
        const bool branch_taken_0x1b0858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0858u;
        // 0x1b085c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0858) {
            ctx->pc = 0x1B087Cu;
            goto label_1b087c;
        }
    }
    ctx->pc = 0x1B0860u;
label_1b0860:
    // 0x1b0860: 0xc0727f6  jal         func_1C9FD8
label_1b0864:
    if (ctx->pc == 0x1B0864u) {
        ctx->pc = 0x1B0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0860u;
        // 0x1b0864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0868u;
        goto label_1b0868;
    }
    ctx->pc = 0x1B0860u;
    SET_GPR_U32(ctx, 31, 0x1B0868u);
    ctx->pc = 0x1B0864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0860u;
    // 0x1b0864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1B0860u, 0x1B0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0868u;
label_1b0868:
    // 0x1b0868: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b0868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1b086c:
    // 0x1b086c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b086cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0870:
    // 0x1b0870: 0x8c62a974  lw          $v0, -0x568C($v1)
    ctx->pc = 0x1b0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945140)));
label_1b0874:
    // 0x1b0874: 0x40f809  jalr        $v0
label_1b0878:
    if (ctx->pc == 0x1B0878u) {
        ctx->pc = 0x1B0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0874u;
        // 0x1b0878: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B087Cu;
        goto label_1b087c;
    }
    ctx->pc = 0x1B0874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B087Cu);
        ctx->pc = 0x1B0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0874u;
        // 0x1b0878: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0874u, 0x1B087Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B087Cu;
label_1b087c:
    // 0x1b087c: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
label_1b0880:
    // 0x1b0880: 0xdc25aad8  ld          $a1, -0x5528($at)
    ctx->pc = 0x1b0880u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945496)));
label_1b0884:
    // 0x1b0884: 0xc072902  jal         func_1CA408
label_1b0888:
    if (ctx->pc == 0x1B0888u) {
        ctx->pc = 0x1B0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0884u;
        // 0x1b0888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B088Cu;
        goto label_1b088c;
    }
    ctx->pc = 0x1B0884u;
    SET_GPR_U32(ctx, 31, 0x1B088Cu);
    ctx->pc = 0x1B0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0884u;
    // 0x1b0888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B0884u, 0x1B088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B088Cu;
label_1b088c:
    // 0x1b088c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1b0890:
    if (ctx->pc == 0x1B0890u) {
        ctx->pc = 0x1B0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B088Cu;
        // 0x1b0890: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0894u;
        goto label_1b0894;
    }
    ctx->pc = 0x1B088Cu;
    {
        const bool branch_taken_0x1b088c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B088Cu;
        // 0x1b0890: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b088c) {
            ctx->pc = 0x1B08D4u;
            goto label_1b08d4;
        }
    }
    ctx->pc = 0x1B0894u;
label_1b0894:
    // 0x1b0894: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b0898:
    if (ctx->pc == 0x1B0898u) {
        ctx->pc = 0x1B089Cu;
        goto label_1b089c;
    }
    ctx->pc = 0x1B0894u;
    {
        const bool branch_taken_0x1b0894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0894) {
            ctx->pc = 0x1B08B4u;
            goto label_1b08b4;
        }
    }
    ctx->pc = 0x1B089Cu;
label_1b089c:
    // 0x1b089c: 0x0  nop
    ctx->pc = 0x1b089cu;
    // NOP
label_1b08a0:
    // 0x1b08a0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1b08a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1b08a4:
    // 0x1b08a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b08a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1b08a8:
    // 0x1b08a8: 0xc072810  jal         func_1CA040
label_1b08ac:
    if (ctx->pc == 0x1B08ACu) {
        ctx->pc = 0x1B08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08A8u;
        // 0x1b08ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08B0u;
        goto label_1b08b0;
    }
    ctx->pc = 0x1B08A8u;
    SET_GPR_U32(ctx, 31, 0x1B08B0u);
    ctx->pc = 0x1B08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08A8u;
    // 0x1b08ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1B08A8u, 0x1B08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08B0u;
label_1b08b0:
    // 0x1b08b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b08b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b08b4:
    // 0x1b08b4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
label_1b08b8:
    // 0x1b08b8: 0xdc25aae0  ld          $a1, -0x5520($at)
    ctx->pc = 0x1b08b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945504)));
label_1b08bc:
    // 0x1b08bc: 0xc072902  jal         func_1CA408
label_1b08c0:
    if (ctx->pc == 0x1B08C0u) {
        ctx->pc = 0x1B08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08BCu;
        // 0x1b08c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08C4u;
        goto label_1b08c4;
    }
    ctx->pc = 0x1B08BCu;
    SET_GPR_U32(ctx, 31, 0x1B08C4u);
    ctx->pc = 0x1B08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08BCu;
    // 0x1b08c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B08BCu, 0x1B08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08C4u;
label_1b08c4:
    // 0x1b08c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_1b08c8:
    if (ctx->pc == 0x1B08C8u) {
        ctx->pc = 0x1B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08C4u;
        // 0x1b08c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08CCu;
        goto label_1b08cc;
    }
    ctx->pc = 0x1B08C4u;
    {
        const bool branch_taken_0x1b08c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08C4u;
        // 0x1b08c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08c4) {
            ctx->pc = 0x1B08A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b08a0;
        }
    }
    ctx->pc = 0x1B08CCu;
label_1b08cc:
    // 0x1b08cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b08d0:
    if (ctx->pc == 0x1B08D0u) {
        ctx->pc = 0x1B08D4u;
        goto label_1b08d4;
    }
    ctx->pc = 0x1B08CCu;
    {
        const bool branch_taken_0x1b08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08cc) {
            ctx->pc = 0x1B0924u;
            goto label_1b0924;
        }
    }
    ctx->pc = 0x1B08D4u;
label_1b08d4:
    // 0x1b08d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1b08d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1b08d8:
    // 0x1b08d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1b08dc:
    // 0x1b08dc: 0xc072902  jal         func_1CA408
label_1b08e0:
    if (ctx->pc == 0x1B08E0u) {
        ctx->pc = 0x1B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08DCu;
        // 0x1b08e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08E4u;
        goto label_1b08e4;
    }
    ctx->pc = 0x1B08DCu;
    SET_GPR_U32(ctx, 31, 0x1B08E4u);
    ctx->pc = 0x1B08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08DCu;
    // 0x1b08e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B08DCu, 0x1B08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08E4u;
label_1b08e4:
    // 0x1b08e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1b08e8:
    if (ctx->pc == 0x1B08E8u) {
        ctx->pc = 0x1B08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08E4u;
        // 0x1b08e8: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B08ECu;
        goto label_1b08ec;
    }
    ctx->pc = 0x1B08E4u;
    {
        const bool branch_taken_0x1b08e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08E4u;
        // 0x1b08e8: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08e4) {
            ctx->pc = 0x1B0924u;
            goto label_1b0924;
        }
    }
    ctx->pc = 0x1B08ECu;
label_1b08ec:
    // 0x1b08ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b08f0:
    if (ctx->pc == 0x1B08F0u) {
        ctx->pc = 0x1B08F4u;
        goto label_1b08f4;
    }
    ctx->pc = 0x1B08ECu;
    {
        const bool branch_taken_0x1b08ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08ec) {
            ctx->pc = 0x1B090Cu;
            goto label_1b090c;
        }
    }
    ctx->pc = 0x1B08F4u;
label_1b08f4:
    // 0x1b08f4: 0x0  nop
    ctx->pc = 0x1b08f4u;
    // NOP
label_1b08f8:
    // 0x1b08f8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1b08f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1b08fc:
    // 0x1b08fc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b08fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1b0900:
    // 0x1b0900: 0xc0728b2  jal         func_1CA2C8
label_1b0904:
    if (ctx->pc == 0x1B0904u) {
        ctx->pc = 0x1B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0900u;
        // 0x1b0904: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0908u;
        goto label_1b0908;
    }
    ctx->pc = 0x1B0900u;
    SET_GPR_U32(ctx, 31, 0x1B0908u);
    ctx->pc = 0x1B0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0900u;
    // 0x1b0904: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1B0900u, 0x1B0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0908u;
label_1b0908:
    // 0x1b0908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b090c:
    // 0x1b090c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1b090cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1b0910:
    // 0x1b0910: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b0910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1b0914:
    // 0x1b0914: 0xc072902  jal         func_1CA408
label_1b0918:
    if (ctx->pc == 0x1B0918u) {
        ctx->pc = 0x1B0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0914u;
        // 0x1b0918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B091Cu;
        goto label_1b091c;
    }
    ctx->pc = 0x1B0914u;
    SET_GPR_U32(ctx, 31, 0x1B091Cu);
    ctx->pc = 0x1B0918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0914u;
    // 0x1b0918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B0914u, 0x1B091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B091Cu;
label_1b091c:
    // 0x1b091c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_1b0920:
    if (ctx->pc == 0x1B0920u) {
        ctx->pc = 0x1B0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B091Cu;
        // 0x1b0920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0924u;
        goto label_1b0924;
    }
    ctx->pc = 0x1B091Cu;
    {
        const bool branch_taken_0x1b091c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B091Cu;
        // 0x1b0920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b091c) {
            ctx->pc = 0x1B08F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b08f8;
        }
    }
    ctx->pc = 0x1B0924u;
label_1b0924:
    // 0x1b0924: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
label_1b0928:
    // 0x1b0928: 0xdc25aae8  ld          $a1, -0x5518($at)
    ctx->pc = 0x1b0928u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945512)));
label_1b092c:
    // 0x1b092c: 0xc072810  jal         func_1CA040
label_1b0930:
    if (ctx->pc == 0x1B0930u) {
        ctx->pc = 0x1B0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B092Cu;
        // 0x1b0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0934u;
        goto label_1b0934;
    }
    ctx->pc = 0x1B092Cu;
    SET_GPR_U32(ctx, 31, 0x1B0934u);
    ctx->pc = 0x1B0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B092Cu;
    // 0x1b0930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1B092Cu, 0x1B0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0934u;
label_1b0934:
    // 0x1b0934: 0xc072690  jal         func_1C9A40
label_1b0938:
    if (ctx->pc == 0x1B0938u) {
        ctx->pc = 0x1B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0934u;
        // 0x1b0938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B093Cu;
        goto label_1b093c;
    }
    ctx->pc = 0x1B0934u;
    SET_GPR_U32(ctx, 31, 0x1B093Cu);
    ctx->pc = 0x1B0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0934u;
    // 0x1b0938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9A40u, 0x1B0934u, 0x1B093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B093Cu;
label_1b093c:
    // 0x1b093c: 0xc06c1e8  jal         func_1B07A0
label_1b0940:
    if (ctx->pc == 0x1B0940u) {
        ctx->pc = 0x1B0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B093Cu;
        // 0x1b0940: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0944u;
        goto label_1b0944;
    }
    ctx->pc = 0x1B093Cu;
    SET_GPR_U32(ctx, 31, 0x1B0944u);
    ctx->pc = 0x1B0940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B093Cu;
    // 0x1b0940: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B07A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B07A0u, 0x1B093Cu, 0x1B0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0944u;
label_1b0944:
    // 0x1b0944: 0x2644aac0  addiu       $a0, $s2, -0x5540
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945472));
label_1b0948:
    // 0x1b0948: 0xc06c3e2  jal         func_1B0F88
label_1b094c:
    if (ctx->pc == 0x1B094Cu) {
        ctx->pc = 0x1B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0948u;
        // 0x1b094c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0950u;
        goto label_1b0950;
    }
    ctx->pc = 0x1B0948u;
    SET_GPR_U32(ctx, 31, 0x1B0950u);
    ctx->pc = 0x1B094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0948u;
    // 0x1b094c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B0948u, 0x1B0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0950u;
label_1b0950:
    // 0x1b0950: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1b0954:
    if (ctx->pc == 0x1B0954u) {
        ctx->pc = 0x1B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0950u;
        // 0x1b0954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0958u;
        goto label_1b0958;
    }
    ctx->pc = 0x1B0950u;
    {
        const bool branch_taken_0x1b0950 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0950u;
        // 0x1b0954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0950) {
            ctx->pc = 0x1B0978u;
            goto label_1b0978;
        }
    }
    ctx->pc = 0x1B0958u;
label_1b0958:
    // 0x1b0958: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_1b095c:
    // 0x1b095c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0960:
    // 0x1b0960: 0x2484aac8  addiu       $a0, $a0, -0x5538
    ctx->pc = 0x1b0960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
label_1b0964:
    // 0x1b0964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0968:
    // 0x1b0968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b096c:
    // 0x1b096c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b096cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0970:
    // 0x1b0970: 0x806c3e2  j           func_1B0F88
label_1b0974:
    if (ctx->pc == 0x1B0974u) {
        ctx->pc = 0x1B0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0970u;
        // 0x1b0974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0978u;
        goto label_1b0978;
    }
    ctx->pc = 0x1B0970u;
    ctx->pc = 0x1B0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0970u;
    // 0x1b0974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    kprintf_0x1b0f88(rdram, ctx, runtime); return;
    ctx->pc = 0x1B0978u;
label_1b0978:
    // 0x1b0978: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
label_1b097c:
    // 0x1b097c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0980:
    // 0x1b0980: 0x2484aad0  addiu       $a0, $a0, -0x5530
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945488));
label_1b0984:
    // 0x1b0984: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0988:
    // 0x1b0988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b098c:
    // 0x1b098c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b098cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0990:
    // 0x1b0990: 0x806c3e2  j           func_1B0F88
label_1b0994:
    if (ctx->pc == 0x1B0994u) {
        ctx->pc = 0x1B0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0990u;
        // 0x1b0994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0998u;
        goto label_fallthrough_0x1b0990;
    }
    ctx->pc = 0x1B0990u;
    ctx->pc = 0x1B0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0990u;
    // 0x1b0994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    kprintf_0x1b0f88(rdram, ctx, runtime); return;
label_fallthrough_0x1b0990:
    ctx->pc = 0x1B0998u;
}
