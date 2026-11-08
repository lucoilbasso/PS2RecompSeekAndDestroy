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

// Function: WSequenceFrameProcedure__FP10WcSequence
// Address: 0x199148 - 0x19937c
void WSequenceFrameProcedure__FP10WcSequence_0x199148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSequenceFrameProcedure__FP10WcSequence_0x199148");
#endif

    switch (ctx->pc) {
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        case 0x199208u: goto label_199208;
        case 0x19920cu: goto label_19920c;
        case 0x199210u: goto label_199210;
        case 0x199214u: goto label_199214;
        case 0x199218u: goto label_199218;
        case 0x19921cu: goto label_19921c;
        case 0x199220u: goto label_199220;
        case 0x199224u: goto label_199224;
        case 0x199228u: goto label_199228;
        case 0x19922cu: goto label_19922c;
        case 0x199230u: goto label_199230;
        case 0x199234u: goto label_199234;
        case 0x199238u: goto label_199238;
        case 0x19923cu: goto label_19923c;
        case 0x199240u: goto label_199240;
        case 0x199244u: goto label_199244;
        case 0x199248u: goto label_199248;
        case 0x19924cu: goto label_19924c;
        case 0x199250u: goto label_199250;
        case 0x199254u: goto label_199254;
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        default: break;
    }

    ctx->pc = 0x199148u;

label_199148:
    // 0x199148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19914c:
    // 0x19914c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x19914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_199150:
    // 0x199150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199154:
    // 0x199154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199158:
    // 0x199158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19915c:
    // 0x19915c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_199160:
    // 0x199160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199164:
    // 0x199164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_199168:
    // 0x199168: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x199168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_19916c:
    // 0x19916c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_199170:
    // 0x199170: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x199170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_199174:
    // 0x199174: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x199174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_199178:
    // 0x199178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19917c:
    // 0x19917c: 0x8c52001c  lw          $s2, 0x1C($v0)
    ctx->pc = 0x19917cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_199180:
    // 0x199180: 0xc0684fe  jal         func_1A13F8
label_199184:
    if (ctx->pc == 0x199184u) {
        ctx->pc = 0x199184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199180u;
        // 0x199184: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199188u;
        goto label_199188;
    }
    ctx->pc = 0x199180u;
    SET_GPR_U32(ctx, 31, 0x199188u);
    ctx->pc = 0x199184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199180u;
    // 0x199184: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x199180u, 0x199188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199188u;
label_199188:
    // 0x199188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19918c:
    // 0x19918c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19918cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_199190:
    // 0x199190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x199190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_199194:
    // 0x199194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_199198:
    // 0x199198: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x199198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_19919c:
    // 0x19919c: 0xc05dcd0  jal         func_177340
label_1991a0:
    if (ctx->pc == 0x1991A0u) {
        ctx->pc = 0x1991A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19919Cu;
        // 0x1991a0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991A4u;
        goto label_1991a4;
    }
    ctx->pc = 0x19919Cu;
    SET_GPR_U32(ctx, 31, 0x1991A4u);
    ctx->pc = 0x1991A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19919Cu;
    // 0x1991a0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177340u, 0x19919Cu, 0x1991A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991A4u;
label_1991a4:
    // 0x1991a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1991a8:
    // 0x1991a8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_1991ac:
    if (ctx->pc == 0x1991ACu) {
        ctx->pc = 0x1991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991A8u;
        // 0x1991ac: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991B0u;
        goto label_1991b0;
    }
    ctx->pc = 0x1991A8u;
    {
        const bool branch_taken_0x1991a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991A8u;
        // 0x1991ac: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991a8) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x1991B0u;
label_1991b0:
    // 0x1991b0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1991b4:
    // 0x1991b4: 0x3c14ffbf  lui         $s4, 0xFFBF
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65471 << 16));
label_1991b8:
    // 0x1991b8: 0x2457d640  addiu       $s7, $v0, -0x29C0
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_1991bc:
    // 0x1991bc: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_1991c0:
    // 0x1991c0: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
label_1991c4:
    // 0x1991c4: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_1991c8:
    // 0x1991c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1991cc:
    // 0x1991cc: 0x0  nop
    ctx->pc = 0x1991ccu;
    // NOP
