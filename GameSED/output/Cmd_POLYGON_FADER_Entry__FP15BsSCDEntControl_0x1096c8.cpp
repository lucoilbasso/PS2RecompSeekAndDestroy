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

// Function: Cmd_POLYGON_FADER_Entry__FP15BsSCDEntControl
// Address: 0x1096c8 - 0x1098f8
void Cmd_POLYGON_FADER_Entry__FP15BsSCDEntControl_0x1096c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_FADER_Entry__FP15BsSCDEntControl_0x1096c8");
#endif

    switch (ctx->pc) {
        case 0x1096c8u: goto label_1096c8;
        case 0x1096ccu: goto label_1096cc;
        case 0x1096d0u: goto label_1096d0;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096dcu: goto label_1096dc;
        case 0x1096e0u: goto label_1096e0;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096e8u: goto label_1096e8;
        case 0x1096ecu: goto label_1096ec;
        case 0x1096f0u: goto label_1096f0;
        case 0x1096f4u: goto label_1096f4;
        case 0x1096f8u: goto label_1096f8;
        case 0x1096fcu: goto label_1096fc;
        case 0x109700u: goto label_109700;
        case 0x109704u: goto label_109704;
        case 0x109708u: goto label_109708;
        case 0x10970cu: goto label_10970c;
        case 0x109710u: goto label_109710;
        case 0x109714u: goto label_109714;
        case 0x109718u: goto label_109718;
        case 0x10971cu: goto label_10971c;
        case 0x109720u: goto label_109720;
        case 0x109724u: goto label_109724;
        case 0x109728u: goto label_109728;
        case 0x10972cu: goto label_10972c;
        case 0x109730u: goto label_109730;
        case 0x109734u: goto label_109734;
        case 0x109738u: goto label_109738;
        case 0x10973cu: goto label_10973c;
        case 0x109740u: goto label_109740;
        case 0x109744u: goto label_109744;
        case 0x109748u: goto label_109748;
        case 0x10974cu: goto label_10974c;
        case 0x109750u: goto label_109750;
        case 0x109754u: goto label_109754;
        case 0x109758u: goto label_109758;
        case 0x10975cu: goto label_10975c;
        case 0x109760u: goto label_109760;
        case 0x109764u: goto label_109764;
        case 0x109768u: goto label_109768;
        case 0x10976cu: goto label_10976c;
        case 0x109770u: goto label_109770;
        case 0x109774u: goto label_109774;
        case 0x109778u: goto label_109778;
        case 0x10977cu: goto label_10977c;
        case 0x109780u: goto label_109780;
        case 0x109784u: goto label_109784;
        case 0x109788u: goto label_109788;
        case 0x10978cu: goto label_10978c;
        case 0x109790u: goto label_109790;
        case 0x109794u: goto label_109794;
        case 0x109798u: goto label_109798;
        case 0x10979cu: goto label_10979c;
        case 0x1097a0u: goto label_1097a0;
        case 0x1097a4u: goto label_1097a4;
        case 0x1097a8u: goto label_1097a8;
        case 0x1097acu: goto label_1097ac;
        case 0x1097b0u: goto label_1097b0;
        case 0x1097b4u: goto label_1097b4;
        case 0x1097b8u: goto label_1097b8;
        case 0x1097bcu: goto label_1097bc;
        case 0x1097c0u: goto label_1097c0;
        case 0x1097c4u: goto label_1097c4;
        case 0x1097c8u: goto label_1097c8;
        case 0x1097ccu: goto label_1097cc;
        case 0x1097d0u: goto label_1097d0;
        case 0x1097d4u: goto label_1097d4;
        case 0x1097d8u: goto label_1097d8;
        case 0x1097dcu: goto label_1097dc;
        case 0x1097e0u: goto label_1097e0;
        case 0x1097e4u: goto label_1097e4;
        case 0x1097e8u: goto label_1097e8;
        case 0x1097ecu: goto label_1097ec;
        case 0x1097f0u: goto label_1097f0;
        case 0x1097f4u: goto label_1097f4;
        case 0x1097f8u: goto label_1097f8;
        case 0x1097fcu: goto label_1097fc;
        case 0x109800u: goto label_109800;
        case 0x109804u: goto label_109804;
        case 0x109808u: goto label_109808;
        case 0x10980cu: goto label_10980c;
        case 0x109810u: goto label_109810;
        case 0x109814u: goto label_109814;
        case 0x109818u: goto label_109818;
        case 0x10981cu: goto label_10981c;
        case 0x109820u: goto label_109820;
        case 0x109824u: goto label_109824;
        case 0x109828u: goto label_109828;
        case 0x10982cu: goto label_10982c;
        case 0x109830u: goto label_109830;
        case 0x109834u: goto label_109834;
        case 0x109838u: goto label_109838;
        case 0x10983cu: goto label_10983c;
        case 0x109840u: goto label_109840;
        case 0x109844u: goto label_109844;
        case 0x109848u: goto label_109848;
        case 0x10984cu: goto label_10984c;
        case 0x109850u: goto label_109850;
        case 0x109854u: goto label_109854;
        case 0x109858u: goto label_109858;
        case 0x10985cu: goto label_10985c;
        case 0x109860u: goto label_109860;
        case 0x109864u: goto label_109864;
        case 0x109868u: goto label_109868;
        case 0x10986cu: goto label_10986c;
        case 0x109870u: goto label_109870;
        case 0x109874u: goto label_109874;
        case 0x109878u: goto label_109878;
        case 0x10987cu: goto label_10987c;
        case 0x109880u: goto label_109880;
        case 0x109884u: goto label_109884;
        case 0x109888u: goto label_109888;
        case 0x10988cu: goto label_10988c;
        case 0x109890u: goto label_109890;
        case 0x109894u: goto label_109894;
        case 0x109898u: goto label_109898;
        case 0x10989cu: goto label_10989c;
        case 0x1098a0u: goto label_1098a0;
        case 0x1098a4u: goto label_1098a4;
        case 0x1098a8u: goto label_1098a8;
        case 0x1098acu: goto label_1098ac;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098b4u: goto label_1098b4;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098bcu: goto label_1098bc;
        case 0x1098c0u: goto label_1098c0;
        case 0x1098c4u: goto label_1098c4;
        case 0x1098c8u: goto label_1098c8;
        case 0x1098ccu: goto label_1098cc;
        case 0x1098d0u: goto label_1098d0;
        case 0x1098d4u: goto label_1098d4;
        case 0x1098d8u: goto label_1098d8;
        case 0x1098dcu: goto label_1098dc;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098e4u: goto label_1098e4;
        case 0x1098e8u: goto label_1098e8;
        case 0x1098ecu: goto label_1098ec;
        case 0x1098f0u: goto label_1098f0;
        case 0x1098f4u: goto label_1098f4;
        default: break;
    }

    ctx->pc = 0x1096c8u;

