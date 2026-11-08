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

// Function: SeqOpen__9ApcTestDr
// Address: 0x11a6b0 - 0x11a954
void SeqOpen__9ApcTestDr_0x11a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqOpen__9ApcTestDr_0x11a6b0");
#endif

    switch (ctx->pc) {
        case 0x11a6b0u: goto label_11a6b0;
        case 0x11a6b4u: goto label_11a6b4;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6bcu: goto label_11a6bc;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6c4u: goto label_11a6c4;
        case 0x11a6c8u: goto label_11a6c8;
        case 0x11a6ccu: goto label_11a6cc;
        case 0x11a6d0u: goto label_11a6d0;
        case 0x11a6d4u: goto label_11a6d4;
        case 0x11a6d8u: goto label_11a6d8;
        case 0x11a6dcu: goto label_11a6dc;
        case 0x11a6e0u: goto label_11a6e0;
        case 0x11a6e4u: goto label_11a6e4;
        case 0x11a6e8u: goto label_11a6e8;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a6f0u: goto label_11a6f0;
        case 0x11a6f4u: goto label_11a6f4;
        case 0x11a6f8u: goto label_11a6f8;
        case 0x11a6fcu: goto label_11a6fc;
        case 0x11a700u: goto label_11a700;
        case 0x11a704u: goto label_11a704;
        case 0x11a708u: goto label_11a708;
        case 0x11a70cu: goto label_11a70c;
        case 0x11a710u: goto label_11a710;
        case 0x11a714u: goto label_11a714;
        case 0x11a718u: goto label_11a718;
        case 0x11a71cu: goto label_11a71c;
        case 0x11a720u: goto label_11a720;
        case 0x11a724u: goto label_11a724;
        case 0x11a728u: goto label_11a728;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a730u: goto label_11a730;
        case 0x11a734u: goto label_11a734;
        case 0x11a738u: goto label_11a738;
        case 0x11a73cu: goto label_11a73c;
        case 0x11a740u: goto label_11a740;
        case 0x11a744u: goto label_11a744;
        case 0x11a748u: goto label_11a748;
        case 0x11a74cu: goto label_11a74c;
        case 0x11a750u: goto label_11a750;
        case 0x11a754u: goto label_11a754;
        case 0x11a758u: goto label_11a758;
        case 0x11a75cu: goto label_11a75c;
        case 0x11a760u: goto label_11a760;
        case 0x11a764u: goto label_11a764;
        case 0x11a768u: goto label_11a768;
        case 0x11a76cu: goto label_11a76c;
        case 0x11a770u: goto label_11a770;
        case 0x11a774u: goto label_11a774;
        case 0x11a778u: goto label_11a778;
        case 0x11a77cu: goto label_11a77c;
        case 0x11a780u: goto label_11a780;
        case 0x11a784u: goto label_11a784;
        case 0x11a788u: goto label_11a788;
        case 0x11a78cu: goto label_11a78c;
        case 0x11a790u: goto label_11a790;
        case 0x11a794u: goto label_11a794;
        case 0x11a798u: goto label_11a798;
        case 0x11a79cu: goto label_11a79c;
        case 0x11a7a0u: goto label_11a7a0;
        case 0x11a7a4u: goto label_11a7a4;
        case 0x11a7a8u: goto label_11a7a8;
        case 0x11a7acu: goto label_11a7ac;
        case 0x11a7b0u: goto label_11a7b0;
        case 0x11a7b4u: goto label_11a7b4;
        case 0x11a7b8u: goto label_11a7b8;
        case 0x11a7bcu: goto label_11a7bc;
        case 0x11a7c0u: goto label_11a7c0;
        case 0x11a7c4u: goto label_11a7c4;
        case 0x11a7c8u: goto label_11a7c8;
        case 0x11a7ccu: goto label_11a7cc;
        case 0x11a7d0u: goto label_11a7d0;
        case 0x11a7d4u: goto label_11a7d4;
        case 0x11a7d8u: goto label_11a7d8;
        case 0x11a7dcu: goto label_11a7dc;
        case 0x11a7e0u: goto label_11a7e0;
        case 0x11a7e4u: goto label_11a7e4;
        case 0x11a7e8u: goto label_11a7e8;
        case 0x11a7ecu: goto label_11a7ec;
        case 0x11a7f0u: goto label_11a7f0;
        case 0x11a7f4u: goto label_11a7f4;
        case 0x11a7f8u: goto label_11a7f8;
        case 0x11a7fcu: goto label_11a7fc;
        case 0x11a800u: goto label_11a800;
        case 0x11a804u: goto label_11a804;
        case 0x11a808u: goto label_11a808;
        case 0x11a80cu: goto label_11a80c;
        case 0x11a810u: goto label_11a810;
        case 0x11a814u: goto label_11a814;
        case 0x11a818u: goto label_11a818;
        case 0x11a81cu: goto label_11a81c;
        case 0x11a820u: goto label_11a820;
        case 0x11a824u: goto label_11a824;
        case 0x11a828u: goto label_11a828;
        case 0x11a82cu: goto label_11a82c;
        case 0x11a830u: goto label_11a830;
        case 0x11a834u: goto label_11a834;
        case 0x11a838u: goto label_11a838;
        case 0x11a83cu: goto label_11a83c;
        case 0x11a840u: goto label_11a840;
        case 0x11a844u: goto label_11a844;
        case 0x11a848u: goto label_11a848;
        case 0x11a84cu: goto label_11a84c;
        case 0x11a850u: goto label_11a850;
        case 0x11a854u: goto label_11a854;
        case 0x11a858u: goto label_11a858;
        case 0x11a85cu: goto label_11a85c;
        case 0x11a860u: goto label_11a860;
        case 0x11a864u: goto label_11a864;
        case 0x11a868u: goto label_11a868;
        case 0x11a86cu: goto label_11a86c;
        case 0x11a870u: goto label_11a870;
        case 0x11a874u: goto label_11a874;
        case 0x11a878u: goto label_11a878;
        case 0x11a87cu: goto label_11a87c;
        case 0x11a880u: goto label_11a880;
        case 0x11a884u: goto label_11a884;
        case 0x11a888u: goto label_11a888;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a890u: goto label_11a890;
        case 0x11a894u: goto label_11a894;
        case 0x11a898u: goto label_11a898;
        case 0x11a89cu: goto label_11a89c;
        case 0x11a8a0u: goto label_11a8a0;
        case 0x11a8a4u: goto label_11a8a4;
        case 0x11a8a8u: goto label_11a8a8;
        case 0x11a8acu: goto label_11a8ac;
        case 0x11a8b0u: goto label_11a8b0;
        case 0x11a8b4u: goto label_11a8b4;
        case 0x11a8b8u: goto label_11a8b8;
        case 0x11a8bcu: goto label_11a8bc;
        case 0x11a8c0u: goto label_11a8c0;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a8c8u: goto label_11a8c8;
        case 0x11a8ccu: goto label_11a8cc;
        case 0x11a8d0u: goto label_11a8d0;
        case 0x11a8d4u: goto label_11a8d4;
        case 0x11a8d8u: goto label_11a8d8;
        case 0x11a8dcu: goto label_11a8dc;
        case 0x11a8e0u: goto label_11a8e0;
        case 0x11a8e4u: goto label_11a8e4;
        case 0x11a8e8u: goto label_11a8e8;
        case 0x11a8ecu: goto label_11a8ec;
        case 0x11a8f0u: goto label_11a8f0;
        case 0x11a8f4u: goto label_11a8f4;
        case 0x11a8f8u: goto label_11a8f8;
        case 0x11a8fcu: goto label_11a8fc;
        case 0x11a900u: goto label_11a900;
        case 0x11a904u: goto label_11a904;
        case 0x11a908u: goto label_11a908;
        case 0x11a90cu: goto label_11a90c;
        case 0x11a910u: goto label_11a910;
        case 0x11a914u: goto label_11a914;
        case 0x11a918u: goto label_11a918;
        case 0x11a91cu: goto label_11a91c;
        case 0x11a920u: goto label_11a920;
        case 0x11a924u: goto label_11a924;
        case 0x11a928u: goto label_11a928;
        case 0x11a92cu: goto label_11a92c;
        case 0x11a930u: goto label_11a930;
        case 0x11a934u: goto label_11a934;
        case 0x11a938u: goto label_11a938;
        case 0x11a93cu: goto label_11a93c;
        case 0x11a940u: goto label_11a940;
        case 0x11a944u: goto label_11a944;
        case 0x11a948u: goto label_11a948;
        case 0x11a94cu: goto label_11a94c;
        case 0x11a950u: goto label_11a950;
        default: break;
    }

    ctx->pc = 0x11a6b0u;

