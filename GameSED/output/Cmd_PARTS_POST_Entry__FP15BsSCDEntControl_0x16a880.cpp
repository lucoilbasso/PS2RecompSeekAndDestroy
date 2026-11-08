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

// Function: Cmd_PARTS_POST_Entry__FP15BsSCDEntControl
// Address: 0x16a880 - 0x16a994
void Cmd_PARTS_POST_Entry__FP15BsSCDEntControl_0x16a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTS_POST_Entry__FP15BsSCDEntControl_0x16a880");
#endif

    switch (ctx->pc) {
        case 0x16a880u: goto label_16a880;
        case 0x16a884u: goto label_16a884;
        case 0x16a888u: goto label_16a888;
        case 0x16a88cu: goto label_16a88c;
        case 0x16a890u: goto label_16a890;
        case 0x16a894u: goto label_16a894;
        case 0x16a898u: goto label_16a898;
        case 0x16a89cu: goto label_16a89c;
        case 0x16a8a0u: goto label_16a8a0;
        case 0x16a8a4u: goto label_16a8a4;
        case 0x16a8a8u: goto label_16a8a8;
        case 0x16a8acu: goto label_16a8ac;
        case 0x16a8b0u: goto label_16a8b0;
        case 0x16a8b4u: goto label_16a8b4;
        case 0x16a8b8u: goto label_16a8b8;
        case 0x16a8bcu: goto label_16a8bc;
        case 0x16a8c0u: goto label_16a8c0;
        case 0x16a8c4u: goto label_16a8c4;
        case 0x16a8c8u: goto label_16a8c8;
        case 0x16a8ccu: goto label_16a8cc;
        case 0x16a8d0u: goto label_16a8d0;
        case 0x16a8d4u: goto label_16a8d4;
        case 0x16a8d8u: goto label_16a8d8;
        case 0x16a8dcu: goto label_16a8dc;
        case 0x16a8e0u: goto label_16a8e0;
        case 0x16a8e4u: goto label_16a8e4;
        case 0x16a8e8u: goto label_16a8e8;
        case 0x16a8ecu: goto label_16a8ec;
        case 0x16a8f0u: goto label_16a8f0;
        case 0x16a8f4u: goto label_16a8f4;
        case 0x16a8f8u: goto label_16a8f8;
        case 0x16a8fcu: goto label_16a8fc;
        case 0x16a900u: goto label_16a900;
        case 0x16a904u: goto label_16a904;
        case 0x16a908u: goto label_16a908;
        case 0x16a90cu: goto label_16a90c;
        case 0x16a910u: goto label_16a910;
        case 0x16a914u: goto label_16a914;
        case 0x16a918u: goto label_16a918;
        case 0x16a91cu: goto label_16a91c;
        case 0x16a920u: goto label_16a920;
        case 0x16a924u: goto label_16a924;
        case 0x16a928u: goto label_16a928;
        case 0x16a92cu: goto label_16a92c;
        case 0x16a930u: goto label_16a930;
        case 0x16a934u: goto label_16a934;
        case 0x16a938u: goto label_16a938;
        case 0x16a93cu: goto label_16a93c;
        case 0x16a940u: goto label_16a940;
        case 0x16a944u: goto label_16a944;
        case 0x16a948u: goto label_16a948;
        case 0x16a94cu: goto label_16a94c;
        case 0x16a950u: goto label_16a950;
        case 0x16a954u: goto label_16a954;
        case 0x16a958u: goto label_16a958;
        case 0x16a95cu: goto label_16a95c;
        case 0x16a960u: goto label_16a960;
        case 0x16a964u: goto label_16a964;
        case 0x16a968u: goto label_16a968;
        case 0x16a96cu: goto label_16a96c;
        case 0x16a970u: goto label_16a970;
        case 0x16a974u: goto label_16a974;
        case 0x16a978u: goto label_16a978;
        case 0x16a97cu: goto label_16a97c;
        case 0x16a980u: goto label_16a980;
        case 0x16a984u: goto label_16a984;
        case 0x16a988u: goto label_16a988;
        case 0x16a98cu: goto label_16a98c;
        case 0x16a990u: goto label_16a990;
        default: break;
    }

    ctx->pc = 0x16a880u;