label_1096c8:
    // 0x1096c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1096c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1096cc:
    // 0x1096cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1096ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1096d0:
    // 0x1096d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1096d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1096d4:
    // 0x1096d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1096d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1096d8:
    // 0x1096d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1096d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1096dc:
    // 0x1096dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1096dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1096e0:
    // 0x1096e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1096e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1096e4:
    // 0x1096e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1096e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1096e8:
    // 0x1096e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1096e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1096ec:
    // 0x1096ec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1096ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1096f0:
    // 0x1096f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1096f4:
    // 0x1096f4: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
label_1096f8:
    if (ctx->pc == 0x1096F8u) {
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F4u;
        // 0x1096f8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096FCu;
        goto label_1096fc;
    }
    ctx->pc = 0x1096F4u;
    {
        const bool branch_taken_0x1096f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F4u;
        // 0x1096f8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096f4) {
            ctx->pc = 0x109890u;
            goto label_109890;
        }
    }
    ctx->pc = 0x1096FCu;
label_1096fc:
    // 0x1096fc: 0xc06a26e  jal         func_1A89B8
label_109700:
    if (ctx->pc == 0x109700u) {
        ctx->pc = 0x109700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096FCu;
        // 0x109700: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109704u;
        goto label_109704;
    }
    ctx->pc = 0x1096FCu;
    SET_GPR_U32(ctx, 31, 0x109704u);
    ctx->pc = 0x109700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1096FCu;
    // 0x109700: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1096FCu, 0x109704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109704u;
