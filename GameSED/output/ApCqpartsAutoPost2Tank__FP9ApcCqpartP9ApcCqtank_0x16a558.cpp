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

// Function: ApCqpartsAutoPost2Tank__FP9ApcCqpartP9ApcCqtank
// Address: 0x16a558 - 0x16a87c
void ApCqpartsAutoPost2Tank__FP9ApcCqpartP9ApcCqtank_0x16a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpartsAutoPost2Tank__FP9ApcCqpartP9ApcCqtank_0x16a558");
#endif

    switch (ctx->pc) {
        case 0x16a558u: goto label_16a558;
        case 0x16a55cu: goto label_16a55c;
        case 0x16a560u: goto label_16a560;
        case 0x16a564u: goto label_16a564;
        case 0x16a568u: goto label_16a568;
        case 0x16a56cu: goto label_16a56c;
        case 0x16a570u: goto label_16a570;
        case 0x16a574u: goto label_16a574;
        case 0x16a578u: goto label_16a578;
        case 0x16a57cu: goto label_16a57c;
        case 0x16a580u: goto label_16a580;
        case 0x16a584u: goto label_16a584;
        case 0x16a588u: goto label_16a588;
        case 0x16a58cu: goto label_16a58c;
        case 0x16a590u: goto label_16a590;
        case 0x16a594u: goto label_16a594;
        case 0x16a598u: goto label_16a598;
        case 0x16a59cu: goto label_16a59c;
        case 0x16a5a0u: goto label_16a5a0;
        case 0x16a5a4u: goto label_16a5a4;
        case 0x16a5a8u: goto label_16a5a8;
        case 0x16a5acu: goto label_16a5ac;
        case 0x16a5b0u: goto label_16a5b0;
        case 0x16a5b4u: goto label_16a5b4;
        case 0x16a5b8u: goto label_16a5b8;
        case 0x16a5bcu: goto label_16a5bc;
        case 0x16a5c0u: goto label_16a5c0;
        case 0x16a5c4u: goto label_16a5c4;
        case 0x16a5c8u: goto label_16a5c8;
        case 0x16a5ccu: goto label_16a5cc;
        case 0x16a5d0u: goto label_16a5d0;
        case 0x16a5d4u: goto label_16a5d4;
        case 0x16a5d8u: goto label_16a5d8;
        case 0x16a5dcu: goto label_16a5dc;
        case 0x16a5e0u: goto label_16a5e0;
        case 0x16a5e4u: goto label_16a5e4;
        case 0x16a5e8u: goto label_16a5e8;
        case 0x16a5ecu: goto label_16a5ec;
        case 0x16a5f0u: goto label_16a5f0;
        case 0x16a5f4u: goto label_16a5f4;
        case 0x16a5f8u: goto label_16a5f8;
        case 0x16a5fcu: goto label_16a5fc;
        case 0x16a600u: goto label_16a600;
        case 0x16a604u: goto label_16a604;
        case 0x16a608u: goto label_16a608;
        case 0x16a60cu: goto label_16a60c;
        case 0x16a610u: goto label_16a610;
        case 0x16a614u: goto label_16a614;
        case 0x16a618u: goto label_16a618;
        case 0x16a61cu: goto label_16a61c;
        case 0x16a620u: goto label_16a620;
        case 0x16a624u: goto label_16a624;
        case 0x16a628u: goto label_16a628;
        case 0x16a62cu: goto label_16a62c;
        case 0x16a630u: goto label_16a630;
        case 0x16a634u: goto label_16a634;
        case 0x16a638u: goto label_16a638;
        case 0x16a63cu: goto label_16a63c;
        case 0x16a640u: goto label_16a640;
        case 0x16a644u: goto label_16a644;
        case 0x16a648u: goto label_16a648;
        case 0x16a64cu: goto label_16a64c;
        case 0x16a650u: goto label_16a650;
        case 0x16a654u: goto label_16a654;
        case 0x16a658u: goto label_16a658;
        case 0x16a65cu: goto label_16a65c;
        case 0x16a660u: goto label_16a660;
        case 0x16a664u: goto label_16a664;
        case 0x16a668u: goto label_16a668;
        case 0x16a66cu: goto label_16a66c;
        case 0x16a670u: goto label_16a670;
        case 0x16a674u: goto label_16a674;
        case 0x16a678u: goto label_16a678;
        case 0x16a67cu: goto label_16a67c;
        case 0x16a680u: goto label_16a680;
        case 0x16a684u: goto label_16a684;
        case 0x16a688u: goto label_16a688;
        case 0x16a68cu: goto label_16a68c;
        case 0x16a690u: goto label_16a690;
        case 0x16a694u: goto label_16a694;
        case 0x16a698u: goto label_16a698;
        case 0x16a69cu: goto label_16a69c;
        case 0x16a6a0u: goto label_16a6a0;
        case 0x16a6a4u: goto label_16a6a4;
        case 0x16a6a8u: goto label_16a6a8;
        case 0x16a6acu: goto label_16a6ac;
        case 0x16a6b0u: goto label_16a6b0;
        case 0x16a6b4u: goto label_16a6b4;
        case 0x16a6b8u: goto label_16a6b8;
        case 0x16a6bcu: goto label_16a6bc;
        case 0x16a6c0u: goto label_16a6c0;
        case 0x16a6c4u: goto label_16a6c4;
        case 0x16a6c8u: goto label_16a6c8;
        case 0x16a6ccu: goto label_16a6cc;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a6d4u: goto label_16a6d4;
        case 0x16a6d8u: goto label_16a6d8;
        case 0x16a6dcu: goto label_16a6dc;
        case 0x16a6e0u: goto label_16a6e0;
        case 0x16a6e4u: goto label_16a6e4;
        case 0x16a6e8u: goto label_16a6e8;
        case 0x16a6ecu: goto label_16a6ec;
        case 0x16a6f0u: goto label_16a6f0;
        case 0x16a6f4u: goto label_16a6f4;
        case 0x16a6f8u: goto label_16a6f8;
        case 0x16a6fcu: goto label_16a6fc;
        case 0x16a700u: goto label_16a700;
        case 0x16a704u: goto label_16a704;
        case 0x16a708u: goto label_16a708;
        case 0x16a70cu: goto label_16a70c;
        case 0x16a710u: goto label_16a710;
        case 0x16a714u: goto label_16a714;
        case 0x16a718u: goto label_16a718;
        case 0x16a71cu: goto label_16a71c;
        case 0x16a720u: goto label_16a720;
        case 0x16a724u: goto label_16a724;
        case 0x16a728u: goto label_16a728;
        case 0x16a72cu: goto label_16a72c;
        case 0x16a730u: goto label_16a730;
        case 0x16a734u: goto label_16a734;
        case 0x16a738u: goto label_16a738;
        case 0x16a73cu: goto label_16a73c;
        case 0x16a740u: goto label_16a740;
        case 0x16a744u: goto label_16a744;
        case 0x16a748u: goto label_16a748;
        case 0x16a74cu: goto label_16a74c;
        case 0x16a750u: goto label_16a750;
        case 0x16a754u: goto label_16a754;
        case 0x16a758u: goto label_16a758;
        case 0x16a75cu: goto label_16a75c;
        case 0x16a760u: goto label_16a760;
        case 0x16a764u: goto label_16a764;
        case 0x16a768u: goto label_16a768;
        case 0x16a76cu: goto label_16a76c;
        case 0x16a770u: goto label_16a770;
        case 0x16a774u: goto label_16a774;
        case 0x16a778u: goto label_16a778;
        case 0x16a77cu: goto label_16a77c;
        case 0x16a780u: goto label_16a780;
        case 0x16a784u: goto label_16a784;
        case 0x16a788u: goto label_16a788;
        case 0x16a78cu: goto label_16a78c;
        case 0x16a790u: goto label_16a790;
        case 0x16a794u: goto label_16a794;
        case 0x16a798u: goto label_16a798;
        case 0x16a79cu: goto label_16a79c;
        case 0x16a7a0u: goto label_16a7a0;
        case 0x16a7a4u: goto label_16a7a4;
        case 0x16a7a8u: goto label_16a7a8;
        case 0x16a7acu: goto label_16a7ac;
        case 0x16a7b0u: goto label_16a7b0;
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7b8u: goto label_16a7b8;
        case 0x16a7bcu: goto label_16a7bc;
        case 0x16a7c0u: goto label_16a7c0;
        case 0x16a7c4u: goto label_16a7c4;
        case 0x16a7c8u: goto label_16a7c8;
        case 0x16a7ccu: goto label_16a7cc;
        case 0x16a7d0u: goto label_16a7d0;
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7d8u: goto label_16a7d8;
        case 0x16a7dcu: goto label_16a7dc;
        case 0x16a7e0u: goto label_16a7e0;
        case 0x16a7e4u: goto label_16a7e4;
        case 0x16a7e8u: goto label_16a7e8;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a7f0u: goto label_16a7f0;
        case 0x16a7f4u: goto label_16a7f4;
        case 0x16a7f8u: goto label_16a7f8;
        case 0x16a7fcu: goto label_16a7fc;
        case 0x16a800u: goto label_16a800;
        case 0x16a804u: goto label_16a804;
        case 0x16a808u: goto label_16a808;
        case 0x16a80cu: goto label_16a80c;
        case 0x16a810u: goto label_16a810;
        case 0x16a814u: goto label_16a814;
        case 0x16a818u: goto label_16a818;
        case 0x16a81cu: goto label_16a81c;
        case 0x16a820u: goto label_16a820;
        case 0x16a824u: goto label_16a824;
        case 0x16a828u: goto label_16a828;
        case 0x16a82cu: goto label_16a82c;
        case 0x16a830u: goto label_16a830;
        case 0x16a834u: goto label_16a834;
        case 0x16a838u: goto label_16a838;
        case 0x16a83cu: goto label_16a83c;
        case 0x16a840u: goto label_16a840;
        case 0x16a844u: goto label_16a844;
        case 0x16a848u: goto label_16a848;
        case 0x16a84cu: goto label_16a84c;
        case 0x16a850u: goto label_16a850;
        case 0x16a854u: goto label_16a854;
        case 0x16a858u: goto label_16a858;
        case 0x16a85cu: goto label_16a85c;
        case 0x16a860u: goto label_16a860;
        case 0x16a864u: goto label_16a864;
        case 0x16a868u: goto label_16a868;
        case 0x16a86cu: goto label_16a86c;
        case 0x16a870u: goto label_16a870;
        case 0x16a874u: goto label_16a874;
        case 0x16a878u: goto label_16a878;
        default: break;
    }

    ctx->pc = 0x16a558u;

