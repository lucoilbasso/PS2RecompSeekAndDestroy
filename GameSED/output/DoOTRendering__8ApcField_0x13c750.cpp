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

// Function: DoOTRendering__8ApcField
// Address: 0x13c750 - 0x13c938
void DoOTRendering__8ApcField_0x13c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoOTRendering__8ApcField_0x13c750");
#endif

    switch (ctx->pc) {
        case 0x13c750u: goto label_13c750;
        case 0x13c754u: goto label_13c754;
        case 0x13c758u: goto label_13c758;
        case 0x13c75cu: goto label_13c75c;
        case 0x13c760u: goto label_13c760;
        case 0x13c764u: goto label_13c764;
        case 0x13c768u: goto label_13c768;
        case 0x13c76cu: goto label_13c76c;
        case 0x13c770u: goto label_13c770;
        case 0x13c774u: goto label_13c774;
        case 0x13c778u: goto label_13c778;
        case 0x13c77cu: goto label_13c77c;
        case 0x13c780u: goto label_13c780;
        case 0x13c784u: goto label_13c784;
        case 0x13c788u: goto label_13c788;
        case 0x13c78cu: goto label_13c78c;
        case 0x13c790u: goto label_13c790;
        case 0x13c794u: goto label_13c794;
        case 0x13c798u: goto label_13c798;
        case 0x13c79cu: goto label_13c79c;
        case 0x13c7a0u: goto label_13c7a0;
        case 0x13c7a4u: goto label_13c7a4;
        case 0x13c7a8u: goto label_13c7a8;
        case 0x13c7acu: goto label_13c7ac;
        case 0x13c7b0u: goto label_13c7b0;
        case 0x13c7b4u: goto label_13c7b4;
        case 0x13c7b8u: goto label_13c7b8;
        case 0x13c7bcu: goto label_13c7bc;
        case 0x13c7c0u: goto label_13c7c0;
        case 0x13c7c4u: goto label_13c7c4;
        case 0x13c7c8u: goto label_13c7c8;
        case 0x13c7ccu: goto label_13c7cc;
        case 0x13c7d0u: goto label_13c7d0;
        case 0x13c7d4u: goto label_13c7d4;
        case 0x13c7d8u: goto label_13c7d8;
        case 0x13c7dcu: goto label_13c7dc;
        case 0x13c7e0u: goto label_13c7e0;
        case 0x13c7e4u: goto label_13c7e4;
        case 0x13c7e8u: goto label_13c7e8;
        case 0x13c7ecu: goto label_13c7ec;
        case 0x13c7f0u: goto label_13c7f0;
        case 0x13c7f4u: goto label_13c7f4;
        case 0x13c7f8u: goto label_13c7f8;
        case 0x13c7fcu: goto label_13c7fc;
        case 0x13c800u: goto label_13c800;
        case 0x13c804u: goto label_13c804;
        case 0x13c808u: goto label_13c808;
        case 0x13c80cu: goto label_13c80c;
        case 0x13c810u: goto label_13c810;
        case 0x13c814u: goto label_13c814;
        case 0x13c818u: goto label_13c818;
        case 0x13c81cu: goto label_13c81c;
        case 0x13c820u: goto label_13c820;
        case 0x13c824u: goto label_13c824;
        case 0x13c828u: goto label_13c828;
        case 0x13c82cu: goto label_13c82c;
        case 0x13c830u: goto label_13c830;
        case 0x13c834u: goto label_13c834;
        case 0x13c838u: goto label_13c838;
        case 0x13c83cu: goto label_13c83c;
        case 0x13c840u: goto label_13c840;
        case 0x13c844u: goto label_13c844;
        case 0x13c848u: goto label_13c848;
        case 0x13c84cu: goto label_13c84c;
        case 0x13c850u: goto label_13c850;
        case 0x13c854u: goto label_13c854;
        case 0x13c858u: goto label_13c858;
        case 0x13c85cu: goto label_13c85c;
        case 0x13c860u: goto label_13c860;
        case 0x13c864u: goto label_13c864;
        case 0x13c868u: goto label_13c868;
        case 0x13c86cu: goto label_13c86c;
        case 0x13c870u: goto label_13c870;
        case 0x13c874u: goto label_13c874;
        case 0x13c878u: goto label_13c878;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c880u: goto label_13c880;
        case 0x13c884u: goto label_13c884;
        case 0x13c888u: goto label_13c888;
        case 0x13c88cu: goto label_13c88c;
        case 0x13c890u: goto label_13c890;
        case 0x13c894u: goto label_13c894;
        case 0x13c898u: goto label_13c898;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8a0u: goto label_13c8a0;
        case 0x13c8a4u: goto label_13c8a4;
        case 0x13c8a8u: goto label_13c8a8;
        case 0x13c8acu: goto label_13c8ac;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8b4u: goto label_13c8b4;
        case 0x13c8b8u: goto label_13c8b8;
        case 0x13c8bcu: goto label_13c8bc;
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8c4u: goto label_13c8c4;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8d0u: goto label_13c8d0;
        case 0x13c8d4u: goto label_13c8d4;
        case 0x13c8d8u: goto label_13c8d8;
        case 0x13c8dcu: goto label_13c8dc;
        case 0x13c8e0u: goto label_13c8e0;
        case 0x13c8e4u: goto label_13c8e4;
        case 0x13c8e8u: goto label_13c8e8;
        case 0x13c8ecu: goto label_13c8ec;
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f4u: goto label_13c8f4;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c8fcu: goto label_13c8fc;
        case 0x13c900u: goto label_13c900;
        case 0x13c904u: goto label_13c904;
        case 0x13c908u: goto label_13c908;
        case 0x13c90cu: goto label_13c90c;
        case 0x13c910u: goto label_13c910;
        case 0x13c914u: goto label_13c914;
        case 0x13c918u: goto label_13c918;
        case 0x13c91cu: goto label_13c91c;
        case 0x13c920u: goto label_13c920;
        case 0x13c924u: goto label_13c924;
        case 0x13c928u: goto label_13c928;
        case 0x13c92cu: goto label_13c92c;
        case 0x13c930u: goto label_13c930;
        case 0x13c934u: goto label_13c934;
        default: break;
    }

    ctx->pc = 0x13c750u;

