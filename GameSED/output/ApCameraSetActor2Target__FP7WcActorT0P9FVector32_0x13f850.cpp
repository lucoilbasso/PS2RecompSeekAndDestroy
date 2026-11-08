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

// Function: ApCameraSetActor2Target__FP7WcActorT0P9FVector32
// Address: 0x13f850 - 0x13f98c
void ApCameraSetActor2Target__FP7WcActorT0P9FVector32_0x13f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetActor2Target__FP7WcActorT0P9FVector32_0x13f850");
#endif

    switch (ctx->pc) {
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        case 0x13f880u: goto label_13f880;
        case 0x13f884u: goto label_13f884;
        case 0x13f888u: goto label_13f888;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f890u: goto label_13f890;
        case 0x13f894u: goto label_13f894;
        case 0x13f898u: goto label_13f898;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8a4u: goto label_13f8a4;
        case 0x13f8a8u: goto label_13f8a8;
        case 0x13f8acu: goto label_13f8ac;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8b4u: goto label_13f8b4;
        case 0x13f8b8u: goto label_13f8b8;
        case 0x13f8bcu: goto label_13f8bc;
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8ccu: goto label_13f8cc;
        case 0x13f8d0u: goto label_13f8d0;
        case 0x13f8d4u: goto label_13f8d4;
        case 0x13f8d8u: goto label_13f8d8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8e0u: goto label_13f8e0;
        case 0x13f8e4u: goto label_13f8e4;
        case 0x13f8e8u: goto label_13f8e8;
        case 0x13f8ecu: goto label_13f8ec;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f8f4u: goto label_13f8f4;
        case 0x13f8f8u: goto label_13f8f8;
        case 0x13f8fcu: goto label_13f8fc;
        case 0x13f900u: goto label_13f900;
        case 0x13f904u: goto label_13f904;
        case 0x13f908u: goto label_13f908;
        case 0x13f90cu: goto label_13f90c;
        case 0x13f910u: goto label_13f910;
        case 0x13f914u: goto label_13f914;
        case 0x13f918u: goto label_13f918;
        case 0x13f91cu: goto label_13f91c;
        case 0x13f920u: goto label_13f920;
        case 0x13f924u: goto label_13f924;
        case 0x13f928u: goto label_13f928;
        case 0x13f92cu: goto label_13f92c;
        case 0x13f930u: goto label_13f930;
        case 0x13f934u: goto label_13f934;
        case 0x13f938u: goto label_13f938;
        case 0x13f93cu: goto label_13f93c;
        case 0x13f940u: goto label_13f940;
        case 0x13f944u: goto label_13f944;
        case 0x13f948u: goto label_13f948;
        case 0x13f94cu: goto label_13f94c;
        case 0x13f950u: goto label_13f950;
        case 0x13f954u: goto label_13f954;
        case 0x13f958u: goto label_13f958;
        case 0x13f95cu: goto label_13f95c;
        case 0x13f960u: goto label_13f960;
        case 0x13f964u: goto label_13f964;
        case 0x13f968u: goto label_13f968;
        case 0x13f96cu: goto label_13f96c;
        case 0x13f970u: goto label_13f970;
        case 0x13f974u: goto label_13f974;
        case 0x13f978u: goto label_13f978;
        case 0x13f97cu: goto label_13f97c;
        case 0x13f980u: goto label_13f980;
        case 0x13f984u: goto label_13f984;
        case 0x13f988u: goto label_13f988;
        default: break;
    }

    ctx->pc = 0x13f850u;

label_13f850:
    // 0x13f850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f854:
    // 0x13f854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f858:
    // 0x13f858: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13f858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f85c:
    // 0x13f85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f860:
    // 0x13f860: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f864:
    // 0x13f864: 0x12302b  sltu        $a2, $zero, $s2
    ctx->pc = 0x13f864u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_13f868:
    // 0x13f868: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f86c:
    // 0x13f86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f870:
    // 0x13f870: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f874:
    // 0x13f874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f878:
    // 0x13f878: 0xc04fce4  jal         func_13F390
label_13f87c:
    if (ctx->pc == 0x13F87Cu) {
        ctx->pc = 0x13F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F878u;
        // 0x13f87c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F880u;
        goto label_13f880;
    }
    ctx->pc = 0x13F878u;
    SET_GPR_U32(ctx, 31, 0x13F880u);
    ctx->pc = 0x13F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F878u;
    // 0x13f87c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13F878u, 0x13F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F880u;
label_13f880:
    // 0x13f880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13f880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f884:
    // 0x13f884: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x13f884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f888:
    // 0x13f888: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x13f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_13f88c:
    // 0x13f88c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_13f890:
    // 0x13f890: 0xc050628  jal         func_1418A0