label_16a558:
    // 0x16a558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16a55c:
    // 0x16a55c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a560:
    // 0x16a560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a564:
    // 0x16a564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a568:
    // 0x16a568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a56c:
    // 0x16a56c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16a570:
    // 0x16a570: 0x8e220c08  lw          $v0, 0xC08($s1)
    ctx->pc = 0x16a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
label_16a574:
    // 0x16a574: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x16a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_16a578:
    // 0x16a578: 0x2c43001a  sltiu       $v1, $v0, 0x1A
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_16a57c:
    // 0x16a57c: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
label_16a580:
    if (ctx->pc == 0x16A580u) {
        ctx->pc = 0x16A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A57Cu;
        // 0x16a580: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A584u;
        goto label_16a584;
    }
    ctx->pc = 0x16A57Cu;
    {
        const bool branch_taken_0x16a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A57Cu;
        // 0x16a580: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a57c) {
            ctx->pc = 0x16A81Cu;
            goto label_16a81c;
        }
    }
    ctx->pc = 0x16A584u;
label_16a584:
    // 0x16a584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16a588:
    // 0x16a588: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16a588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16a58c:
    // 0x16a58c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16a590:
    // 0x16a590: 0x8c637340  lw          $v1, 0x7340($v1)
    ctx->pc = 0x16a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29504)));