label_109704:
    // 0x109704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109708:
    // 0x109708: 0xc06a26e  jal         func_1A89B8
label_10970c:
    if (ctx->pc == 0x10970Cu) {
        ctx->pc = 0x10970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109708u;
        // 0x10970c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109710u;
        goto label_109710;
    }
    ctx->pc = 0x109708u;
    SET_GPR_U32(ctx, 31, 0x109710u);
    ctx->pc = 0x10970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109708u;
    // 0x10970c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109708u, 0x109710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109710u;
label_109710:
    // 0x109710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x109710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_109714:
    // 0x109714: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x109714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_109718:
    // 0x109718: 0xc06406e  jal         func_1901B8
label_10971c:
    if (ctx->pc == 0x10971Cu) {
        ctx->pc = 0x10971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109718u;
        // 0x10971c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109720u;
        goto label_109720;
    }
    ctx->pc = 0x109718u;
    SET_GPR_U32(ctx, 31, 0x109720u);
    ctx->pc = 0x10971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109718u;
    // 0x10971c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x109718u, 0x109720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109720u;
label_109720:
    // 0x109720: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
label_109724:
    // 0x109724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x109724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_109728:
    // 0x109728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10972c:
    // 0x10972c: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
label_109730:
    // 0x109730: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x109730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_109734:
    // 0x109734: 0xc063d1e  jal         func_18F478
label_109738:
    if (ctx->pc == 0x109738u) {
        ctx->pc = 0x109738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109734u;
        // 0x109738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10973Cu;
        goto label_10973c;
    }
    ctx->pc = 0x109734u;
    SET_GPR_U32(ctx, 31, 0x10973Cu);
    ctx->pc = 0x109738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109734u;
    // 0x109738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F478u, 0x109734u, 0x10973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10973Cu;
label_10973c:
    // 0x10973c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_109740:
    // 0x109740: 0x8c43d638  lw          $v1, -0x29C8($v0)
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956600)));
label_109744:
    // 0x109744: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_109748:
    // 0x109748: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x109748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10974c:
    // 0x10974c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10974cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_109750:
    // 0x109750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109754:
    // 0x109754: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
label_109758:
    if (ctx->pc == 0x109758u) {
        ctx->pc = 0x109758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109754u;
        // 0x109758: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10975Cu;
        goto label_10975c;
    }
    ctx->pc = 0x109754u;
    {
        const bool branch_taken_0x109754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x109754) {
            ctx->pc = 0x109758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109754u;
            // 0x109758: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109770u;
            goto label_109770;
        }
    }
    ctx->pc = 0x10975Cu;
label_10975c:
    // 0x10975c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109760:
    // 0x109760: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109764:
    // 0x109764: 0xc0416ee  jal         func_105BB8
label_109768:
    if (ctx->pc == 0x109768u) {
        ctx->pc = 0x109768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109764u;
        // 0x109768: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10976Cu;
        goto label_10976c;
    }
    ctx->pc = 0x109764u;
    SET_GPR_U32(ctx, 31, 0x10976Cu);
    ctx->pc = 0x109768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109764u;
    // 0x109768: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x109764u, 0x10976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10976Cu;
label_10976c:
    // 0x10976c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109770:
    // 0x109770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109774:
    // 0x109774: 0xc0640d6  jal         func_190358
label_109778:
    if (ctx->pc == 0x109778u) {
        ctx->pc = 0x109778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109774u;
        // 0x109778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10977Cu;
        goto label_10977c;
    }
    ctx->pc = 0x109774u;
    SET_GPR_U32(ctx, 31, 0x10977Cu);
    ctx->pc = 0x109778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109774u;
    // 0x109778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109774u, 0x10977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10977Cu;