label_13c750:
    // 0x13c750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13c754:
    // 0x13c754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c758:
    // 0x13c758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c75c:
    // 0x13c75c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c760:
    // 0x13c760: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13c760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c764:
    // 0x13c764: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13c768:
    // 0x13c768: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x13c768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c76c:
    // 0x13c76c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13c770:
    // 0x13c770: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x13c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_13c774:
    // 0x13c774: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13c778:
    // 0x13c778: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_13c77c:
    // 0x13c77c: 0xc06a202  jal         func_1A8808
label_13c780:
    if (ctx->pc == 0x13C780u) {
        ctx->pc = 0x13C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C77Cu;
        // 0x13c780: 0x8e1301e4  lw          $s3, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C784u;
        goto label_13c784;
    }
    ctx->pc = 0x13C77Cu;
    SET_GPR_U32(ctx, 31, 0x13C784u);
    ctx->pc = 0x13C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C77Cu;
    // 0x13c780: 0x8e1301e4  lw          $s3, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C77Cu, 0x13C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C784u;
label_13c784:
    // 0x13c784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13c788:
    if (ctx->pc == 0x13C788u) {
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C78Cu;
        goto label_13c78c;
    }
    ctx->pc = 0x13C784u;
    {
        const bool branch_taken_0x13c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c784) {
            ctx->pc = 0x13C79Cu;
            goto label_13c79c;
        }
    }
    ctx->pc = 0x13C78Cu;
label_13c78c:
    // 0x13c78c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13c790:
    // 0x13c790: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_13c794:
    // 0x13c794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_13c798:
    if (ctx->pc == 0x13C798u) {
        ctx->pc = 0x13C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C794u;
        // 0x13c798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C79Cu;
        goto label_13c79c;
    }
    ctx->pc = 0x13C794u;
    {
        const bool branch_taken_0x13c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C794u;
        // 0x13c798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c794) {
            ctx->pc = 0x13C7A8u;
            goto label_13c7a8;
        }
    }
    ctx->pc = 0x13C79Cu;