label_16a594:
    // 0x16a594: 0x600008  jr          $v1
label_16a598:
    if (ctx->pc == 0x16A598u) {
        ctx->pc = 0x16A59Cu;
        goto label_16a59c;
    }
    ctx->pc = 0x16A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A5A0u: goto label_16a5a0;
            case 0x16A608u: goto label_16a608;
            case 0x16A620u: goto label_16a620;
            case 0x16A638u: goto label_16a638;
            case 0x16A650u: goto label_16a650;
            case 0x16A6B8u: goto label_16a6b8;
            case 0x16A730u: goto label_16a730;
            case 0x16A7A8u: goto label_16a7a8;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A81Cu: goto label_16a81c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A594u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16A59Cu;
label_16a59c:
    // 0x16a59c: 0x0  nop
    ctx->pc = 0x16a59cu;
    // NOP
label_16a5a0:
    // 0x16a5a0: 0x8e240c98  lw          $a0, 0xC98($s1)
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3224)));
label_16a5a4:
    // 0x16a5a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a5a8:
    // 0x16a5a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a5ac:
    if (ctx->pc == 0x16A5ACu) {
        ctx->pc = 0x16A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5A8u;
        // 0x16a5ac: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5B0u;
        goto label_16a5b0;
    }
    ctx->pc = 0x16A5A8u;
    {
        const bool branch_taken_0x16a5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5A8u;
        // 0x16a5ac: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5a8) {
            ctx->pc = 0x16A5C0u;
            goto label_16a5c0;
        }
    }
    ctx->pc = 0x16A5B0u;
label_16a5b0:
    // 0x16a5b0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a5b4:
    // 0x16a5b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a5b8:
    if (ctx->pc == 0x16A5B8u) {
        ctx->pc = 0x16A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5B4u;
        // 0x16a5b8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5BCu;
        goto label_16a5bc;
    }
    ctx->pc = 0x16A5B4u;
    {
        const bool branch_taken_0x16a5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5B4u;
        // 0x16a5b8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5b4) {
            ctx->pc = 0x16A5C4u;
            goto label_16a5c4;
        }
    }
    ctx->pc = 0x16A5BCu;
label_16a5bc:
    // 0x16a5bc: 0x0  nop
    ctx->pc = 0x16a5bcu;
    // NOP
label_16a5c0:
    // 0x16a5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a5c4:
    // 0x16a5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a5c8:
    // 0x16a5c8: 0xc05a900  jal         func_16A400