label_10977c:
    // 0x10977c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109780:
    // 0x109780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109784:
    // 0x109784: 0xc040ce8  jal         func_1033A0
label_109788:
    if (ctx->pc == 0x109788u) {
        ctx->pc = 0x109788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109784u;
        // 0x109788: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10978Cu;
        goto label_10978c;
    }
    ctx->pc = 0x109784u;
    SET_GPR_U32(ctx, 31, 0x10978Cu);
    ctx->pc = 0x109788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109784u;
    // 0x109788: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109784u, 0x10978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10978Cu;
label_10978c:
    // 0x10978c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_109790:
    // 0x109790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109794:
    // 0x109794: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_109798:
    // 0x109798: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10979c:
    // 0x10979c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097a0:
    // 0x1097a0: 0x60f809  jalr        $v1
label_1097a4:
    if (ctx->pc == 0x1097A4u) {
        ctx->pc = 0x1097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A0u;
        // 0x1097a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097A8u;
        goto label_1097a8;
    }
    ctx->pc = 0x1097A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097A8u);
        ctx->pc = 0x1097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A0u;
        // 0x1097a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097A0u, 0x1097A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097A8u;
label_1097a8:
    // 0x1097a8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_1097ac:
    if (ctx->pc == 0x1097ACu) {
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097B0u;
        goto label_1097b0;
    }
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1097D8u;
            goto label_1097d8;
        }
    }
    ctx->pc = 0x1097B0u;
label_1097b0:
    // 0x1097b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1097b4:
    // 0x1097b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1097b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1097b8:
    // 0x1097b8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1097bc:
    // 0x1097bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1097bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1097c0:
    // 0x1097c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1097c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097c4:
    // 0x1097c4: 0x60f809  jalr        $v1
label_1097c8:
    if (ctx->pc == 0x1097C8u) {
        ctx->pc = 0x1097C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C4u;
        // 0x1097c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097CCu;
        goto label_1097cc;
    }
    ctx->pc = 0x1097C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097CCu);
        ctx->pc = 0x1097C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C4u;
        // 0x1097c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097C4u, 0x1097CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097CCu;
label_1097cc:
    // 0x1097cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1097d0:
    if (ctx->pc == 0x1097D0u) {
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097D4u;
        goto label_1097d4;
    }
    ctx->pc = 0x1097CCu;
    {
        const bool branch_taken_0x1097cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097cc) {
            ctx->pc = 0x109800u;
            goto label_109800;
        }
    }
    ctx->pc = 0x1097D4u;
label_1097d4:
    // 0x1097d4: 0x0  nop
    ctx->pc = 0x1097d4u;
    // NOP
label_1097d8:
    // 0x1097d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1097d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1097dc:
    // 0x1097dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1097dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1097e0:
    // 0x1097e0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x1097e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_1097e4:
    // 0x1097e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1097e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1097e8:
    // 0x1097e8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1097e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1097ec:
    // 0x1097ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1097ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1097f0:
    // 0x1097f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1097f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097f4:
    // 0x1097f4: 0x60f809  jalr        $v1
label_1097f8:
    if (ctx->pc == 0x1097F8u) {
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097FCu;
        goto label_1097fc;
    }
    ctx->pc = 0x1097F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097FCu);
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097F4u, 0x1097FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097FCu;
label_1097fc:
    // 0x1097fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1097fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109800:
    // 0x109800: 0xc04201a  jal         func_108068
label_109804:
    if (ctx->pc == 0x109804u) {
        ctx->pc = 0x109804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109800u;
        // 0x109804: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109808u;
        goto label_109808;
    }
    ctx->pc = 0x109800u;
    SET_GPR_U32(ctx, 31, 0x109808u);
    ctx->pc = 0x109804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109800u;
    // 0x109804: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x109800u, 0x109808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109808u;
label_109808:
    // 0x109808: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_10980c:
    // 0x10980c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10980cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109810:
    // 0x109810: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x109810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_109814:
    // 0x109814: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109818:
    // 0x109818: 0x50640013  beql        $v1, $a0, . + 4 + (0x13 << 2)