label_13c79c:
    // 0x13c79c: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_13c7a0:
    // 0x13c7a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_13c7a4:
    // 0x13c7a4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x13c7a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_13c7a8:
    // 0x13c7a8: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_13c7ac:
    // 0x13c7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c7b0:
    // 0x13c7b0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x13c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_13c7b4:
    // 0x13c7b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13c7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_13c7b8:
    // 0x13c7b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13c7b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13c7bc:
    // 0x13c7bc: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_13c7c0:
    if (ctx->pc == 0x13C7C0u) {
        ctx->pc = 0x13C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7BCu;
        // 0x13c7c0: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7C4u;
        goto label_13c7c4;
    }
    ctx->pc = 0x13C7BCu;
    {
        const bool branch_taken_0x13c7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7BCu;
        // 0x13c7c0: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7bc) {
            ctx->pc = 0x13C918u;
            goto label_13c918;
        }
    }
    ctx->pc = 0x13C7C4u;
label_13c7c4:
    // 0x13c7c4: 0xc06a202  jal         func_1A8808
label_13c7c8:
    if (ctx->pc == 0x13C7C8u) {
        ctx->pc = 0x13C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7C4u;
        // 0x13c7c8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7CCu;
        goto label_13c7cc;
    }
    ctx->pc = 0x13C7C4u;
    SET_GPR_U32(ctx, 31, 0x13C7CCu);
    ctx->pc = 0x13C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7C4u;
    // 0x13c7c8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C7C4u, 0x13C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7CCu;
label_13c7cc:
    // 0x13c7cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_13c7d0:
    if (ctx->pc == 0x13C7D0u) {
        ctx->pc = 0x13C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7CCu;
        // 0x13c7d0: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7D4u;
        goto label_13c7d4;
    }
    ctx->pc = 0x13C7CCu;
    {
        const bool branch_taken_0x13c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7CCu;
        // 0x13c7d0: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7cc) {
            ctx->pc = 0x13C7E4u;
            goto label_13c7e4;
        }
    }
    ctx->pc = 0x13C7D4u;
label_13c7d4:
    // 0x13c7d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13c7d8:
    // 0x13c7d8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_13c7dc:
    // 0x13c7dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_13c7e0:
    if (ctx->pc == 0x13C7E0u) {
        ctx->pc = 0x13C7E4u;
        goto label_13c7e4;
    }
    ctx->pc = 0x13C7DCu;
    {
        const bool branch_taken_0x13c7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c7dc) {
            ctx->pc = 0x13C83Cu;
            goto label_13c83c;
        }
    }
    ctx->pc = 0x13C7E4u;
label_13c7e4:
    // 0x13c7e4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13c7e8:
    // 0x13c7e8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x13c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_13c7ec:
    // 0x13c7ec: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_13c7f0:
    // 0x13c7f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c7f4:
    if (ctx->pc == 0x13C7F4u) {
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7F8u;
        goto label_13c7f8;
    }
    ctx->pc = 0x13C7F0u;
    {
        const bool branch_taken_0x13c7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f0) {
            ctx->pc = 0x13C810u;
            goto label_13c810;
        }
    }
    ctx->pc = 0x13C7F8u;
label_13c7f8:
    // 0x13c7f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c7fc:
    // 0x13c7fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c800:
    // 0x13c800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c804:
    // 0x13c804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c808:
    // 0x13c808: 0x60f809  jalr        $v1
label_13c80c:
    if (ctx->pc == 0x13C80Cu) {
        ctx->pc = 0x13C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C808u;
        // 0x13c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C810u;
        goto label_13c810;
    }
    ctx->pc = 0x13C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C810u);
        ctx->pc = 0x13C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C808u;
        // 0x13c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C808u, 0x13C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C810u;