label_16a5cc:
    if (ctx->pc == 0x16A5CCu) {
        ctx->pc = 0x16A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C8u;
        // 0x16a5cc: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5D0u;
        goto label_16a5d0;
    }
    ctx->pc = 0x16A5C8u;
    SET_GPR_U32(ctx, 31, 0x16A5D0u);
    ctx->pc = 0x16A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5C8u;
    // 0x16a5cc: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A5C8u, 0x16A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5D0u;
label_16a5d0:
    // 0x16a5d0: 0x8e240c9c  lw          $a0, 0xC9C($s1)
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3228)));
label_16a5d4:
    // 0x16a5d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a5d8:
    // 0x16a5d8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a5dc:
    if (ctx->pc == 0x16A5DCu) {
        ctx->pc = 0x16A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5D8u;
        // 0x16a5dc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5E0u;
        goto label_16a5e0;
    }
    ctx->pc = 0x16A5D8u;
    {
        const bool branch_taken_0x16a5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5D8u;
        // 0x16a5dc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5d8) {
            ctx->pc = 0x16A5F0u;
            goto label_16a5f0;
        }
    }
    ctx->pc = 0x16A5E0u;
label_16a5e0:
    // 0x16a5e0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a5e4:
    // 0x16a5e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a5e8:
    if (ctx->pc == 0x16A5E8u) {
        ctx->pc = 0x16A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5E4u;
        // 0x16a5e8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5ECu;
        goto label_16a5ec;
    }
    ctx->pc = 0x16A5E4u;
    {
        const bool branch_taken_0x16a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5E4u;
        // 0x16a5e8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5e4) {
            ctx->pc = 0x16A5F4u;
            goto label_16a5f4;
        }
    }
    ctx->pc = 0x16A5ECu;
label_16a5ec:
    // 0x16a5ec: 0x0  nop
    ctx->pc = 0x16a5ecu;
    // NOP
label_16a5f0:
    // 0x16a5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a5f4:
    // 0x16a5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a5f8:
    // 0x16a5f8: 0xc05a900  jal         func_16A400
label_16a5fc:
    if (ctx->pc == 0x16A5FCu) {
        ctx->pc = 0x16A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5F8u;
        // 0x16a5fc: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A600u;
        goto label_16a600;
    }
    ctx->pc = 0x16A5F8u;
    SET_GPR_U32(ctx, 31, 0x16A600u);
    ctx->pc = 0x16A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5F8u;
    // 0x16a5fc: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A5F8u, 0x16A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A600u;
label_16a600:
    // 0x16a600: 0x10000087  b           . + 4 + (0x87 << 2)
label_16a604:
    if (ctx->pc == 0x16A604u) {
        ctx->pc = 0x16A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A600u;
        // 0x16a604: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A608u;
        goto label_16a608;
    }
    ctx->pc = 0x16A600u;
    {
        const bool branch_taken_0x16a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A600u;
        // 0x16a604: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a600) {
            ctx->pc = 0x16A820u;
            goto label_16a820;
        }
    }
    ctx->pc = 0x16A608u;
label_16a608:
    // 0x16a608: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
label_16a60c:
    // 0x16a60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a610:
    // 0x16a610: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a614:
    // 0x16a614: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_16a618:
    // 0x16a618: 0x10000068  b           . + 4 + (0x68 << 2)
label_16a61c:
    if (ctx->pc == 0x16A61Cu) {
        ctx->pc = 0x16A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A618u;
        // 0x16a61c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A620u;
        goto label_16a620;
    }
    ctx->pc = 0x16A618u;
    {
        const bool branch_taken_0x16a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A618u;
        // 0x16a61c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a618) {
            ctx->pc = 0x16A7BCu;
            goto label_16a7bc;
        }
    }
    ctx->pc = 0x16A620u;
label_16a620:
    // 0x16a620: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
label_16a624:
    // 0x16a624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a628:
    // 0x16a628: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a62c:
    // 0x16a62c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_16a630:
    // 0x16a630: 0x10000062  b           . + 4 + (0x62 << 2)
label_16a634:
    if (ctx->pc == 0x16A634u) {
        ctx->pc = 0x16A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A630u;
        // 0x16a634: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A638u;
        goto label_16a638;
    }
    ctx->pc = 0x16A630u;
    {
        const bool branch_taken_0x16a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A630u;
        // 0x16a634: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a630) {
            ctx->pc = 0x16A7BCu;
            goto label_16a7bc;
        }
    }
    ctx->pc = 0x16A638u;
label_16a638:
    // 0x16a638: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
label_16a63c:
    // 0x16a63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a640:
    // 0x16a640: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a644:
    // 0x16a644: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_16a648:
    // 0x16a648: 0x1000005c  b           . + 4 + (0x5C << 2)