label_1991d0:
    // 0x1991d0: 0xc05be74  jal         func_16F9D0
label_1991d4:
    if (ctx->pc == 0x1991D4u) {
        ctx->pc = 0x1991D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991D0u;
        // 0x1991d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991D8u;
        goto label_1991d8;
    }
    ctx->pc = 0x1991D0u;
    SET_GPR_U32(ctx, 31, 0x1991D8u);
    ctx->pc = 0x1991D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991D0u;
    // 0x1991d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x1991D0u, 0x1991D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991D8u;
label_1991d8:
    // 0x1991d8: 0xc05dcd6  jal         func_177358
label_1991dc:
    if (ctx->pc == 0x1991DCu) {
        ctx->pc = 0x1991DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991D8u;
        // 0x1991dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991E0u;
        goto label_1991e0;
    }
    ctx->pc = 0x1991D8u;
    SET_GPR_U32(ctx, 31, 0x1991E0u);
    ctx->pc = 0x1991DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991D8u;
    // 0x1991dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177358u, 0x1991D8u, 0x1991E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E0u;
label_1991e0:
    // 0x1991e0: 0xaed7d640  sw          $s7, -0x29C0($s6)
    ctx->pc = 0x1991e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956608), GPR_U32(ctx, 23));
label_1991e4:
    // 0x1991e4: 0xc05df26  jal         func_177C98
label_1991e8:
    if (ctx->pc == 0x1991E8u) {
        ctx->pc = 0x1991E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991E4u;
        // 0x1991e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991ECu;
        goto label_1991ec;
    }
    ctx->pc = 0x1991E4u;
    SET_GPR_U32(ctx, 31, 0x1991ECu);
    ctx->pc = 0x1991E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991E4u;
    // 0x1991e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C98u, 0x1991E4u, 0x1991ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991ECu;
label_1991ec:
    // 0x1991ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1991f0:
    // 0x1991f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1991f4:
    if (ctx->pc == 0x1991F4u) {
        ctx->pc = 0x1991F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991F0u;
        // 0x1991f4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991F8u;
        goto label_1991f8;
    }
    ctx->pc = 0x1991F0u;
    {
        const bool branch_taken_0x1991f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991f0) {
            ctx->pc = 0x1991F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1991F0u;
            // 0x1991f4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199224u;
            goto label_199224;
        }
    }
    ctx->pc = 0x1991F8u;
label_1991f8:
    // 0x1991f8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1991fc:
    if (ctx->pc == 0x1991FCu) {
        ctx->pc = 0x1991FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991F8u;
        // 0x1991fc: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199200u;
        goto label_199200;
    }
    ctx->pc = 0x1991F8u;
    {
        const bool branch_taken_0x1991f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1991FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991F8u;
        // 0x1991fc: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991f8) {
            ctx->pc = 0x199210u;
            goto label_199210;
        }
    }
    ctx->pc = 0x199200u;
label_199200:
    // 0x199200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199204:
    // 0x199204: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x199204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_199208:
    // 0x199208: 0x10000004  b           . + 4 + (0x4 << 2)
label_19920c:
    if (ctx->pc == 0x19920Cu) {
        ctx->pc = 0x19920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199208u;
        // 0x19920c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199210u;
        goto label_199210;
    }
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199208u;
        // 0x19920c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199208) {
            ctx->pc = 0x19921Cu;
            goto label_19921c;
        }
    }
    ctx->pc = 0x199210u;
label_199210:
    // 0x199210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199214:
    // 0x199214: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x199214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_199218:
    // 0x199218: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_19921c:
    // 0x19921c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x19921cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_199220:
    // 0x199220: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199224:
    // 0x199224: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x199224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_199228:
    // 0x199228: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_19922c:
    if (ctx->pc == 0x19922Cu) {
        ctx->pc = 0x19922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199228u;
        // 0x19922c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199230u;
        goto label_199230;
    }
    ctx->pc = 0x199228u;
    {
        const bool branch_taken_0x199228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199228u;
        // 0x19922c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199228) {
            ctx->pc = 0x199254u;
            goto label_199254;
        }
    }
    ctx->pc = 0x199230u;