label_13c810:
    // 0x13c810: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13c814:
    // 0x13c814: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x13c814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_13c818:
    // 0x13c818: 0x8cc6020c  lw          $a2, 0x20C($a2)
    ctx->pc = 0x13c818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
label_13c81c:
    // 0x13c81c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c820:
    if (ctx->pc == 0x13C820u) {
        ctx->pc = 0x13C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C81Cu;
        // 0x13c820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C824u;
        goto label_13c824;
    }
    ctx->pc = 0x13C81Cu;
    {
        const bool branch_taken_0x13c81c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C81Cu;
        // 0x13c820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c81c) {
            ctx->pc = 0x13C83Cu;
            goto label_13c83c;
        }
    }
    ctx->pc = 0x13C824u;
label_13c824:
    // 0x13c824: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c828:
    // 0x13c828: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c82c:
    // 0x13c82c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c830:
    // 0x13c830: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c834:
    // 0x13c834: 0x60f809  jalr        $v1
label_13c838:
    if (ctx->pc == 0x13C838u) {
        ctx->pc = 0x13C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C834u;
        // 0x13c838: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C83Cu;
        goto label_13c83c;
    }
    ctx->pc = 0x13C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C83Cu);
        ctx->pc = 0x13C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C834u;
        // 0x13c838: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C834u, 0x13C83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C83Cu;
label_13c83c:
    // 0x13c83c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_13c840:
    if (ctx->pc == 0x13C840u) {
        ctx->pc = 0x13C844u;
        goto label_13c844;
    }
    ctx->pc = 0x13C83Cu;
    {
        const bool branch_taken_0x13c83c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c83c) {
            ctx->pc = 0x13C864u;
            goto label_13c864;
        }
    }
    ctx->pc = 0x13C844u;
label_13c844:
    // 0x13c844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c848:
    // 0x13c848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13c84c:
    // 0x13c84c: 0xc04fb04  jal         func_13EC10
label_13c850:
    if (ctx->pc == 0x13C850u) {
        ctx->pc = 0x13C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C84Cu;
        // 0x13c850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C854u;
        goto label_13c854;
    }
    ctx->pc = 0x13C84Cu;
    SET_GPR_U32(ctx, 31, 0x13C854u);
    ctx->pc = 0x13C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C84Cu;
    // 0x13c850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC10u, 0x13C84Cu, 0x13C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C854u;
label_13c854:
    // 0x13c854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13c858:
    // 0x13c858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c85c:
    // 0x13c85c: 0xc04fb04  jal         func_13EC10
label_13c860:
    if (ctx->pc == 0x13C860u) {
        ctx->pc = 0x13C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C85Cu;
        // 0x13c860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C864u;
        goto label_13c864;
    }
    ctx->pc = 0x13C85Cu;
    SET_GPR_U32(ctx, 31, 0x13C864u);
    ctx->pc = 0x13C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C85Cu;
    // 0x13c860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC10u, 0x13C85Cu, 0x13C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C864u;
label_13c864:
    // 0x13c864: 0xc04f56e  jal         func_13D5B8
label_13c868:
    if (ctx->pc == 0x13C868u) {
        ctx->pc = 0x13C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C864u;
        // 0x13c868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C86Cu;
        goto label_13c86c;
    }
    ctx->pc = 0x13C864u;
    SET_GPR_U32(ctx, 31, 0x13C86Cu);
    ctx->pc = 0x13C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C864u;
    // 0x13c868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5B8u, 0x13C864u, 0x13C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C86Cu;
label_13c86c:
    // 0x13c86c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_13c870:
    // 0x13c870: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_13c874:
    // 0x13c874: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_13c878:
    if (ctx->pc == 0x13C878u) {
        ctx->pc = 0x13C87Cu;
        goto label_13c87c;
    }
    ctx->pc = 0x13C874u;
    {
        const bool branch_taken_0x13c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c874) {
            ctx->pc = 0x13C8ACu;
            goto label_13c8ac;
        }
    }
    ctx->pc = 0x13C87Cu;