label_16a64c:
    if (ctx->pc == 0x16A64Cu) {
        ctx->pc = 0x16A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A648u;
        // 0x16a64c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A650u;
        goto label_16a650;
    }
    ctx->pc = 0x16A648u;
    {
        const bool branch_taken_0x16a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A648u;
        // 0x16a64c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a648) {
            ctx->pc = 0x16A7BCu;
            goto label_16a7bc;
        }
    }
    ctx->pc = 0x16A650u;
label_16a650:
    // 0x16a650: 0x8e240c98  lw          $a0, 0xC98($s1)
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3224)));
label_16a654:
    // 0x16a654: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a658:
    // 0x16a658: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a65c:
    if (ctx->pc == 0x16A65Cu) {
        ctx->pc = 0x16A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A658u;
        // 0x16a65c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A660u;
        goto label_16a660;
    }
    ctx->pc = 0x16A658u;
    {
        const bool branch_taken_0x16a658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A658u;
        // 0x16a65c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a658) {
            ctx->pc = 0x16A670u;
            goto label_16a670;
        }
    }
    ctx->pc = 0x16A660u;
label_16a660:
    // 0x16a660: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a664:
    // 0x16a664: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a668:
    if (ctx->pc == 0x16A668u) {
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A664u;
        // 0x16a668: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A66Cu;
        goto label_16a66c;
    }
    ctx->pc = 0x16A664u;
    {
        const bool branch_taken_0x16a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A664u;
        // 0x16a668: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a664) {
            ctx->pc = 0x16A674u;
            goto label_16a674;
        }
    }
    ctx->pc = 0x16A66Cu;
label_16a66c:
    // 0x16a66c: 0x0  nop
    ctx->pc = 0x16a66cu;
    // NOP
label_16a670:
    // 0x16a670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a674:
    // 0x16a674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a678:
    // 0x16a678: 0xc05a900  jal         func_16A400
label_16a67c:
    if (ctx->pc == 0x16A67Cu) {
        ctx->pc = 0x16A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A678u;
        // 0x16a67c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A680u;
        goto label_16a680;
    }
    ctx->pc = 0x16A678u;
    SET_GPR_U32(ctx, 31, 0x16A680u);
    ctx->pc = 0x16A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A678u;
    // 0x16a67c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A678u, 0x16A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A680u;
label_16a680:
    // 0x16a680: 0x8e240c9c  lw          $a0, 0xC9C($s1)
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3228)));
label_16a684:
    // 0x16a684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a688:
    // 0x16a688: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a68c:
    if (ctx->pc == 0x16A68Cu) {
        ctx->pc = 0x16A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A688u;
        // 0x16a68c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A690u;
        goto label_16a690;
    }
    ctx->pc = 0x16A688u;
    {
        const bool branch_taken_0x16a688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A688u;
        // 0x16a68c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a688) {
            ctx->pc = 0x16A6A0u;
            goto label_16a6a0;
        }
    }
    ctx->pc = 0x16A690u;
label_16a690:
    // 0x16a690: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a694:
    // 0x16a694: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a698:
    if (ctx->pc == 0x16A698u) {
        ctx->pc = 0x16A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A694u;
        // 0x16a698: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A69Cu;
        goto label_16a69c;
    }
    ctx->pc = 0x16A694u;
    {
        const bool branch_taken_0x16a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A694u;
        // 0x16a698: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a694) {
            ctx->pc = 0x16A6A4u;
            goto label_16a6a4;
        }
    }
    ctx->pc = 0x16A69Cu;
label_16a69c:
    // 0x16a69c: 0x0  nop
    ctx->pc = 0x16a69cu;
    // NOP
label_16a6a0:
    // 0x16a6a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6a4:
    // 0x16a6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a6a8:
    // 0x16a6a8: 0xc05a900  jal         func_16A400
label_16a6ac:
    if (ctx->pc == 0x16A6ACu) {
        ctx->pc = 0x16A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6A8u;
        // 0x16a6ac: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6B0u;
        goto label_16a6b0;
    }
    ctx->pc = 0x16A6A8u;
    SET_GPR_U32(ctx, 31, 0x16A6B0u);
    ctx->pc = 0x16A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A6A8u;
    // 0x16a6ac: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A6A8u, 0x16A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6B0u;
label_16a6b0:
    // 0x16a6b0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_16a6b4:
    if (ctx->pc == 0x16A6B4u) {
        ctx->pc = 0x16A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B0u;
        // 0x16a6b4: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6B8u;
        goto label_16a6b8;
    }
    ctx->pc = 0x16A6B0u;
    {
        const bool branch_taken_0x16a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B0u;
        // 0x16a6b4: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b0) {
            ctx->pc = 0x16A820u;
            goto label_16a820;
        }
    }
    ctx->pc = 0x16A6B8u;
label_16a6b8:
    // 0x16a6b8: 0x8e240ca0  lw          $a0, 0xCA0($s1)
    ctx->pc = 0x16a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