label_10981c:
    if (ctx->pc == 0x10981Cu) {
        ctx->pc = 0x10981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109818u;
        // 0x10981c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109820u;
        goto label_109820;
    }
    ctx->pc = 0x109818u;
    {
        const bool branch_taken_0x109818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x109818) {
            ctx->pc = 0x10981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109818u;
            // 0x10981c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109868u;
            goto label_109868;
        }
    }
    ctx->pc = 0x109820u;
label_109820:
    // 0x109820: 0xc06a26e  jal         func_1A89B8
label_109824:
    if (ctx->pc == 0x109824u) {
        ctx->pc = 0x109824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109820u;
        // 0x109824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109828u;
        goto label_109828;
    }
    ctx->pc = 0x109820u;
    SET_GPR_U32(ctx, 31, 0x109828u);
    ctx->pc = 0x109824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109820u;
    // 0x109824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109820u, 0x109828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109828u;
label_109828:
    // 0x109828: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_10982c:
    if (ctx->pc == 0x10982Cu) {
        ctx->pc = 0x10982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109828u;
        // 0x10982c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109830u;
        goto label_109830;
    }
    ctx->pc = 0x109828u;
    {
        const bool branch_taken_0x109828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109828u;
        // 0x10982c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109828) {
            ctx->pc = 0x109860u;
            goto label_109860;
        }
    }
    ctx->pc = 0x109830u;
label_109830:
    // 0x109830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109834:
    // 0x109834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_109838:
    // 0x109838: 0xc7818034  lwc1        $f1, -0x7FCC($gp)
    ctx->pc = 0x109838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10983c:
    // 0x10983c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_109840:
    // 0x109840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x109840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_109844:
    // 0x109844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x109844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_109848:
    // 0x109848: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x109848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_10984c:
    // 0x10984c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10984cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_109850:
    // 0x109850: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x109850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_109854:
    // 0x109854: 0x10000005  b           . + 4 + (0x5 << 2)
label_109858:
    if (ctx->pc == 0x109858u) {
        ctx->pc = 0x10985Cu;
        goto label_10985c;
    }
    ctx->pc = 0x109854u;
    {
        const bool branch_taken_0x109854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109854) {
            ctx->pc = 0x10986Cu;
            goto label_10986c;
        }
    }
    ctx->pc = 0x10985Cu;
label_10985c:
    // 0x10985c: 0x0  nop
    ctx->pc = 0x10985cu;
    // NOP
label_109860:
    // 0x109860: 0x10000004  b           . + 4 + (0x4 << 2)
label_109864:
    if (ctx->pc == 0x109864u) {
        ctx->pc = 0x109864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109860u;
        // 0x109864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109868u;
        goto label_109868;
    }
    ctx->pc = 0x109860u;
    {
        const bool branch_taken_0x109860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109860u;
        // 0x109864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109860) {
            ctx->pc = 0x109874u;
            goto label_109874;
        }
    }
    ctx->pc = 0x109868u;
label_109868:
    // 0x109868: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x109868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10986c:
    // 0x10986c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x10986cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_109870:
    // 0x109870: 0x23000  sll         $a2, $v0, 0
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_109874:
    // 0x109874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109878:
    // 0x109878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10987c:
    // 0x10987c: 0xc06927c  jal         func_1A49F0
label_109880:
    if (ctx->pc == 0x109880u) {
        ctx->pc = 0x109880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10987Cu;
        // 0x109880: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109884u;
        goto label_109884;
    }
    ctx->pc = 0x10987Cu;
    SET_GPR_U32(ctx, 31, 0x109884u);
    ctx->pc = 0x109880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10987Cu;
    // 0x109880: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49F0u, 0x10987Cu, 0x109884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109884u;
label_109884:
    // 0x109884: 0x10000014  b           . + 4 + (0x14 << 2)