label_199230:
    // 0x199230: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x199230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_199234:
    // 0x199234: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_199238:
    if (ctx->pc == 0x199238u) {
        ctx->pc = 0x199238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199234u;
        // 0x199238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19923Cu;
        goto label_19923c;
    }
    ctx->pc = 0x199234u;
    {
        const bool branch_taken_0x199234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199234) {
            ctx->pc = 0x199238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199234u;
            // 0x199238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199244u;
            goto label_199244;
        }
    }
    ctx->pc = 0x19923Cu;
label_19923c:
    // 0x19923c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_199240:
    // 0x199240: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199244:
    // 0x199244: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x199244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_199248:
    // 0x199248: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_19924c:
    // 0x19924c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x19924cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_199250:
    // 0x199250: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_199254:
    // 0x199254: 0xc05dd18  jal         func_177460
label_199258:
    if (ctx->pc == 0x199258u) {
        ctx->pc = 0x199258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199254u;
        // 0x199258: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19925Cu;
        goto label_19925c;
    }
    ctx->pc = 0x199254u;
    SET_GPR_U32(ctx, 31, 0x19925Cu);
    ctx->pc = 0x199258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199254u;
    // 0x199258: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199254u, 0x19925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19925Cu;
label_19925c:
    // 0x19925c: 0xc0664e0  jal         func_199380
label_199260:
    if (ctx->pc == 0x199260u) {
        ctx->pc = 0x199260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19925Cu;
        // 0x199260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199264u;
        goto label_199264;
    }
    ctx->pc = 0x19925Cu;
    SET_GPR_U32(ctx, 31, 0x199264u);
    ctx->pc = 0x199260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19925Cu;
    // 0x199260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199380u, 0x19925Cu, 0x199264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199264u;
label_199264:
    // 0x199264: 0xc05dd18  jal         func_177460
label_199268:
    if (ctx->pc == 0x199268u) {
        ctx->pc = 0x199268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199264u;
        // 0x199268: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19926Cu;
        goto label_19926c;
    }
    ctx->pc = 0x199264u;
    SET_GPR_U32(ctx, 31, 0x19926Cu);
    ctx->pc = 0x199268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199264u;
    // 0x199268: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199264u, 0x19926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19926Cu;
label_19926c:
    // 0x19926c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x19926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_199270:
    // 0x199270: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_199274:
    // 0x199274: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x199274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_199278:
    // 0x199278: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x199278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_19927c:
    // 0x19927c: 0xc06bd28  jal         func_1AF4A0
label_199280:
    if (ctx->pc == 0x199280u) {
        ctx->pc = 0x199280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19927Cu;
        // 0x199280: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199284u;
        goto label_199284;
    }
    ctx->pc = 0x19927Cu;
    SET_GPR_U32(ctx, 31, 0x199284u);
    ctx->pc = 0x199280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19927Cu;
    // 0x199280: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19927Cu, 0x199284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199284u;
label_199284:
    // 0x199284: 0xc06bd28  jal         func_1AF4A0
label_199288:
    if (ctx->pc == 0x199288u) {
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19928Cu;
        goto label_19928c;
    }
    ctx->pc = 0x199284u;
    SET_GPR_U32(ctx, 31, 0x19928Cu);
    ctx->pc = 0x199288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199284u;
    // 0x199288: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x199284u, 0x19928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0xc06bd28  jal         func_1AF4A0
label_199290:
    if (ctx->pc == 0x199290u) {
        ctx->pc = 0x199290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19928Cu;
        // 0x199290: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199294u;
        goto label_199294;
    }
    ctx->pc = 0x19928Cu;
    SET_GPR_U32(ctx, 31, 0x199294u);
    ctx->pc = 0x199290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19928Cu;
    // 0x199290: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19928Cu, 0x199294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199294u;
label_199294:
    // 0x199294: 0xc06bd28  jal         func_1AF4A0