label_11a6b0:
    // 0x11a6b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11a6b4:
    // 0x11a6b4: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_11a6b8:
    // 0x11a6b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11a6bc:
    // 0x11a6bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11a6c0:
    // 0x11a6c0: 0x8f928d10  lw          $s2, -0x72F0($gp)
    ctx->pc = 0x11a6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_11a6c4:
    // 0x11a6c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_11a6c8:
    // 0x11a6c8: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
label_11a6cc:
    // 0x11a6cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11a6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_11a6d0:
    // 0x11a6d0: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x11a6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
label_11a6d4:
    // 0x11a6d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_11a6d8:
    // 0x11a6d8: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_11a6dc:
    // 0x11a6dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11a6e0:
    // 0x11a6e0: 0x26313670  addiu       $s1, $s1, 0x3670
    ctx->pc = 0x11a6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13936));
label_11a6e4:
    // 0x11a6e4: 0x26103660  addiu       $s0, $s0, 0x3660
    ctx->pc = 0x11a6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13920));
label_11a6e8:
    // 0x11a6e8: 0xc06406e  jal         func_1901B8
label_11a6ec:
    if (ctx->pc == 0x11A6ECu) {
        ctx->pc = 0x11A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6E8u;
        // 0x11a6ec: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A6F0u;
        goto label_11a6f0;
    }
    ctx->pc = 0x11A6E8u;
    SET_GPR_U32(ctx, 31, 0x11A6F0u);
    ctx->pc = 0x11A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6E8u;
    // 0x11a6ec: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x11A6E8u, 0x11A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6F0u;