label_109888:
    if (ctx->pc == 0x109888u) {
        ctx->pc = 0x109888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109884u;
        // 0x109888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10988Cu;
        goto label_10988c;
    }
    ctx->pc = 0x109884u;
    {
        const bool branch_taken_0x109884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109884u;
        // 0x109888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109884) {
            ctx->pc = 0x1098D8u;
            goto label_1098d8;
        }
    }
    ctx->pc = 0x10988Cu;
label_10988c:
    // 0x10988c: 0x0  nop
    ctx->pc = 0x10988cu;
    // NOP
label_109890:
    // 0x109890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109894:
    // 0x109894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109898:
    // 0x109898: 0xc04110c  jal         func_104430
label_10989c:
    if (ctx->pc == 0x10989Cu) {
        ctx->pc = 0x10989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109898u;
        // 0x10989c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098A0u;
        goto label_1098a0;
    }
    ctx->pc = 0x109898u;
    SET_GPR_U32(ctx, 31, 0x1098A0u);
    ctx->pc = 0x10989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109898u;
    // 0x10989c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109898u, 0x1098A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098A0u;
label_1098a0:
    // 0x1098a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1098a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1098a4:
    // 0x1098a4: 0xc06a26e  jal         func_1A89B8
label_1098a8:
    if (ctx->pc == 0x1098A8u) {
        ctx->pc = 0x1098A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098A4u;
        // 0x1098a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098ACu;
        goto label_1098ac;
    }
    ctx->pc = 0x1098A4u;
    SET_GPR_U32(ctx, 31, 0x1098ACu);
    ctx->pc = 0x1098A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098A4u;
    // 0x1098a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1098A4u, 0x1098ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098ACu;
label_1098ac:
    // 0x1098ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1098acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1098b0:
    // 0x1098b0: 0xc061a46  jal         func_186918
label_1098b4:
    if (ctx->pc == 0x1098B4u) {
        ctx->pc = 0x1098B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098B0u;
        // 0x1098b4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098B8u;
        goto label_1098b8;
    }
    ctx->pc = 0x1098B0u;
    SET_GPR_U32(ctx, 31, 0x1098B8u);
    ctx->pc = 0x1098B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098B0u;
    // 0x1098b4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1098B0u, 0x1098B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098B8u;
label_1098b8:
    // 0x1098b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1098b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1098bc:
    // 0x1098bc: 0xc06a250  jal         func_1A8940
label_1098c0:
    if (ctx->pc == 0x1098C0u) {
        ctx->pc = 0x1098C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098BCu;
        // 0x1098c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098C4u;
        goto label_1098c4;
    }
    ctx->pc = 0x1098BCu;
    SET_GPR_U32(ctx, 31, 0x1098C4u);
    ctx->pc = 0x1098C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098BCu;
    // 0x1098c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1098BCu, 0x1098C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098C4u;
label_1098c4:
    // 0x1098c4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_1098c8:
    if (ctx->pc == 0x1098C8u) {
        ctx->pc = 0x1098C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C4u;
        // 0x1098c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098CCu;
        goto label_1098cc;
    }
    ctx->pc = 0x1098C4u;
    {
        const bool branch_taken_0x1098c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C4u;
        // 0x1098c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098c4) {
            ctx->pc = 0x1098D0u;
            goto label_1098d0;
        }
    }
    ctx->pc = 0x1098CCu;
label_1098cc:
    // 0x1098cc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1098ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1098d0:
    // 0x1098d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1098d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1098d4:
    // 0x1098d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1098d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1098d8:
    // 0x1098d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1098d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1098dc:
    // 0x1098dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1098dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1098e0:
    // 0x1098e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1098e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1098e4:
    // 0x1098e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1098e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1098e8:
    // 0x1098e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1098e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1098ec:
    // 0x1098ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1098ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1098f0:
    // 0x1098f0: 0x3e00008  jr          $ra
label_1098f4:
    if (ctx->pc == 0x1098F4u) {
        ctx->pc = 0x1098F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F0u;
        // 0x1098f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098F8u;
        goto label_fallthrough_0x1098f0;
    }
    ctx->pc = 0x1098F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1098F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F0u;
        // 0x1098f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1098F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1098f0:
    ctx->pc = 0x1098F8u;
}