label_13f894:
    if (ctx->pc == 0x13F894u) {
        ctx->pc = 0x13F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F890u;
        // 0x13f894: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F898u;
        goto label_13f898;
    }
    ctx->pc = 0x13F890u;
    SET_GPR_U32(ctx, 31, 0x13F898u);
    ctx->pc = 0x13F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F890u;
    // 0x13f894: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418A0u, 0x13F890u, 0x13F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F898u;
label_13f898:
    // 0x13f898: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_13f89c:
    if (ctx->pc == 0x13F89Cu) {
        ctx->pc = 0x13F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F898u;
        // 0x13f89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8A0u;
        goto label_13f8a0;
    }
    ctx->pc = 0x13F898u;
    {
        const bool branch_taken_0x13f898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F898u;
        // 0x13f89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f898) {
            ctx->pc = 0x13F954u;
            goto label_13f954;
        }
    }
    ctx->pc = 0x13F8A0u;
label_13f8a0:
    // 0x13f8a0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f8a4:
    // 0x13f8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f8a8:
    // 0x13f8a8: 0xc0618c2  jal         func_186308
label_13f8ac:
    if (ctx->pc == 0x13F8ACu) {
        ctx->pc = 0x13F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A8u;
        // 0x13f8ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8B0u;
        goto label_13f8b0;
    }
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x13F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8A8u;
    // 0x13f8ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F8A8u, 0x13F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13f8b4:
    // 0x13f8b4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_13f8b8:
    // 0x13f8b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f8bc:
    // 0x13f8bc: 0xc061a46  jal         func_186918
label_13f8c0:
    if (ctx->pc == 0x13F8C0u) {
        ctx->pc = 0x13F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8BCu;
        // 0x13f8c0: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8C4u;
        goto label_13f8c4;
    }
    ctx->pc = 0x13F8BCu;
    SET_GPR_U32(ctx, 31, 0x13F8C4u);
    ctx->pc = 0x13F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8BCu;
    // 0x13f8c0: 0x34a50200  ori         $a1, $a1, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13F8BCu, 0x13F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8C4u;
label_13f8c4:
    // 0x13f8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f8c8:
    // 0x13f8c8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_13f8cc:
    if (ctx->pc == 0x13F8CCu) {
        ctx->pc = 0x13F8D0u;
        goto label_13f8d0;
    }
    ctx->pc = 0x13F8C8u;
    {
        const bool branch_taken_0x13f8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8c8) {
            ctx->pc = 0x13F954u;
            goto label_13f954;
        }
    }
    ctx->pc = 0x13F8D0u;
label_13f8d0:
    // 0x13f8d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_13f8d4:
    // 0x13f8d4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_13f8d8:
    if (ctx->pc == 0x13F8D8u) {
        ctx->pc = 0x13F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D4u;
        // 0x13f8d8: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8DCu;
        goto label_13f8dc;
    }
    ctx->pc = 0x13F8D4u;
    {
        const bool branch_taken_0x13f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8D4u;
        // 0x13f8d8: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8d4) {
            ctx->pc = 0x13F954u;
            goto label_13f954;
        }
    }
    ctx->pc = 0x13F8DCu;
label_13f8dc:
    // 0x13f8dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13f8e0:
    // 0x13f8e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13f8e4:
    if (ctx->pc == 0x13F8E4u) {
        ctx->pc = 0x13F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E0u;
        // 0x13f8e4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8E8u;
        goto label_13f8e8;
    }
    ctx->pc = 0x13F8E0u;
    {
        const bool branch_taken_0x13f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f8e0) {
            ctx->pc = 0x13F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F8E0u;
            // 0x13f8e4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F8F4u;
            goto label_13f8f4;
        }
    }
    ctx->pc = 0x13F8E8u;
label_13f8e8:
    // 0x13f8e8: 0x40f809  jalr        $v0
label_13f8ec:
    if (ctx->pc == 0x13F8ECu) {
        ctx->pc = 0x13F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E8u;
        // 0x13f8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F8F0u;
        goto label_13f8f0;
    }
    ctx->pc = 0x13F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F8F0u);
        ctx->pc = 0x13F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E8u;
        // 0x13f8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8E8u, 0x13F8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F8F0u;
label_13f8f0:
    // 0x13f8f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13f8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13f8f4:
    // 0x13f8f4: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_13f8f8:
    // 0x13f8f8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_13f8fc:
    if (ctx->pc == 0x13F8FCu) {
        ctx->pc = 0x13F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8F8u;
        // 0x13f8fc: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F900u;
        goto label_13f900;
    }
    ctx->pc = 0x13F8F8u;
    {
        const bool branch_taken_0x13f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8F8u;
        // 0x13f8fc: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8f8) {
            ctx->pc = 0x13F938u;
            goto label_13f938;
        }
    }
    ctx->pc = 0x13F900u;
label_13f900:
    // 0x13f900: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_13f904:
    if (ctx->pc == 0x13F904u) {
        ctx->pc = 0x13F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F900u;
        // 0x13f904: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F908u;
        goto label_13f908;
    }
    ctx->pc = 0x13F900u;
    {
        const bool branch_taken_0x13f900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F900u;
        // 0x13f904: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f900) {
            ctx->pc = 0x13F914u;
            goto label_13f914;
        }
    }
    ctx->pc = 0x13F908u;