label_13c87c:
    // 0x13c87c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_13c880:
    // 0x13c880: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_13c884:
    // 0x13c884: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_13c888:
    if (ctx->pc == 0x13C888u) {
        ctx->pc = 0x13C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C884u;
        // 0x13c888: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C88Cu;
        goto label_13c88c;
    }
    ctx->pc = 0x13C884u;
    {
        const bool branch_taken_0x13c884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c884) {
            ctx->pc = 0x13C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C884u;
            // 0x13c888: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C89Cu;
            goto label_13c89c;
        }
    }
    ctx->pc = 0x13C88Cu;
label_13c88c:
    // 0x13c88c: 0xc04fb5e  jal         func_13ED78
label_13c890:
    if (ctx->pc == 0x13C890u) {
        ctx->pc = 0x13C894u;
        goto label_13c894;
    }
    ctx->pc = 0x13C88Cu;
    SET_GPR_U32(ctx, 31, 0x13C894u);
    ctx->pc = 0x13ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ED78u, 0x13C88Cu, 0x13C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C894u;
label_13c894:
    // 0x13c894: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x13c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_13c898:
    // 0x13c898: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13c89c:
    // 0x13c89c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_13c8a0:
    if (ctx->pc == 0x13C8A0u) {
        ctx->pc = 0x13C8A4u;
        goto label_13c8a4;
    }
    ctx->pc = 0x13C89Cu;
    {
        const bool branch_taken_0x13c89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c89c) {
            ctx->pc = 0x13C8ACu;
            goto label_13c8ac;
        }
    }
    ctx->pc = 0x13C8A4u;
label_13c8a4:
    // 0x13c8a4: 0xc04fb74  jal         func_13EDD0
label_13c8a8:
    if (ctx->pc == 0x13C8A8u) {
        ctx->pc = 0x13C8ACu;
        goto label_13c8ac;
    }
    ctx->pc = 0x13C8A4u;
    SET_GPR_U32(ctx, 31, 0x13C8ACu);
    ctx->pc = 0x13EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDD0u, 0x13C8A4u, 0x13C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8ACu;
label_13c8ac:
    // 0x13c8ac: 0xc062086  jal         func_188218
label_13c8b0:
    if (ctx->pc == 0x13C8B0u) {
        ctx->pc = 0x13C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8ACu;
        // 0x13c8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8B4u;
        goto label_13c8b4;
    }
    ctx->pc = 0x13C8ACu;
    SET_GPR_U32(ctx, 31, 0x13C8B4u);
    ctx->pc = 0x13C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8ACu;
    // 0x13c8b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188218u, 0x13C8ACu, 0x13C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8B4u;
label_13c8b4:
    // 0x13c8b4: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
label_13c8b8:
    if (ctx->pc == 0x13C8B8u) {
        ctx->pc = 0x13C8BCu;
        goto label_13c8bc;
    }
    ctx->pc = 0x13C8B4u;
    {
        const bool branch_taken_0x13c8b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8b4) {
            ctx->pc = 0x13C8E0u;
            goto label_13c8e0;
        }
    }
    ctx->pc = 0x13C8BCu;
label_13c8bc:
    // 0x13c8bc: 0x8e6602f8  lw          $a2, 0x2F8($s3)
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
label_13c8c0:
    // 0x13c8c0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c8c4:
    if (ctx->pc == 0x13C8C4u) {
        ctx->pc = 0x13C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8C0u;
        // 0x13c8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8C8u;
        goto label_13c8c8;
    }
    ctx->pc = 0x13C8C0u;
    {
        const bool branch_taken_0x13c8c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8C0u;
        // 0x13c8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8c0) {
            ctx->pc = 0x13C8E0u;
            goto label_13c8e0;
        }
    }
    ctx->pc = 0x13C8C8u;
label_13c8c8:
    // 0x13c8c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c8cc:
    // 0x13c8cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c8d0:
    // 0x13c8d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c8d4:
    // 0x13c8d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c8d8:
    // 0x13c8d8: 0x60f809  jalr        $v1