label_16a6bc:
    // 0x16a6bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a6c0:
    // 0x16a6c0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a6c4:
    if (ctx->pc == 0x16A6C4u) {
        ctx->pc = 0x16A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6C0u;
        // 0x16a6c4: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6C8u;
        goto label_16a6c8;
    }
    ctx->pc = 0x16A6C0u;
    {
        const bool branch_taken_0x16a6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6C0u;
        // 0x16a6c4: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6c0) {
            ctx->pc = 0x16A6D8u;
            goto label_16a6d8;
        }
    }
    ctx->pc = 0x16A6C8u;
label_16a6c8:
    // 0x16a6c8: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a6cc:
    // 0x16a6cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a6d0:
    if (ctx->pc == 0x16A6D0u) {
        ctx->pc = 0x16A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6CCu;
        // 0x16a6d0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6D4u;
        goto label_16a6d4;
    }
    ctx->pc = 0x16A6CCu;
    {
        const bool branch_taken_0x16a6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6CCu;
        // 0x16a6d0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6cc) {
            ctx->pc = 0x16A6DCu;
            goto label_16a6dc;
        }
    }
    ctx->pc = 0x16A6D4u;
label_16a6d4:
    // 0x16a6d4: 0x0  nop
    ctx->pc = 0x16a6d4u;
    // NOP
label_16a6d8:
    // 0x16a6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6dc:
    // 0x16a6dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a6e0:
    // 0x16a6e0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_16a6e4:
    if (ctx->pc == 0x16A6E4u) {
        ctx->pc = 0x16A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6E0u;
        // 0x16a6e4: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6E8u;
        goto label_16a6e8;
    }
    ctx->pc = 0x16A6E0u;
    {
        const bool branch_taken_0x16a6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a6e0) {
            ctx->pc = 0x16A6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A6E0u;
            // 0x16a6e4: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A720u;
            goto label_16a720;
        }
    }
    ctx->pc = 0x16A6E8u;
label_16a6e8:
    // 0x16a6e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a6ec:
    // 0x16a6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a6f0:
    // 0x16a6f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a6f4:
    // 0x16a6f4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a6f8:
    // 0x16a6f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a6fc:
    // 0x16a6fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a700:
    // 0x16a700: 0x60f809  jalr        $v1
label_16a704:
    if (ctx->pc == 0x16A704u) {
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A708u;
        goto label_16a708;
    }
    ctx->pc = 0x16A700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A708u);
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A700u, 0x16A708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A708u;
label_16a708:
    // 0x16a708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a70c:
    // 0x16a70c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a710:
    // 0x16a710: 0xc05a900  jal         func_16A400
label_16a714:
    if (ctx->pc == 0x16A714u) {
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A710u;
        // 0x16a714: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A718u;
        goto label_16a718;
    }
    ctx->pc = 0x16A710u;
    SET_GPR_U32(ctx, 31, 0x16A718u);
    ctx->pc = 0x16A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A710u;
    // 0x16a714: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A710u, 0x16A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A718u;
label_16a718:
    // 0x16a718: 0x10000041  b           . + 4 + (0x41 << 2)
label_16a71c:
    if (ctx->pc == 0x16A71Cu) {
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A720u;
        goto label_16a720;
    }
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16A820u;
            goto label_16a820;
        }
    }
    ctx->pc = 0x16A720u;
label_16a720:
    // 0x16a720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a724:
    // 0x16a724: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a728:
    // 0x16a728: 0x10000023  b           . + 4 + (0x23 << 2)
label_16a72c:
    if (ctx->pc == 0x16A72Cu) {
        ctx->pc = 0x16A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A728u;
        // 0x16a72c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A730u;
        goto label_16a730;
    }
    ctx->pc = 0x16A728u;
    {
        const bool branch_taken_0x16a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A728u;
        // 0x16a72c: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a728) {
            ctx->pc = 0x16A7B8u;
            goto label_16a7b8;
        }
    }
    ctx->pc = 0x16A730u;
label_16a730:
    // 0x16a730: 0x8e240ca0  lw          $a0, 0xCA0($s1)
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
label_16a734:
    // 0x16a734: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a738:
    // 0x16a738: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a73c:
    if (ctx->pc == 0x16A73Cu) {
        ctx->pc = 0x16A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A738u;
        // 0x16a73c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A740u;
        goto label_16a740;
    }
    ctx->pc = 0x16A738u;
    {
        const bool branch_taken_0x16a738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A738u;
        // 0x16a73c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a738) {
            ctx->pc = 0x16A750u;
            goto label_16a750;
        }
    }
    ctx->pc = 0x16A740u;
label_16a740:
    // 0x16a740: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a744:
    // 0x16a744: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a748:
    if (ctx->pc == 0x16A748u) {
        ctx->pc = 0x16A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A744u;
        // 0x16a748: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A74Cu;
        goto label_16a74c;
    }
    ctx->pc = 0x16A744u;
    {
        const bool branch_taken_0x16a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A744u;
        // 0x16a748: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a744) {
            ctx->pc = 0x16A754u;
            goto label_16a754;
        }
    }
    ctx->pc = 0x16A74Cu;