label_13f908:
    // 0x13f908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f90c:
    // 0x13f90c: 0xc0618c2  jal         func_186308
label_13f910:
    if (ctx->pc == 0x13F910u) {
        ctx->pc = 0x13F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F90Cu;
        // 0x13f910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F914u;
        goto label_13f914;
    }
    ctx->pc = 0x13F90Cu;
    SET_GPR_U32(ctx, 31, 0x13F914u);
    ctx->pc = 0x13F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F90Cu;
    // 0x13f910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F90Cu, 0x13F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F914u;
label_13f914:
    // 0x13f914: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_13f918:
    if (ctx->pc == 0x13F918u) {
        ctx->pc = 0x13F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F914u;
        // 0x13f918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F91Cu;
        goto label_13f91c;
    }
    ctx->pc = 0x13F914u;
    {
        const bool branch_taken_0x13f914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F914u;
        // 0x13f918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f914) {
            ctx->pc = 0x13F928u;
            goto label_13f928;
        }
    }
    ctx->pc = 0x13F91Cu;
label_13f91c:
    // 0x13f91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f920:
    // 0x13f920: 0xc0618da  jal         func_186368
label_13f924:
    if (ctx->pc == 0x13F924u) {
        ctx->pc = 0x13F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F920u;
        // 0x13f924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F928u;
        goto label_13f928;
    }
    ctx->pc = 0x13F920u;
    SET_GPR_U32(ctx, 31, 0x13F928u);
    ctx->pc = 0x13F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F920u;
    // 0x13f924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13F920u, 0x13F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F928u;
label_13f928:
    // 0x13f928: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_13f92c:
    // 0x13f92c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_13f930:
    // 0x13f930: 0x10000008  b           . + 4 + (0x8 << 2)
label_13f934:
    if (ctx->pc == 0x13F934u) {
        ctx->pc = 0x13F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F930u;
        // 0x13f934: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F938u;
        goto label_13f938;
    }
    ctx->pc = 0x13F930u;
    {
        const bool branch_taken_0x13f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F930u;
        // 0x13f934: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f930) {
            ctx->pc = 0x13F954u;
            goto label_13f954;
        }
    }
    ctx->pc = 0x13F938u;
label_13f938:
    // 0x13f938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f93c:
    // 0x13f93c: 0xc0618c2  jal         func_186308
label_13f940:
    if (ctx->pc == 0x13F940u) {
        ctx->pc = 0x13F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F93Cu;
        // 0x13f940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F944u;
        goto label_13f944;
    }
    ctx->pc = 0x13F93Cu;
    SET_GPR_U32(ctx, 31, 0x13F944u);
    ctx->pc = 0x13F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F93Cu;
    // 0x13f940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F93Cu, 0x13F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F944u;
label_13f944:
    // 0x13f944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f948:
    // 0x13f948: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x13f948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_13f94c:
    // 0x13f94c: 0xc0618da  jal         func_186368
label_13f950:
    if (ctx->pc == 0x13F950u) {
        ctx->pc = 0x13F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F94Cu;
        // 0x13f950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F954u;
        goto label_13f954;
    }
    ctx->pc = 0x13F94Cu;
    SET_GPR_U32(ctx, 31, 0x13F954u);
    ctx->pc = 0x13F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F94Cu;
    // 0x13f950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13F94Cu, 0x13F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F954u;
label_13f954:
    // 0x13f954: 0xc04ff38  jal         func_13FCE0
label_13f958:
    if (ctx->pc == 0x13F958u) {
        ctx->pc = 0x13F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F954u;
        // 0x13f958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F95Cu;
        goto label_13f95c;
    }
    ctx->pc = 0x13F954u;
    SET_GPR_U32(ctx, 31, 0x13F95Cu);
    ctx->pc = 0x13F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F954u;
    // 0x13f958: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x13F954u, 0x13F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F95Cu;
label_13f95c:
    // 0x13f95c: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x13f95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_13f960:
    // 0x13f960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13f964:
    // 0x13f964: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
label_13f968:
    // 0x13f968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f96c:
    // 0x13f96c: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x13f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
label_13f970:
    // 0x13f970: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x13f970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
label_13f974:
    // 0x13f974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f978:
    // 0x13f978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f97c:
    // 0x13f97c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f97cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f980:
    // 0x13f980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13f984:
    // 0x13f984: 0x3e00008  jr          $ra
label_13f988:
    if (ctx->pc == 0x13F988u) {
        ctx->pc = 0x13F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F984u;
        // 0x13f988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F98Cu;
        goto label_fallthrough_0x13f984;
    }
    ctx->pc = 0x13F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F984u;
        // 0x13f988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f984:
    ctx->pc = 0x13F98Cu;
}