label_11a6f0:
    // 0x11a6f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a6f4:
    // 0x11a6f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11a6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a6f8:
    // 0x11a6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a6fc:
    // 0x11a6fc: 0xc0640ca  jal         func_190328
label_11a700:
    if (ctx->pc == 0x11A700u) {
        ctx->pc = 0x11A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6FCu;
        // 0x11a700: 0xaf828970  sw          $v0, -0x7690($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A704u;
        goto label_11a704;
    }
    ctx->pc = 0x11A6FCu;
    SET_GPR_U32(ctx, 31, 0x11A704u);
    ctx->pc = 0x11A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A6FCu;
    // 0x11a700: 0xaf828970  sw          $v0, -0x7690($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A6FCu, 0x11A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A704u;
label_11a704:
    // 0x11a704: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a708:
    // 0x11a708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a70c:
    // 0x11a70c: 0xc0640d6  jal         func_190358
label_11a710:
    if (ctx->pc == 0x11A710u) {
        ctx->pc = 0x11A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A70Cu;
        // 0x11a710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A714u;
        goto label_11a714;
    }
    ctx->pc = 0x11A70Cu;
    SET_GPR_U32(ctx, 31, 0x11A714u);
    ctx->pc = 0x11A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A70Cu;
    // 0x11a710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A70Cu, 0x11A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A714u;
label_11a714:
    // 0x11a714: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a718:
    // 0x11a718: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_11a71c:
    // 0x11a71c: 0xc0640ca  jal         func_190328
label_11a720:
    if (ctx->pc == 0x11A720u) {
        ctx->pc = 0x11A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A71Cu;
        // 0x11a720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A724u;
        goto label_11a724;
    }
    ctx->pc = 0x11A71Cu;
    SET_GPR_U32(ctx, 31, 0x11A724u);
    ctx->pc = 0x11A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A71Cu;
    // 0x11a720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A71Cu, 0x11A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A724u;
label_11a724:
    // 0x11a724: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a728:
    // 0x11a728: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x11a728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_11a72c:
    // 0x11a72c: 0xc0640d6  jal         func_190358
label_11a730:
    if (ctx->pc == 0x11A730u) {
        ctx->pc = 0x11A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A72Cu;
        // 0x11a730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A734u;
        goto label_11a734;
    }
    ctx->pc = 0x11A72Cu;
    SET_GPR_U32(ctx, 31, 0x11A734u);
    ctx->pc = 0x11A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A72Cu;
    // 0x11a730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A72Cu, 0x11A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A734u;