label_16a880:
    // 0x16a880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16a884:
    // 0x16a884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a888:
    // 0x16a888: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16a88c:
    // 0x16a88c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16a890:
    // 0x16a890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a894:
    // 0x16a894: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16a898:
    // 0x16a898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a89c:
    // 0x16a89c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16a8a0:
    // 0x16a8a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16a8a4:
    // 0x16a8a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x16a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_16a8a8:
    // 0x16a8a8: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_16a8ac:
    // 0x16a8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a8b0:
    // 0x16a8b0: 0xc04110c  jal         func_104430
label_16a8b4:
    if (ctx->pc == 0x16A8B4u) {
        ctx->pc = 0x16A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8B0u;
        // 0x16a8b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8B8u;
        goto label_16a8b8;
    }
    ctx->pc = 0x16A8B0u;
    SET_GPR_U32(ctx, 31, 0x16A8B8u);
    ctx->pc = 0x16A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8B0u;
    // 0x16a8b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A8B0u, 0x16A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8B8u;
label_16a8b8:
    // 0x16a8b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16a8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a8bc:
    // 0x16a8bc: 0x24022846  addiu       $v0, $zero, 0x2846
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
label_16a8c0:
    // 0x16a8c0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x16a8c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_16a8c4:
    // 0x16a8c4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_16a8c8:
    if (ctx->pc == 0x16A8C8u) {
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8CCu;
        goto label_16a8cc;
    }
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A8ECu;
            goto label_16a8ec;
        }
    }
    ctx->pc = 0x16A8CCu;
label_16a8cc:
    // 0x16a8cc: 0xc04112c  jal         func_1044B0
label_16a8d0:
    if (ctx->pc == 0x16A8D0u) {
        ctx->pc = 0x16A8D4u;
        goto label_16a8d4;
    }
    ctx->pc = 0x16A8CCu;
    SET_GPR_U32(ctx, 31, 0x16A8D4u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x16A8CCu, 0x16A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8D4u;
label_16a8d4:
    // 0x16a8d4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16a8d8:
    // 0x16a8d8: 0x24a573a8  addiu       $a1, $a1, 0x73A8
    ctx->pc = 0x16a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29608));
label_16a8dc:
    // 0x16a8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a8e0:
    // 0x16a8e0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_16a8e4:
    // 0x16a8e4: 0xc0415ec  jal         func_1057B0
label_16a8e8:
    if (ctx->pc == 0x16A8E8u) {
        ctx->pc = 0x16A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8E4u;
        // 0x16a8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8ECu;
        goto label_16a8ec;
    }
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E4u;
    // 0x16a8e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A8E4u, 0x16A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ECu;
label_16a8ec:
    // 0x16a8ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a8f0:
    // 0x16a8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16a8f4:
    // 0x16a8f4: 0xc04110c  jal         func_104430
label_16a8f8:
    if (ctx->pc == 0x16A8F8u) {
        ctx->pc = 0x16A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8F4u;
        // 0x16a8f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8FCu;
        goto label_16a8fc;
    }
    ctx->pc = 0x16A8F4u;
    SET_GPR_U32(ctx, 31, 0x16A8FCu);
    ctx->pc = 0x16A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8F4u;
    // 0x16a8f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A8F4u, 0x16A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8FCu;
label_16a8fc:
    // 0x16a8fc: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x16a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