label_16a74c:
    // 0x16a74c: 0x0  nop
    ctx->pc = 0x16a74cu;
    // NOP
label_16a750:
    // 0x16a750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a754:
    // 0x16a754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a758:
    // 0x16a758: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_16a75c:
    if (ctx->pc == 0x16A75Cu) {
        ctx->pc = 0x16A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A758u;
        // 0x16a75c: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A760u;
        goto label_16a760;
    }
    ctx->pc = 0x16A758u;
    {
        const bool branch_taken_0x16a758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a758) {
            ctx->pc = 0x16A75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A758u;
            // 0x16a75c: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A798u;
            goto label_16a798;
        }
    }
    ctx->pc = 0x16A760u;
label_16a760:
    // 0x16a760: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a764:
    // 0x16a764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a768:
    // 0x16a768: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a76c:
    // 0x16a76c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a770:
    // 0x16a770: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a774:
    // 0x16a774: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a778:
    // 0x16a778: 0x60f809  jalr        $v1
label_16a77c:
    if (ctx->pc == 0x16A77Cu) {
        ctx->pc = 0x16A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A778u;
        // 0x16a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A780u;
        goto label_16a780;
    }
    ctx->pc = 0x16A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A780u);
        ctx->pc = 0x16A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A778u;
        // 0x16a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A778u, 0x16A780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a784:
    // 0x16a784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a788:
    // 0x16a788: 0xc05a900  jal         func_16A400
label_16a78c:
    if (ctx->pc == 0x16A78Cu) {
        ctx->pc = 0x16A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A788u;
        // 0x16a78c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A790u;
        goto label_16a790;
    }
    ctx->pc = 0x16A788u;
    SET_GPR_U32(ctx, 31, 0x16A790u);
    ctx->pc = 0x16A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A788u;
    // 0x16a78c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A788u, 0x16A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A790u;
label_16a790:
    // 0x16a790: 0x10000023  b           . + 4 + (0x23 << 2)
label_16a794:
    if (ctx->pc == 0x16A794u) {
        ctx->pc = 0x16A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A790u;
        // 0x16a794: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A798u;
        goto label_16a798;
    }
    ctx->pc = 0x16A790u;
    {
        const bool branch_taken_0x16a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A790u;
        // 0x16a794: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a790) {
            ctx->pc = 0x16A820u;
            goto label_16a820;
        }
    }
    ctx->pc = 0x16A798u;
label_16a798:
    // 0x16a798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a79c:
    // 0x16a79c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a7a0:
    // 0x16a7a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16a7a4:
    if (ctx->pc == 0x16A7A4u) {
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7A8u;
        goto label_16a7a8;
    }
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A7B8u;
            goto label_16a7b8;
        }
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
label_16a7ac:
    // 0x16a7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a7b0:
    // 0x16a7b0: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a7b4:
    // 0x16a7b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16a7b8:
    // 0x16a7b8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_16a7bc:
    // 0x16a7bc: 0xc05a900  jal         func_16A400
label_16a7c0:
    if (ctx->pc == 0x16A7C0u) {
        ctx->pc = 0x16A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7BCu;
        // 0x16a7c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7C4u;
        goto label_16a7c4;
    }
    ctx->pc = 0x16A7BCu;
    SET_GPR_U32(ctx, 31, 0x16A7C4u);
    ctx->pc = 0x16A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7BCu;
    // 0x16a7c0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A7BCu, 0x16A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7C4u;
label_16a7c4:
    // 0x16a7c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_16a7c8:
    if (ctx->pc == 0x16A7C8u) {
        ctx->pc = 0x16A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C4u;
        // 0x16a7c8: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7CCu;
        goto label_16a7cc;
    }
    ctx->pc = 0x16A7C4u;
    {
        const bool branch_taken_0x16a7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C4u;
        // 0x16a7c8: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c4) {
            ctx->pc = 0x16A820u;
            goto label_16a820;
        }
    }
    ctx->pc = 0x16A7CCu;
label_16a7cc:
    // 0x16a7cc: 0x0  nop
    ctx->pc = 0x16a7ccu;
    // NOP
label_16a7d0:
    // 0x16a7d0: 0x8e240ca0  lw          $a0, 0xCA0($s1)
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
label_16a7d4:
    // 0x16a7d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a7d8:
    // 0x16a7d8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_16a7dc:
    if (ctx->pc == 0x16A7DCu) {
        ctx->pc = 0x16A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7D8u;
        // 0x16a7dc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7E0u;
        goto label_16a7e0;
    }
    ctx->pc = 0x16A7D8u;
    {
        const bool branch_taken_0x16a7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7D8u;
        // 0x16a7dc: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7d8) {
            ctx->pc = 0x16A7F0u;
            goto label_16a7f0;
        }
    }
    ctx->pc = 0x16A7E0u;