label_11a734:
    // 0x11a734: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a738:
    // 0x11a738: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_11a73c:
    // 0x11a73c: 0xc0640ca  jal         func_190328
label_11a740:
    if (ctx->pc == 0x11A740u) {
        ctx->pc = 0x11A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A73Cu;
        // 0x11a740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A744u;
        goto label_11a744;
    }
    ctx->pc = 0x11A73Cu;
    SET_GPR_U32(ctx, 31, 0x11A744u);
    ctx->pc = 0x11A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A73Cu;
    // 0x11a740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A73Cu, 0x11A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A744u;
label_11a744:
    // 0x11a744: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a748:
    // 0x11a748: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x11a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_11a74c:
    // 0x11a74c: 0xc0640d6  jal         func_190358
label_11a750:
    if (ctx->pc == 0x11A750u) {
        ctx->pc = 0x11A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A74Cu;
        // 0x11a750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A754u;
        goto label_11a754;
    }
    ctx->pc = 0x11A74Cu;
    SET_GPR_U32(ctx, 31, 0x11A754u);
    ctx->pc = 0x11A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A74Cu;
    // 0x11a750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A74Cu, 0x11A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A754u;
label_11a754:
    // 0x11a754: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a758:
    // 0x11a758: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x11a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_11a75c:
    // 0x11a75c: 0xc0640ca  jal         func_190328
label_11a760:
    if (ctx->pc == 0x11A760u) {
        ctx->pc = 0x11A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A75Cu;
        // 0x11a760: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A764u;
        goto label_11a764;
    }
    ctx->pc = 0x11A75Cu;
    SET_GPR_U32(ctx, 31, 0x11A764u);
    ctx->pc = 0x11A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A75Cu;
    // 0x11a760: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A75Cu, 0x11A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A764u;
label_11a764:
    // 0x11a764: 0x8f848970  lw          $a0, -0x7690($gp)
    ctx->pc = 0x11a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a768:
    // 0x11a768: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x11a768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_11a76c:
    // 0x11a76c: 0xc0640d6  jal         func_190358
label_11a770:
    if (ctx->pc == 0x11A770u) {
        ctx->pc = 0x11A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A76Cu;
        // 0x11a770: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A774u;
        goto label_11a774;
    }
    ctx->pc = 0x11A76Cu;
    SET_GPR_U32(ctx, 31, 0x11A774u);
    ctx->pc = 0x11A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A76Cu;
    // 0x11a770: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A76Cu, 0x11A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A774u;
label_11a774:
    // 0x11a774: 0x8f878970  lw          $a3, -0x7690($gp)
    ctx->pc = 0x11a774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a778:
    // 0x11a778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11a778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a77c:
    // 0x11a77c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a780:
    // 0x11a780: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x11a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11a784:
    // 0x11a784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a788:
    // 0x11a788: 0xace3012c  sw          $v1, 0x12C($a3)
    ctx->pc = 0x11a788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 300), GPR_U32(ctx, 3));
label_11a78c:
    // 0x11a78c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x11a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_11a790:
    // 0x11a790: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11a790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11a794:
    // 0x11a794: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a798:
    // 0x11a798: 0x60f809  jalr        $v1
label_11a79c:
    if (ctx->pc == 0x11A79Cu) {
        ctx->pc = 0x11A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A798u;
        // 0x11a79c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7A0u;
        goto label_11a7a0;
    }
    ctx->pc = 0x11A798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A7A0u);
        ctx->pc = 0x11A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A798u;
        // 0x11a79c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A798u, 0x11A7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A7A0u;
label_11a7a0:
    // 0x11a7a0: 0x8f868970  lw          $a2, -0x7690($gp)
    ctx->pc = 0x11a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a7a4:
    // 0x11a7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a7a8:
    // 0x11a7a8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11a7ac:
    // 0x11a7ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x11a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_11a7b0:
    // 0x11a7b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11a7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11a7b4:
    // 0x11a7b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a7b8:
    // 0x11a7b8: 0x60f809  jalr        $v1