label_16a900:
    // 0x16a900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a904:
    // 0x16a904: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x16a904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_16a908:
    // 0x16a908: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_16a90c:
    if (ctx->pc == 0x16A90Cu) {
        ctx->pc = 0x16A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A908u;
        // 0x16a90c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A910u;
        goto label_16a910;
    }
    ctx->pc = 0x16A908u;
    {
        const bool branch_taken_0x16a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A908u;
        // 0x16a90c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a908) {
            ctx->pc = 0x16A920u;
            goto label_16a920;
        }
    }
    ctx->pc = 0x16A910u;
label_16a910:
    // 0x16a910: 0xc05a956  jal         func_16A558
label_16a914:
    if (ctx->pc == 0x16A914u) {
        ctx->pc = 0x16A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A910u;
        // 0x16a914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A918u;
        goto label_16a918;
    }
    ctx->pc = 0x16A910u;
    SET_GPR_U32(ctx, 31, 0x16A918u);
    ctx->pc = 0x16A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A910u;
    // 0x16a914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A558u, 0x16A910u, 0x16A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A918u;
label_16a918:
    // 0x16a918: 0x10000010  b           . + 4 + (0x10 << 2)
label_16a91c:
    if (ctx->pc == 0x16A91Cu) {
        ctx->pc = 0x16A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A918u;
        // 0x16a91c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A920u;
        goto label_16a920;
    }
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A918u;
        // 0x16a91c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16A95Cu;
            goto label_16a95c;
        }
    }
    ctx->pc = 0x16A920u;
label_16a920:
    // 0x16a920: 0x8e22120c  lw          $v0, 0x120C($s1)
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4620)));
label_16a924:
    // 0x16a924: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_16a928:
    if (ctx->pc == 0x16A928u) {
        ctx->pc = 0x16A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A924u;
        // 0x16a928: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A92Cu;
        goto label_16a92c;
    }
    ctx->pc = 0x16A924u;
    {
        const bool branch_taken_0x16a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a924) {
            ctx->pc = 0x16A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A924u;
            // 0x16a928: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A95Cu;
            goto label_16a95c;
        }
    }
    ctx->pc = 0x16A92Cu;
label_16a92c:
    // 0x16a92c: 0x8e221210  lw          $v0, 0x1210($s1)
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4624)));
label_16a930:
    // 0x16a930: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16a930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16a934:
    // 0x16a934: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x16a934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_16a938:
    // 0x16a938: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_16a93c:
    // 0x16a93c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x16a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16a940:
    // 0x16a940: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a944:
    // 0x16a944: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_16a948:
    // 0x16a948: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16a948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16a94c:
    // 0x16a94c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16a950:
    // 0x16a950: 0x40f809  jalr        $v0
label_16a954:
    if (ctx->pc == 0x16A954u) {
        ctx->pc = 0x16A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A950u;
        // 0x16a954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A958u;
        goto label_16a958;
    }
    ctx->pc = 0x16A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A958u);
        ctx->pc = 0x16A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A950u;
        // 0x16a954: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A950u, 0x16A958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A958u;
label_16a958:
    // 0x16a958: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16a95c:
    // 0x16a95c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a960:
    // 0x16a960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a964:
    // 0x16a964: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16a968:
    // 0x16a968: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a96c:
    // 0x16a96c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a970:
    // 0x16a970: 0x60f809  jalr        $v1
label_16a974:
    if (ctx->pc == 0x16A974u) {
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A978u;
        goto label_16a978;
    }
    ctx->pc = 0x16A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A978u);
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A970u, 0x16A978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A978u;
label_16a978:
    // 0x16a978: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16a978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a97c:
    // 0x16a97c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16a97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a980:
    // 0x16a980: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16a980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a984:
    // 0x16a984: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a988:
    // 0x16a988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a98c:
    // 0x16a98c: 0x3e00008  jr          $ra
label_16a990:
    if (ctx->pc == 0x16A990u) {
        ctx->pc = 0x16A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A98Cu;
        // 0x16a990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A994u;
        goto label_fallthrough_0x16a98c;
    }
    ctx->pc = 0x16A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A98Cu;
        // 0x16a990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a98c:
    ctx->pc = 0x16A994u;
}