label_16a7e0:
    // 0x16a7e0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a7e4:
    // 0x16a7e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_16a7e8:
    if (ctx->pc == 0x16A7E8u) {
        ctx->pc = 0x16A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7E4u;
        // 0x16a7e8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7ECu;
        goto label_16a7ec;
    }
    ctx->pc = 0x16A7E4u;
    {
        const bool branch_taken_0x16a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7E4u;
        // 0x16a7e8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7e4) {
            ctx->pc = 0x16A7F4u;
            goto label_16a7f4;
        }
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0x0  nop
    ctx->pc = 0x16a7ecu;
    // NOP
label_16a7f0:
    // 0x16a7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a7f4:
    // 0x16a7f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a7f8:
    // 0x16a7f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_16a7fc:
    if (ctx->pc == 0x16A7FCu) {
        ctx->pc = 0x16A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7F8u;
        // 0x16a7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A800u;
        goto label_16a800;
    }
    ctx->pc = 0x16A7F8u;
    {
        const bool branch_taken_0x16a7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7F8u;
        // 0x16a7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7f8) {
            ctx->pc = 0x16A81Cu;
            goto label_16a81c;
        }
    }
    ctx->pc = 0x16A800u;
label_16a800:
    // 0x16a800: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a804:
    // 0x16a804: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a808:
    // 0x16a808: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a80c:
    // 0x16a80c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a810:
    // 0x16a810: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a814:
    // 0x16a814: 0x60f809  jalr        $v1
label_16a818:
    if (ctx->pc == 0x16A818u) {
        ctx->pc = 0x16A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A814u;
        // 0x16a818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A81Cu;
        goto label_16a81c;
    }
    ctx->pc = 0x16A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A81Cu);
        ctx->pc = 0x16A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A814u;
        // 0x16a818: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A814u, 0x16A81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A81Cu;
label_16a81c:
    // 0x16a81c: 0x8e240ca4  lw          $a0, 0xCA4($s1)
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
label_16a820:
    // 0x16a820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a824:
    // 0x16a824: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_16a828:
    if (ctx->pc == 0x16A828u) {
        ctx->pc = 0x16A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A824u;
        // 0x16a828: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A82Cu;
        goto label_16a82c;
    }
    ctx->pc = 0x16A824u;
    {
        const bool branch_taken_0x16a824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A824u;
        // 0x16a828: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a824) {
            ctx->pc = 0x16A838u;
            goto label_16a838;
        }
    }
    ctx->pc = 0x16A82Cu;
label_16a82c:
    // 0x16a82c: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_16a830:
    // 0x16a830: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a834:
    if (ctx->pc == 0x16A834u) {
        ctx->pc = 0x16A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A830u;
        // 0x16a834: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A838u;
        goto label_16a838;
    }
    ctx->pc = 0x16A830u;
    {
        const bool branch_taken_0x16a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A830u;
        // 0x16a834: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a830) {
            ctx->pc = 0x16A83Cu;
            goto label_16a83c;
        }
    }
    ctx->pc = 0x16A838u;
label_16a838:
    // 0x16a838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a83c:
    // 0x16a83c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a840:
    // 0x16a840: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_16a844:
    if (ctx->pc == 0x16A844u) {
        ctx->pc = 0x16A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A840u;
        // 0x16a844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A848u;
        goto label_16a848;
    }
    ctx->pc = 0x16A840u;
    {
        const bool branch_taken_0x16a840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A840u;
        // 0x16a844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a840) {
            ctx->pc = 0x16A864u;
            goto label_16a864;
        }
    }
    ctx->pc = 0x16A848u;
label_16a848:
    // 0x16a848: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a84c:
    // 0x16a84c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a850:
    // 0x16a850: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a854:
    // 0x16a854: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a858:
    // 0x16a858: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a85c:
    // 0x16a85c: 0x60f809  jalr        $v1
label_16a860:
    if (ctx->pc == 0x16A860u) {
        ctx->pc = 0x16A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A85Cu;
        // 0x16a860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A864u;
        goto label_16a864;
    }
    ctx->pc = 0x16A85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A864u);
        ctx->pc = 0x16A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A85Cu;
        // 0x16a860: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A85Cu, 0x16A864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A864u;
label_16a864:
    // 0x16a864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a868:
    // 0x16a868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a86c:
    // 0x16a86c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a86cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a870:
    // 0x16a870: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a874:
    // 0x16a874: 0x3e00008  jr          $ra
label_16a878:
    if (ctx->pc == 0x16A878u) {
        ctx->pc = 0x16A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A874u;
        // 0x16a878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A87Cu;
        goto label_fallthrough_0x16a874;
    }
    ctx->pc = 0x16A874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A874u;
        // 0x16a878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a874:
    ctx->pc = 0x16A87Cu;
}