label_11a7bc:
    if (ctx->pc == 0x11A7BCu) {
        ctx->pc = 0x11A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7B8u;
        // 0x11a7bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7C0u;
        goto label_11a7c0;
    }
    ctx->pc = 0x11A7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A7C0u);
        ctx->pc = 0x11A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7B8u;
        // 0x11a7bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A7B8u, 0x11A7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A7C0u;
label_11a7c0:
    // 0x11a7c0: 0x8f868970  lw          $a2, -0x7690($gp)
    ctx->pc = 0x11a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_11a7c4:
    // 0x11a7c4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11a7c8:
    // 0x11a7c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11a7cc:
    // 0x11a7cc: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_11a7d0:
    // 0x11a7d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11a7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11a7d4:
    // 0x11a7d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a7d8:
    // 0x11a7d8: 0x60f809  jalr        $v1
label_11a7dc:
    if (ctx->pc == 0x11A7DCu) {
        ctx->pc = 0x11A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7D8u;
        // 0x11a7dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7E0u;
        goto label_11a7e0;
    }
    ctx->pc = 0x11A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A7E0u);
        ctx->pc = 0x11A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7D8u;
        // 0x11a7dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A7D8u, 0x11A7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A7E0u;
label_11a7e0:
    // 0x11a7e0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x11a7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11a7e4:
    // 0x11a7e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a7e8:
    // 0x11a7e8: 0xc06406e  jal         func_1901B8
label_11a7ec:
    if (ctx->pc == 0x11A7ECu) {
        ctx->pc = 0x11A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7E8u;
        // 0x11a7ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A7F0u;
        goto label_11a7f0;
    }
    ctx->pc = 0x11A7E8u;
    SET_GPR_U32(ctx, 31, 0x11A7F0u);
    ctx->pc = 0x11A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7E8u;
    // 0x11a7ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x11A7E8u, 0x11A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7F0u;
label_11a7f0:
    // 0x11a7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a7f4:
    // 0x11a7f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a7f8:
    // 0x11a7f8: 0x27868980  addiu       $a2, $gp, -0x7680
    ctx->pc = 0x11a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936960));
label_11a7fc:
    // 0x11a7fc: 0xc0640d6  jal         func_190358
label_11a800:
    if (ctx->pc == 0x11A800u) {
        ctx->pc = 0x11A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7FCu;
        // 0x11a800: 0xaf828978  sw          $v0, -0x7688($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A804u;
        goto label_11a804;
    }
    ctx->pc = 0x11A7FCu;
    SET_GPR_U32(ctx, 31, 0x11A804u);
    ctx->pc = 0x11A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A7FCu;
    // 0x11a800: 0xaf828978  sw          $v0, -0x7688($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A7FCu, 0x11A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A804u;
label_11a804:
    // 0x11a804: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11a804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11a808:
    // 0x11a808: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x11a808u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
label_11a80c:
    // 0x11a80c: 0x24c63620  addiu       $a2, $a2, 0x3620
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13856));
label_11a810:
    // 0x11a810: 0xc0640ca  jal         func_190328
label_11a814:
    if (ctx->pc == 0x11A814u) {
        ctx->pc = 0x11A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A810u;
        // 0x11a814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A818u;
        goto label_11a818;
    }
    ctx->pc = 0x11A810u;
    SET_GPR_U32(ctx, 31, 0x11A818u);
    ctx->pc = 0x11A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A810u;
    // 0x11a814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A810u, 0x11A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A818u;
label_11a818:
    // 0x11a818: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x11a818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
label_11a81c:
    // 0x11a81c: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x11a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11a820:
    // 0x11a820: 0x24c63630  addiu       $a2, $a2, 0x3630
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13872));
label_11a824:
    // 0x11a824: 0xc0640ca  jal         func_190328
label_11a828:
    if (ctx->pc == 0x11A828u) {
        ctx->pc = 0x11A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A824u;
        // 0x11a828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A82Cu;
        goto label_11a82c;
    }
    ctx->pc = 0x11A824u;
    SET_GPR_U32(ctx, 31, 0x11A82Cu);
    ctx->pc = 0x11A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A824u;
    // 0x11a828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A824u, 0x11A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A82Cu;