label_199298:
    if (ctx->pc == 0x199298u) {
        ctx->pc = 0x199298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199294u;
        // 0x199298: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19929Cu;
        goto label_19929c;
    }
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 31, 0x19929Cu);
    ctx->pc = 0x199298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199294u;
    // 0x199298: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x199294u, 0x19929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1992a0:
    // 0x1992a0: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x1992a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_1992a4:
    // 0x1992a4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1992a8:
    // 0x1992a8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1992a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_1992ac:
    // 0x1992ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1992acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1992b0:
    // 0x1992b0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1992b4:
    if (ctx->pc == 0x1992B4u) {
        ctx->pc = 0x1992B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992B0u;
        // 0x1992b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992B8u;
        goto label_1992b8;
    }
    ctx->pc = 0x1992B0u;
    {
        const bool branch_taken_0x1992b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1992b0) {
            ctx->pc = 0x1992B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1992B0u;
            // 0x1992b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1992F4u;
            goto label_1992f4;
        }
    }
    ctx->pc = 0x1992B8u;
label_1992b8:
    // 0x1992b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1992b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1992bc:
    // 0x1992bc: 0xc05d9ee  jal         func_1767B8
label_1992c0:
    if (ctx->pc == 0x1992C0u) {
        ctx->pc = 0x1992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992BCu;
        // 0x1992c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992C4u;
        goto label_1992c4;
    }
    ctx->pc = 0x1992BCu;
    SET_GPR_U32(ctx, 31, 0x1992C4u);
    ctx->pc = 0x1992C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992BCu;
    // 0x1992c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x1992BCu, 0x1992C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992C4u;
label_1992c4:
    // 0x1992c4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1992c8:
    // 0x1992c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1992c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1992cc:
    // 0x1992cc: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1992d0:
    // 0x1992d0: 0xc05dcda  jal         func_177368
label_1992d4:
    if (ctx->pc == 0x1992D4u) {
        ctx->pc = 0x1992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992D0u;
        // 0x1992d4: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992D8u;
        goto label_1992d8;
    }
    ctx->pc = 0x1992D0u;
    SET_GPR_U32(ctx, 31, 0x1992D8u);
    ctx->pc = 0x1992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992D0u;
    // 0x1992d4: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177368u, 0x1992D0u, 0x1992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992D8u;
label_1992d8:
    // 0x1992d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1992dc:
    // 0x1992dc: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_1992e0:
    // 0x1992e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1992e4:
    // 0x1992e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1992e8:
    // 0x1992e8: 0x40f809  jalr        $v0
label_1992ec:
    if (ctx->pc == 0x1992ECu) {
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992F0u;
        goto label_1992f0;
    }
    ctx->pc = 0x1992E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1992F0u);
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992E8u;
        // 0x1992ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1992E8u, 0x1992F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1992F0u;
label_1992f0:
    // 0x1992f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1992f4:
    // 0x1992f4: 0xc06ab98  jal         func_1AAE60
label_1992f8:
    if (ctx->pc == 0x1992F8u) {
        ctx->pc = 0x1992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992F4u;
        // 0x1992f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992FCu;
        goto label_1992fc;
    }
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x1992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992F4u;
    // 0x1992f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0xc06bd20  jal         func_1AF480
label_199300:
    if (ctx->pc == 0x199300u) {
        ctx->pc = 0x199300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992FCu;
        // 0x199300: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199304u;
        goto label_199304;
    }
    ctx->pc = 0x1992FCu;
    SET_GPR_U32(ctx, 31, 0x199304u);
    ctx->pc = 0x199300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992FCu;
    // 0x199300: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1992FCu, 0x199304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199304u;
label_199304:
    // 0x199304: 0xc06bd20  jal         func_1AF480
label_199308:
    if (ctx->pc == 0x199308u) {
        ctx->pc = 0x199308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199304u;
        // 0x199308: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19930Cu;
        goto label_19930c;
    }
    ctx->pc = 0x199304u;
    SET_GPR_U32(ctx, 31, 0x19930Cu);
    ctx->pc = 0x199308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199304u;
    // 0x199308: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x199304u, 0x19930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19930Cu;
label_19930c:
    // 0x19930c: 0xc06bd20  jal         func_1AF480