label_13c8dc:
    if (ctx->pc == 0x13C8DCu) {
        ctx->pc = 0x13C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D8u;
        // 0x13c8dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8E0u;
        goto label_13c8e0;
    }
    ctx->pc = 0x13C8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C8E0u);
        ctx->pc = 0x13C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8D8u;
        // 0x13c8dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8D8u, 0x13C8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8E0u;
label_13c8e0:
    // 0x13c8e0: 0xc04f56e  jal         func_13D5B8
label_13c8e4:
    if (ctx->pc == 0x13C8E4u) {
        ctx->pc = 0x13C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8E0u;
        // 0x13c8e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8E8u;
        goto label_13c8e8;
    }
    ctx->pc = 0x13C8E0u;
    SET_GPR_U32(ctx, 31, 0x13C8E8u);
    ctx->pc = 0x13C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8E0u;
    // 0x13c8e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5B8u, 0x13C8E0u, 0x13C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8E8u;
label_13c8e8:
    // 0x13c8e8: 0xc04f41e  jal         func_13D078
label_13c8ec:
    if (ctx->pc == 0x13C8ECu) {
        ctx->pc = 0x13C8F0u;
        goto label_13c8f0;
    }
    ctx->pc = 0x13C8E8u;
    SET_GPR_U32(ctx, 31, 0x13C8F0u);
    ctx->pc = 0x13D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D078u, 0x13C8E8u, 0x13C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8F0u;
label_13c8f0:
    // 0x13c8f0: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_13c8f4:
    if (ctx->pc == 0x13C8F4u) {
        ctx->pc = 0x13C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F0u;
        // 0x13c8f4: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C8F8u;
        goto label_13c8f8;
    }
    ctx->pc = 0x13C8F0u;
    {
        const bool branch_taken_0x13c8f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8f0) {
            ctx->pc = 0x13C8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C8F0u;
            // 0x13c8f4: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C90Cu;
            goto label_13c90c;
        }
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0xc0521cc  jal         func_148730
label_13c8fc:
    if (ctx->pc == 0x13C8FCu) {
        ctx->pc = 0x13C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C8F8u;
        // 0x13c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C900u;
        goto label_13c900;
    }
    ctx->pc = 0x13C8F8u;
    SET_GPR_U32(ctx, 31, 0x13C900u);
    ctx->pc = 0x13C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8F8u;
    // 0x13c8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148730u, 0x13C8F8u, 0x13C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C900u;
label_13c900:
    // 0x13c900: 0xc05203e  jal         func_1480F8
label_13c904:
    if (ctx->pc == 0x13C904u) {
        ctx->pc = 0x13C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C900u;
        // 0x13c904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C908u;
        goto label_13c908;
    }
    ctx->pc = 0x13C900u;
    SET_GPR_U32(ctx, 31, 0x13C908u);
    ctx->pc = 0x13C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C900u;
    // 0x13c904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1480F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1480F8u, 0x13C900u, 0x13C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C908u;
label_13c908:
    // 0x13c908: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_13c90c:
    // 0x13c90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c910:
    // 0x13c910: 0xc06b1f6  jal         func_1AC7D8
label_13c914:
    if (ctx->pc == 0x13C914u) {
        ctx->pc = 0x13C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C910u;
        // 0x13c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C918u;
        goto label_13c918;
    }
    ctx->pc = 0x13C910u;
    SET_GPR_U32(ctx, 31, 0x13C918u);
    ctx->pc = 0x13C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C910u;
    // 0x13c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13C910u, 0x13C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C918u;
label_13c918:
    // 0x13c918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c91c:
    // 0x13c91c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c920:
    // 0x13c920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c924:
    // 0x13c924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13c924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13c928:
    // 0x13c928: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13c928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13c92c:
    // 0x13c92c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13c930:
    // 0x13c930: 0x3e00008  jr          $ra
label_13c934:
    if (ctx->pc == 0x13C934u) {
        ctx->pc = 0x13C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C930u;
        // 0x13c934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C938u;
        goto label_fallthrough_0x13c930;
    }
    ctx->pc = 0x13C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C930u;
        // 0x13c934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c930:
    ctx->pc = 0x13C938u;
}