label_11a82c:
    // 0x11a82c: 0x8f878978  lw          $a3, -0x7688($gp)
    ctx->pc = 0x11a82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_11a830:
    // 0x11a830: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x11a830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11a834:
    // 0x11a834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a838:
    // 0x11a838: 0x24e40150  addiu       $a0, $a3, 0x150
    ctx->pc = 0x11a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_11a83c:
    // 0x11a83c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x11a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11a840:
    // 0x11a840: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11a840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_11a844:
    // 0x11a844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a848:
    // 0x11a848: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x11a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_11a84c:
    // 0x11a84c: 0xace8012c  sw          $t0, 0x12C($a3)
    ctx->pc = 0x11a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 300), GPR_U32(ctx, 8));
label_11a850:
    // 0x11a850: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x11a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_11a854:
    // 0x11a854: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x11a854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_11a858:
    // 0x11a858: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x11a858u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_11a85c:
    // 0x11a85c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
label_11a860:
    // 0x11a860: 0x261036b0  addiu       $s0, $s0, 0x36B0
    ctx->pc = 0x11a860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14000));
label_11a864:
    // 0x11a864: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x11a864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_11a868:
    // 0x11a868: 0x100f809  jalr        $t0
label_11a86c:
    if (ctx->pc == 0x11A86Cu) {
        ctx->pc = 0x11A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A868u;
        // 0x11a86c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A870u;
        goto label_11a870;
    }
    ctx->pc = 0x11A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x11A870u);
        ctx->pc = 0x11A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A868u;
        // 0x11a86c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A868u, 0x11A870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A870u;
label_11a870:
    // 0x11a870: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x11a870u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11a874:
    // 0x11a874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a878:
    // 0x11a878: 0xc06406e  jal         func_1901B8
label_11a87c:
    if (ctx->pc == 0x11A87Cu) {
        ctx->pc = 0x11A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A878u;
        // 0x11a87c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A880u;
        goto label_11a880;
    }
    ctx->pc = 0x11A878u;
    SET_GPR_U32(ctx, 31, 0x11A880u);
    ctx->pc = 0x11A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A878u;
    // 0x11a87c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x11A878u, 0x11A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A880u;
label_11a880:
    // 0x11a880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a884:
    // 0x11a884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a888:
    // 0x11a888: 0x27868988  addiu       $a2, $gp, -0x7678
    ctx->pc = 0x11a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936968));
label_11a88c:
    // 0x11a88c: 0xc0640d6  jal         func_190358
label_11a890:
    if (ctx->pc == 0x11A890u) {
        ctx->pc = 0x11A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A88Cu;
        // 0x11a890: 0xaf828974  sw          $v0, -0x768C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A894u;
        goto label_11a894;
    }
    ctx->pc = 0x11A88Cu;
    SET_GPR_U32(ctx, 31, 0x11A894u);
    ctx->pc = 0x11A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A88Cu;
    // 0x11a890: 0xaf828974  sw          $v0, -0x768C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x11A88Cu, 0x11A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A894u;
label_11a894:
    // 0x11a894: 0x8f848974  lw          $a0, -0x768C($gp)
    ctx->pc = 0x11a894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a898:
    // 0x11a898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a89c:
    // 0x11a89c: 0xc0640ca  jal         func_190328
label_11a8a0:
    if (ctx->pc == 0x11A8A0u) {
        ctx->pc = 0x11A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A89Cu;
        // 0x11a8a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8A4u;
        goto label_11a8a4;
    }
    ctx->pc = 0x11A89Cu;
    SET_GPR_U32(ctx, 31, 0x11A8A4u);
    ctx->pc = 0x11A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A89Cu;
    // 0x11a8a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A89Cu, 0x11A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8A4u;
label_11a8a4:
    // 0x11a8a4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x11a8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_11a8a8:
    // 0x11a8a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_11a8ac:
    // 0x11a8ac: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x11a8acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
label_11a8b0:
    // 0x11a8b0: 0x8f848974  lw          $a0, -0x768C($gp)
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a8b4:
    // 0x11a8b4: 0x263136c0  addiu       $s1, $s1, 0x36C0
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
label_11a8b8:
    // 0x11a8b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11a8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11a8bc:
    // 0x11a8bc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a8c0:
    // 0x11a8c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a8c4:
    // 0x11a8c4: 0xc0640ca  jal         func_190328