label_199310:
    if (ctx->pc == 0x199310u) {
        ctx->pc = 0x199310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19930Cu;
        // 0x199310: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199314u;
        goto label_199314;
    }
    ctx->pc = 0x19930Cu;
    SET_GPR_U32(ctx, 31, 0x199314u);
    ctx->pc = 0x199310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19930Cu;
    // 0x199310: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19930Cu, 0x199314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199314u;
label_199314:
    // 0x199314: 0xc06bd20  jal         func_1AF480
label_199318:
    if (ctx->pc == 0x199318u) {
        ctx->pc = 0x199318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199314u;
        // 0x199318: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19931Cu;
        goto label_19931c;
    }
    ctx->pc = 0x199314u;
    SET_GPR_U32(ctx, 31, 0x19931Cu);
    ctx->pc = 0x199318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199314u;
    // 0x199318: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x199314u, 0x19931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19931Cu;
label_19931c:
    // 0x19931c: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x19931cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_199320:
    // 0x199320: 0xc05dd18  jal         func_177460
label_199324:
    if (ctx->pc == 0x199324u) {
        ctx->pc = 0x199324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199320u;
        // 0x199324: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199328u;
        goto label_199328;
    }
    ctx->pc = 0x199320u;
    SET_GPR_U32(ctx, 31, 0x199328u);
    ctx->pc = 0x199324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199320u;
    // 0x199324: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x199320u, 0x199328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199328u;
label_199328:
    // 0x199328: 0xc05db9a  jal         func_176E68
label_19932c:
    if (ctx->pc == 0x19932Cu) {
        ctx->pc = 0x19932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199328u;
        // 0x19932c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199330u;
        goto label_199330;
    }
    ctx->pc = 0x199328u;
    SET_GPR_U32(ctx, 31, 0x199330u);
    ctx->pc = 0x19932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199328u;
    // 0x19932c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E68u, 0x199328u, 0x199330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199330u;
label_199330:
    // 0x199330: 0xc05dcd8  jal         func_177360
label_199334:
    if (ctx->pc == 0x199334u) {
        ctx->pc = 0x199334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199330u;
        // 0x199334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199338u;
        goto label_199338;
    }
    ctx->pc = 0x199330u;
    SET_GPR_U32(ctx, 31, 0x199338u);
    ctx->pc = 0x199334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199330u;
    // 0x199334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177360u, 0x199330u, 0x199338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199338u;
label_199338:
    // 0x199338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19933c:
    // 0x19933c: 0xc05db08  jal         func_176C20
label_199340:
    if (ctx->pc == 0x199340u) {
        ctx->pc = 0x199340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19933Cu;
        // 0x199340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199344u;
        goto label_199344;
    }
    ctx->pc = 0x19933Cu;
    SET_GPR_U32(ctx, 31, 0x199344u);
    ctx->pc = 0x199340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19933Cu;
    // 0x199340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C20u, 0x19933Cu, 0x199344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_199348:
    // 0x199348: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
label_19934c:
    if (ctx->pc == 0x19934Cu) {
        ctx->pc = 0x19934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199348u;
        // 0x19934c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199350u;
        goto label_199350;
    }
    ctx->pc = 0x199348u;
    {
        const bool branch_taken_0x199348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199348) {
            ctx->pc = 0x19934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199348u;
            // 0x19934c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1991D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991d0;
        }
    }
    ctx->pc = 0x199350u;
label_199350:
    // 0x199350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199354:
    // 0x199354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199358:
    // 0x199358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19935c:
    // 0x19935c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19935cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199360:
    // 0x199360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x199360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199364:
    // 0x199364: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_199368:
    // 0x199368: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x199368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19936c:
    // 0x19936c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x19936cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_199370:
    // 0x199370: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_199374:
    // 0x199374: 0x3e00008  jr          $ra
label_199378:
    if (ctx->pc == 0x199378u) {
        ctx->pc = 0x199378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199374u;
        // 0x199378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19937Cu;
        goto label_fallthrough_0x199374;
    }
    ctx->pc = 0x199374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199374u;
        // 0x199378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199374:
    ctx->pc = 0x19937Cu;
}