label_11a8c8:
    if (ctx->pc == 0x11A8C8u) {
        ctx->pc = 0x11A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8C4u;
        // 0x11a8c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8CCu;
        goto label_11a8cc;
    }
    ctx->pc = 0x11A8C4u;
    SET_GPR_U32(ctx, 31, 0x11A8CCu);
    ctx->pc = 0x11A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8C4u;
    // 0x11a8c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A8C4u, 0x11A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8CCu;
label_11a8cc:
    // 0x11a8cc: 0x8f848974  lw          $a0, -0x768C($gp)
    ctx->pc = 0x11a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a8d0:
    // 0x11a8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a8d4:
    // 0x11a8d4: 0xc0640ca  jal         func_190328
label_11a8d8:
    if (ctx->pc == 0x11A8D8u) {
        ctx->pc = 0x11A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D4u;
        // 0x11a8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8DCu;
        goto label_11a8dc;
    }
    ctx->pc = 0x11A8D4u;
    SET_GPR_U32(ctx, 31, 0x11A8DCu);
    ctx->pc = 0x11A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8D4u;
    // 0x11a8d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A8D4u, 0x11A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8DCu;
label_11a8dc:
    // 0x11a8dc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x11a8dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_11a8e0:
    // 0x11a8e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_11a8e4:
    // 0x11a8e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x11a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a8e8:
    // 0x11a8e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11a8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11a8ec:
    // 0x11a8ec: 0x8f848974  lw          $a0, -0x768C($gp)
    ctx->pc = 0x11a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a8f0:
    // 0x11a8f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11a8f4:
    // 0x11a8f4: 0xc0640ca  jal         func_190328
label_11a8f8:
    if (ctx->pc == 0x11A8F8u) {
        ctx->pc = 0x11A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F4u;
        // 0x11a8f8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8FCu;
        goto label_11a8fc;
    }
    ctx->pc = 0x11A8F4u;
    SET_GPR_U32(ctx, 31, 0x11A8FCu);
    ctx->pc = 0x11A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8F4u;
    // 0x11a8f8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A8F4u, 0x11A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8FCu;
label_11a8fc:
    // 0x11a8fc: 0x8f848974  lw          $a0, -0x768C($gp)
    ctx->pc = 0x11a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a900:
    // 0x11a900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a904:
    // 0x11a904: 0xc0640ca  jal         func_190328
label_11a908:
    if (ctx->pc == 0x11A908u) {
        ctx->pc = 0x11A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A904u;
        // 0x11a908: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A90Cu;
        goto label_11a90c;
    }
    ctx->pc = 0x11A904u;
    SET_GPR_U32(ctx, 31, 0x11A90Cu);
    ctx->pc = 0x11A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A904u;
    // 0x11a908: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x11A904u, 0x11A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A90Cu;
label_11a90c:
    // 0x11a90c: 0x8f878974  lw          $a3, -0x768C($gp)
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_11a910:
    // 0x11a910: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x11a910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11a914:
    // 0x11a914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a918:
    // 0x11a918: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x11a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11a91c:
    // 0x11a91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a920:
    // 0x11a920: 0xace3012c  sw          $v1, 0x12C($a3)
    ctx->pc = 0x11a920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 300), GPR_U32(ctx, 3));
label_11a924:
    // 0x11a924: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_11a928:
    // 0x11a928: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11a92c:
    // 0x11a92c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a930:
    // 0x11a930: 0x60f809  jalr        $v1
label_11a934:
    if (ctx->pc == 0x11A934u) {
        ctx->pc = 0x11A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A930u;
        // 0x11a934: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A938u;
        goto label_11a938;
    }
    ctx->pc = 0x11A930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11A938u);
        ctx->pc = 0x11A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A930u;
        // 0x11a934: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A930u, 0x11A938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A938u;
label_11a938:
    // 0x11a938: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11a938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11a93c:
    // 0x11a93c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11a93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11a940:
    // 0x11a940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11a944:
    // 0x11a944: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11a944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_11a948:
    // 0x11a948: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11a94c:
    // 0x11a94c: 0x3e00008  jr          $ra
label_11a950:
    if (ctx->pc == 0x11A950u) {
        ctx->pc = 0x11A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A94Cu;
        // 0x11a950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A954u;
        goto label_fallthrough_0x11a94c;
    }
    ctx->pc = 0x11A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A94Cu;
        // 0x11a950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11a94c:
    ctx->pc = 0x11A954u;
}
