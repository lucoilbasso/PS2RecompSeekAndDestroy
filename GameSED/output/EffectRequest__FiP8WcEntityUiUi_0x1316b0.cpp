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

// Function: EffectRequest__FiP8WcEntityUiUi
// Address: 0x1316b0 - 0x131938
void EffectRequest__FiP8WcEntityUiUi_0x1316b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRequest__FiP8WcEntityUiUi_0x1316b0");
#endif

    switch (ctx->pc) {
        case 0x1316b0u: goto label_1316b0;
        case 0x1316b4u: goto label_1316b4;
        case 0x1316b8u: goto label_1316b8;
        case 0x1316bcu: goto label_1316bc;
        case 0x1316c0u: goto label_1316c0;
        case 0x1316c4u: goto label_1316c4;
        case 0x1316c8u: goto label_1316c8;
        case 0x1316ccu: goto label_1316cc;
        case 0x1316d0u: goto label_1316d0;
        case 0x1316d4u: goto label_1316d4;
        case 0x1316d8u: goto label_1316d8;
        case 0x1316dcu: goto label_1316dc;
        case 0x1316e0u: goto label_1316e0;
        case 0x1316e4u: goto label_1316e4;
        case 0x1316e8u: goto label_1316e8;
        case 0x1316ecu: goto label_1316ec;
        case 0x1316f0u: goto label_1316f0;
        case 0x1316f4u: goto label_1316f4;
        case 0x1316f8u: goto label_1316f8;
        case 0x1316fcu: goto label_1316fc;
        case 0x131700u: goto label_131700;
        case 0x131704u: goto label_131704;
        case 0x131708u: goto label_131708;
        case 0x13170cu: goto label_13170c;
        case 0x131710u: goto label_131710;
        case 0x131714u: goto label_131714;
        case 0x131718u: goto label_131718;
        case 0x13171cu: goto label_13171c;
        case 0x131720u: goto label_131720;
        case 0x131724u: goto label_131724;
        case 0x131728u: goto label_131728;
        case 0x13172cu: goto label_13172c;
        case 0x131730u: goto label_131730;
        case 0x131734u: goto label_131734;
        case 0x131738u: goto label_131738;
        case 0x13173cu: goto label_13173c;
        case 0x131740u: goto label_131740;
        case 0x131744u: goto label_131744;
        case 0x131748u: goto label_131748;
        case 0x13174cu: goto label_13174c;
        case 0x131750u: goto label_131750;
        case 0x131754u: goto label_131754;
        case 0x131758u: goto label_131758;
        case 0x13175cu: goto label_13175c;
        case 0x131760u: goto label_131760;
        case 0x131764u: goto label_131764;
        case 0x131768u: goto label_131768;
        case 0x13176cu: goto label_13176c;
        case 0x131770u: goto label_131770;
        case 0x131774u: goto label_131774;
        case 0x131778u: goto label_131778;
        case 0x13177cu: goto label_13177c;
        case 0x131780u: goto label_131780;
        case 0x131784u: goto label_131784;
        case 0x131788u: goto label_131788;
        case 0x13178cu: goto label_13178c;
        case 0x131790u: goto label_131790;
        case 0x131794u: goto label_131794;
        case 0x131798u: goto label_131798;
        case 0x13179cu: goto label_13179c;
        case 0x1317a0u: goto label_1317a0;
        case 0x1317a4u: goto label_1317a4;
        case 0x1317a8u: goto label_1317a8;
        case 0x1317acu: goto label_1317ac;
        case 0x1317b0u: goto label_1317b0;
        case 0x1317b4u: goto label_1317b4;
        case 0x1317b8u: goto label_1317b8;
        case 0x1317bcu: goto label_1317bc;
        case 0x1317c0u: goto label_1317c0;
        case 0x1317c4u: goto label_1317c4;
        case 0x1317c8u: goto label_1317c8;
        case 0x1317ccu: goto label_1317cc;
        case 0x1317d0u: goto label_1317d0;
        case 0x1317d4u: goto label_1317d4;
        case 0x1317d8u: goto label_1317d8;
        case 0x1317dcu: goto label_1317dc;
        case 0x1317e0u: goto label_1317e0;
        case 0x1317e4u: goto label_1317e4;
        case 0x1317e8u: goto label_1317e8;
        case 0x1317ecu: goto label_1317ec;
        case 0x1317f0u: goto label_1317f0;
        case 0x1317f4u: goto label_1317f4;
        case 0x1317f8u: goto label_1317f8;
        case 0x1317fcu: goto label_1317fc;
        case 0x131800u: goto label_131800;
        case 0x131804u: goto label_131804;
        case 0x131808u: goto label_131808;
        case 0x13180cu: goto label_13180c;
        case 0x131810u: goto label_131810;
        case 0x131814u: goto label_131814;
        case 0x131818u: goto label_131818;
        case 0x13181cu: goto label_13181c;
        case 0x131820u: goto label_131820;
        case 0x131824u: goto label_131824;
        case 0x131828u: goto label_131828;
        case 0x13182cu: goto label_13182c;
        case 0x131830u: goto label_131830;
        case 0x131834u: goto label_131834;
        case 0x131838u: goto label_131838;
        case 0x13183cu: goto label_13183c;
        case 0x131840u: goto label_131840;
        case 0x131844u: goto label_131844;
        case 0x131848u: goto label_131848;
        case 0x13184cu: goto label_13184c;
        case 0x131850u: goto label_131850;
        case 0x131854u: goto label_131854;
        case 0x131858u: goto label_131858;
        case 0x13185cu: goto label_13185c;
        case 0x131860u: goto label_131860;
        case 0x131864u: goto label_131864;
        case 0x131868u: goto label_131868;
        case 0x13186cu: goto label_13186c;
        case 0x131870u: goto label_131870;
        case 0x131874u: goto label_131874;
        case 0x131878u: goto label_131878;
        case 0x13187cu: goto label_13187c;
        case 0x131880u: goto label_131880;
        case 0x131884u: goto label_131884;
        case 0x131888u: goto label_131888;
        case 0x13188cu: goto label_13188c;
        case 0x131890u: goto label_131890;
        case 0x131894u: goto label_131894;
        case 0x131898u: goto label_131898;
        case 0x13189cu: goto label_13189c;
        case 0x1318a0u: goto label_1318a0;
        case 0x1318a4u: goto label_1318a4;
        case 0x1318a8u: goto label_1318a8;
        case 0x1318acu: goto label_1318ac;
        case 0x1318b0u: goto label_1318b0;
        case 0x1318b4u: goto label_1318b4;
        case 0x1318b8u: goto label_1318b8;
        case 0x1318bcu: goto label_1318bc;
        case 0x1318c0u: goto label_1318c0;
        case 0x1318c4u: goto label_1318c4;
        case 0x1318c8u: goto label_1318c8;
        case 0x1318ccu: goto label_1318cc;
        case 0x1318d0u: goto label_1318d0;
        case 0x1318d4u: goto label_1318d4;
        case 0x1318d8u: goto label_1318d8;
        case 0x1318dcu: goto label_1318dc;
        case 0x1318e0u: goto label_1318e0;
        case 0x1318e4u: goto label_1318e4;
        case 0x1318e8u: goto label_1318e8;
        case 0x1318ecu: goto label_1318ec;
        case 0x1318f0u: goto label_1318f0;
        case 0x1318f4u: goto label_1318f4;
        case 0x1318f8u: goto label_1318f8;
        case 0x1318fcu: goto label_1318fc;
        case 0x131900u: goto label_131900;
        case 0x131904u: goto label_131904;
        case 0x131908u: goto label_131908;
        case 0x13190cu: goto label_13190c;
        case 0x131910u: goto label_131910;
        case 0x131914u: goto label_131914;
        case 0x131918u: goto label_131918;
        case 0x13191cu: goto label_13191c;
        case 0x131920u: goto label_131920;
        case 0x131924u: goto label_131924;
        case 0x131928u: goto label_131928;
        case 0x13192cu: goto label_13192c;
        case 0x131930u: goto label_131930;
        case 0x131934u: goto label_131934;
        default: break;
    }

    ctx->pc = 0x1316b0u;

label_1316b0:
    // 0x1316b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1316b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1316b4:
    // 0x1316b4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1316b8:
    // 0x1316b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1316b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1316bc:
    // 0x1316bc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1316bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1316c0:
    // 0x1316c0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1316c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_1316c4:
    // 0x1316c4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1316c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1316c8:
    // 0x1316c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1316c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1316cc:
    // 0x1316cc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1316ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1316d0:
    // 0x1316d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1316d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1316d4:
    // 0x1316d4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1316d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1316d8:
    // 0x1316d8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1316d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1316dc:
    // 0x1316dc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1316dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1316e0:
    // 0x1316e0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1316e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1316e4:
    // 0x1316e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1316e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1316e8:
    // 0x1316e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1316e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1316ec:
    // 0x1316ec: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x1316ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_1316f0:
    // 0x1316f0: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x1316f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1316f4:
    // 0x1316f4: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x1316f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
label_1316f8:
    // 0x1316f8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_1316fc:
    // 0x1316fc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1316fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_131700:
    // 0x131700: 0x8c7502f8  lw          $s5, 0x2F8($v1)
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 760)));
label_131704:
    // 0x131704: 0x12a00080  beqz        $s5, . + 4 + (0x80 << 2)
label_131708:
    if (ctx->pc == 0x131708u) {
        ctx->pc = 0x131708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131704u;
        // 0x131708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13170Cu;
        goto label_13170c;
    }
    ctx->pc = 0x131704u;
    {
        const bool branch_taken_0x131704 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x131708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131704u;
        // 0x131708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131704) {
            ctx->pc = 0x131908u;
            goto label_131908;
        }
    }
    ctx->pc = 0x13170Cu;
label_13170c:
    // 0x13170c: 0x26a30160  addiu       $v1, $s5, 0x160
    ctx->pc = 0x13170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
label_131710:
    // 0x131710: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x131710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_131714:
    // 0x131714: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x131714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_131718:
    // 0x131718: 0xdea40170  ld          $a0, 0x170($s5)
    ctx->pc = 0x131718u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 368)));
label_13171c:
    // 0x13171c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_131720:
    // 0x131720: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x131720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_131724:
    // 0x131724: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x131724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_131728:
    // 0x131728: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13172c:
    // 0x13172c: 0xdea20178  ld          $v0, 0x178($s5)
    ctx->pc = 0x13172cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 376)));
label_131730:
    // 0x131730: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x131730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_131734:
    // 0x131734: 0x8ce30154  lw          $v1, 0x154($a3)
    ctx->pc = 0x131734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 340)));
label_131738:
    // 0x131738: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_13173c:
    // 0x13173c: 0x8c57001c  lw          $s7, 0x1C($v0)
    ctx->pc = 0x13173cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_131740:
    // 0x131740: 0xc041682  jal         func_105A08
label_131744:
    if (ctx->pc == 0x131744u) {
        ctx->pc = 0x131744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131740u;
        // 0x131744: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131748u;
        goto label_131748;
    }
    ctx->pc = 0x131740u;
    SET_GPR_U32(ctx, 31, 0x131748u);
    ctx->pc = 0x131744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131740u;
    // 0x131744: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x131740u, 0x131748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131748u;
label_131748:
    // 0x131748: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13174c:
    // 0x13174c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_131750:
    if (ctx->pc == 0x131750u) {
        ctx->pc = 0x131750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13174Cu;
        // 0x131750: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131754u;
        goto label_131754;
    }
    ctx->pc = 0x13174Cu;
    {
        const bool branch_taken_0x13174c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x131750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13174Cu;
        // 0x131750: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13174c) {
            ctx->pc = 0x131770u;
            goto label_131770;
        }
    }
    ctx->pc = 0x131754u;
label_131754:
    // 0x131754: 0xc0740b2  jal         func_1D02C8
label_131758:
    if (ctx->pc == 0x131758u) {
        ctx->pc = 0x131758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131754u;
        // 0x131758: 0x24846268  addiu       $a0, $a0, 0x6268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13175Cu;
        goto label_13175c;
    }
    ctx->pc = 0x131754u;
    SET_GPR_U32(ctx, 31, 0x13175Cu);
    ctx->pc = 0x131758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131754u;
    // 0x131758: 0x24846268  addiu       $a0, $a0, 0x6268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x131754u, 0x13175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13175Cu;
label_13175c:
    // 0x13175c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13175cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_131760:
    // 0x131760: 0x24a56278  addiu       $a1, $a1, 0x6278
    ctx->pc = 0x131760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25208));
label_131764:
    // 0x131764: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x131764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_131768:
    // 0x131768: 0xc068186  jal         func_1A0618
label_13176c:
    if (ctx->pc == 0x13176Cu) {
        ctx->pc = 0x13176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131768u;
        // 0x13176c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131770u;
        goto label_131770;
    }
    ctx->pc = 0x131768u;
    SET_GPR_U32(ctx, 31, 0x131770u);
    ctx->pc = 0x13176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131768u;
    // 0x13176c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x131768u, 0x131770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131770u;
label_131770:
    // 0x131770: 0x53c00019  beql        $fp, $zero, . + 4 + (0x19 << 2)
label_131774:
    if (ctx->pc == 0x131774u) {
        ctx->pc = 0x131774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131770u;
        // 0x131774: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131778u;
        goto label_131778;
    }
    ctx->pc = 0x131770u;
    {
        const bool branch_taken_0x131770 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x131770) {
            ctx->pc = 0x131774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131770u;
            // 0x131774: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1317D8u;
            goto label_1317d8;
        }
    }
    ctx->pc = 0x131778u;
label_131778:
    // 0x131778: 0x8ea30150  lw          $v1, 0x150($s5)
    ctx->pc = 0x131778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
label_13177c:
    // 0x13177c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_131780:
    if (ctx->pc == 0x131780u) {
        ctx->pc = 0x131780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13177Cu;
        // 0x131780: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131784u;
        goto label_131784;
    }
    ctx->pc = 0x13177Cu;
    {
        const bool branch_taken_0x13177c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13177Cu;
        // 0x131780: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13177c) {
            ctx->pc = 0x1317ACu;
            goto label_1317ac;
        }
    }
    ctx->pc = 0x131784u;
label_131784:
    // 0x131784: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_131788:
    // 0x131788: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
label_13178c:
    if (ctx->pc == 0x13178Cu) {
        ctx->pc = 0x13178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131788u;
        // 0x13178c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131790u;
        goto label_131790;
    }
    ctx->pc = 0x131788u;
    {
        const bool branch_taken_0x131788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131788u;
        // 0x13178c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131788) {
            ctx->pc = 0x1317B0u;
            goto label_1317b0;
        }
    }
    ctx->pc = 0x131790u;
label_131790:
    // 0x131790: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_131794:
    // 0x131794: 0x0  nop
    ctx->pc = 0x131794u;
    // NOP
label_131798:
    // 0x131798: 0x0  nop
    ctx->pc = 0x131798u;
    // NOP
label_13179c:
    // 0x13179c: 0x0  nop
    ctx->pc = 0x13179cu;
    // NOP
label_1317a0:
    // 0x1317a0: 0x0  nop
    ctx->pc = 0x1317a0u;
    // NOP
label_1317a4:
    // 0x1317a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1317a8:
    if (ctx->pc == 0x1317A8u) {
        ctx->pc = 0x1317A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317A4u;
        // 0x1317a8: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317ACu;
        goto label_1317ac;
    }
    ctx->pc = 0x1317A4u;
    {
        const bool branch_taken_0x1317a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1317a4) {
            ctx->pc = 0x1317A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1317A4u;
            // 0x1317a8: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131788;
        }
    }
    ctx->pc = 0x1317ACu;
label_1317ac:
    // 0x1317ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1317acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1317b0:
    // 0x1317b0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1317b4:
    if (ctx->pc == 0x1317B4u) {
        ctx->pc = 0x1317B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B0u;
        // 0x1317b4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317B8u;
        goto label_1317b8;
    }
    ctx->pc = 0x1317B0u;
    {
        const bool branch_taken_0x1317b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317B0u;
        // 0x1317b4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317b0) {
            ctx->pc = 0x1317D4u;
            goto label_1317d4;
        }
    }
    ctx->pc = 0x1317B8u;
label_1317b8:
    // 0x1317b8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1317b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1317bc:
    // 0x1317bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1317bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1317c0:
    // 0x1317c0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1317c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1317c4:
    // 0x1317c4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1317c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1317c8:
    // 0x1317c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1317c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1317cc:
    // 0x1317cc: 0x60f809  jalr        $v1
label_1317d0:
    if (ctx->pc == 0x1317D0u) {
        ctx->pc = 0x1317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317CCu;
        // 0x1317d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317D4u;
        goto label_1317d4;
    }
    ctx->pc = 0x1317CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1317D4u);
        ctx->pc = 0x1317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317CCu;
        // 0x1317d0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1317CCu, 0x1317D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1317D4u;
label_1317d4:
    // 0x1317d4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1317d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1317d8:
    // 0x1317d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1317d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1317dc:
    // 0x1317dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1317e0:
    // 0x1317e0: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
label_1317e4:
    if (ctx->pc == 0x1317E4u) {
        ctx->pc = 0x1317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317E0u;
        // 0x1317e4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1317E8u;
        goto label_1317e8;
    }
    ctx->pc = 0x1317E0u;
    {
        const bool branch_taken_0x1317e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317E0u;
        // 0x1317e4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317e0) {
            ctx->pc = 0x131904u;
            goto label_131904;
        }
    }
    ctx->pc = 0x1317E8u;
label_1317e8:
    // 0x1317e8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1317e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1317ec:
    // 0x1317ec: 0x0  nop
    ctx->pc = 0x1317ecu;
    // NOP
label_1317f0:
    // 0x1317f0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1317f4:
    // 0x1317f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1317f8:
    // 0x1317f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1317f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1317fc:
    // 0x1317fc: 0xc041682  jal         func_105A08
label_131800:
    if (ctx->pc == 0x131800u) {
        ctx->pc = 0x131800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317FCu;
        // 0x131800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131804u;
        goto label_131804;
    }
    ctx->pc = 0x1317FCu;
    SET_GPR_U32(ctx, 31, 0x131804u);
    ctx->pc = 0x131800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317FCu;
    // 0x131800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x1317FCu, 0x131804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131804u;
label_131804:
    // 0x131804: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x131804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_131808:
    // 0x131808: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x131808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13180c:
    // 0x13180c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131810:
    // 0x131810: 0xc041682  jal         func_105A08
label_131814:
    if (ctx->pc == 0x131814u) {
        ctx->pc = 0x131814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131810u;
        // 0x131814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131818u;
        goto label_131818;
    }
    ctx->pc = 0x131810u;
    SET_GPR_U32(ctx, 31, 0x131818u);
    ctx->pc = 0x131814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131810u;
    // 0x131814: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A08u, 0x131810u, 0x131818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131818u;
label_131818:
    // 0x131818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x131818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13181c:
    // 0x13181c: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x13181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
label_131820:
    // 0x131820: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_131824:
    // 0x131824: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_131828:
    if (ctx->pc == 0x131828u) {
        ctx->pc = 0x131828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131824u;
        // 0x131828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13182Cu;
        goto label_13182c;
    }
    ctx->pc = 0x131824u;
    {
        const bool branch_taken_0x131824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131824u;
        // 0x131828: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131824) {
            ctx->pc = 0x13185Cu;
            goto label_13185c;
        }
    }
    ctx->pc = 0x13182Cu;
label_13182c:
    // 0x13182c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13182cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131830:
    // 0x131830: 0x8e840150  lw          $a0, 0x150($s4)
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
label_131834:
    // 0x131834: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_131838:
    // 0x131838: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_13183c:
    if (ctx->pc == 0x13183Cu) {
        ctx->pc = 0x13183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131838u;
        // 0x13183c: 0xae820154  sw          $v0, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131840u;
        goto label_131840;
    }
    ctx->pc = 0x131838u;
    {
        const bool branch_taken_0x131838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131838u;
        // 0x13183c: 0xae820154  sw          $v0, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131838) {
            ctx->pc = 0x131850u;
            goto label_131850;
        }
    }
    ctx->pc = 0x131840u;
label_131840:
    // 0x131840: 0xae830150  sw          $v1, 0x150($s4)
    ctx->pc = 0x131840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
label_131844:
    // 0x131844: 0x10000004  b           . + 4 + (0x4 << 2)
label_131848:
    if (ctx->pc == 0x131848u) {
        ctx->pc = 0x131848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131844u;
        // 0x131848: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13184Cu;
        goto label_13184c;
    }
    ctx->pc = 0x131844u;
    {
        const bool branch_taken_0x131844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131844u;
        // 0x131848: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131844) {
            ctx->pc = 0x131858u;
            goto label_131858;
        }
    }
    ctx->pc = 0x13184Cu;
label_13184c:
    // 0x13184c: 0x0  nop
    ctx->pc = 0x13184cu;
    // NOP
label_131850:
    // 0x131850: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x131850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
label_131854:
    // 0x131854: 0xaea30150  sw          $v1, 0x150($s5)
    ctx->pc = 0x131854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 3));
label_131858:
    // 0x131858: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x131858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13185c:
    // 0x13185c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13185cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131860:
    // 0x131860: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_131864:
    if (ctx->pc == 0x131864u) {
        ctx->pc = 0x131864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131860u;
        // 0x131864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131868u;
        goto label_131868;
    }
    ctx->pc = 0x131860u;
    {
        const bool branch_taken_0x131860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131860u;
        // 0x131864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131860) {
            ctx->pc = 0x131908u;
            goto label_131908;
        }
    }
    ctx->pc = 0x131868u;
label_131868:
    // 0x131868: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
label_13186c:
    if (ctx->pc == 0x13186Cu) {
        ctx->pc = 0x13186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131868u;
        // 0x13186c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131870u;
        goto label_131870;
    }
    ctx->pc = 0x131868u;
    {
        const bool branch_taken_0x131868 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131868u;
        // 0x13186c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131868) {
            ctx->pc = 0x131890u;
            goto label_131890;
        }
    }
    ctx->pc = 0x131870u;
label_131870:
    // 0x131870: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_131874:
    // 0x131874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131878:
    // 0x131878: 0x24456288  addiu       $a1, $v0, 0x6288
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25224));
label_13187c:
    // 0x13187c: 0xc068186  jal         func_1A0618
label_131880:
    if (ctx->pc == 0x131880u) {
        ctx->pc = 0x131880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13187Cu;
        // 0x131880: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131884u;
        goto label_131884;
    }
    ctx->pc = 0x13187Cu;
    SET_GPR_U32(ctx, 31, 0x131884u);
    ctx->pc = 0x131880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13187Cu;
    // 0x131880: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13187Cu, 0x131884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131884u;
label_131884:
    // 0x131884: 0x1000001a  b           . + 4 + (0x1A << 2)
label_131888:
    if (ctx->pc == 0x131888u) {
        ctx->pc = 0x131888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131884u;
        // 0x131888: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13188Cu;
        goto label_13188c;
    }
    ctx->pc = 0x131884u;
    {
        const bool branch_taken_0x131884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131884u;
        // 0x131888: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131884) {
            ctx->pc = 0x1318F0u;
            goto label_1318f0;
        }
    }
    ctx->pc = 0x13188Cu;
label_13188c:
    // 0x13188c: 0x0  nop
    ctx->pc = 0x13188cu;
    // NOP
label_131890:
    // 0x131890: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_131894:
    // 0x131894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131898:
    // 0x131898: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x131898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13189c:
    // 0x13189c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x13189cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_1318a0:
    // 0x1318a0: 0xc04bfd4  jal         func_12FF50
label_1318a4:
    if (ctx->pc == 0x1318A4u) {
        ctx->pc = 0x1318A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318A0u;
        // 0x1318a4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318A8u;
        goto label_1318a8;
    }
    ctx->pc = 0x1318A0u;
    SET_GPR_U32(ctx, 31, 0x1318A8u);
    ctx->pc = 0x1318A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318A0u;
    // 0x1318a4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF50u, 0x1318A0u, 0x1318A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318A8u;
label_1318a8:
    // 0x1318a8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1318ac:
    if (ctx->pc == 0x1318ACu) {
        ctx->pc = 0x1318ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318A8u;
        // 0x1318ac: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318B0u;
        goto label_1318b0;
    }
    ctx->pc = 0x1318A8u;
    {
        const bool branch_taken_0x1318a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318A8u;
        // 0x1318ac: 0x8fa70024  lw          $a3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318a8) {
            ctx->pc = 0x1318C0u;
            goto label_1318c0;
        }
    }
    ctx->pc = 0x1318B0u;
label_1318b0:
    // 0x1318b0: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1318b4:
    // 0x1318b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1318b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1318b8:
    // 0x1318b8: 0xc04c17e  jal         func_1305F8
label_1318bc:
    if (ctx->pc == 0x1318BCu) {
        ctx->pc = 0x1318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318B8u;
        // 0x1318bc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318C0u;
        goto label_1318c0;
    }
    ctx->pc = 0x1318B8u;
    SET_GPR_U32(ctx, 31, 0x1318C0u);
    ctx->pc = 0x1318BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318B8u;
    // 0x1318bc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305F8u, 0x1318B8u, 0x1318C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318C0u;
label_1318c0:
    // 0x1318c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1318c4:
    // 0x1318c4: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_1318c8:
    if (ctx->pc == 0x1318C8u) {
        ctx->pc = 0x1318C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318C4u;
        // 0x1318c8: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318CCu;
        goto label_1318cc;
    }
    ctx->pc = 0x1318C4u;
    {
        const bool branch_taken_0x1318c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1318c4) {
            ctx->pc = 0x1318C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318C4u;
            // 0x1318c8: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1318CCu;
            goto label_1318cc;
        }
    }
    ctx->pc = 0x1318CCu;
label_1318cc:
    // 0x1318cc: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
label_1318d0:
    if (ctx->pc == 0x1318D0u) {
        ctx->pc = 0x1318D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318CCu;
        // 0x1318d0: 0xaed00054  sw          $s0, 0x54($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318D4u;
        goto label_1318d4;
    }
    ctx->pc = 0x1318CCu;
    {
        const bool branch_taken_0x1318cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1318cc) {
            ctx->pc = 0x1318D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318CCu;
            // 0x1318d0: 0xaed00054  sw          $s0, 0x54($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 84), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1318D4u;
            goto label_1318d4;
        }
    }
    ctx->pc = 0x1318D4u;
label_1318d4:
    // 0x1318d4: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x1318d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1318d8:
    // 0x1318d8: 0xae160050  sw          $s6, 0x50($s0)
    ctx->pc = 0x1318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 22));
label_1318dc:
    // 0x1318dc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1318dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1318e0:
    // 0x1318e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1318e4:
    // 0x1318e4: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x1318e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
label_1318e8:
    // 0x1318e8: 0xaf8289fc  sw          $v0, -0x7604($gp)
    ctx->pc = 0x1318e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 2));
label_1318ec:
    // 0x1318ec: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1318ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1318f0:
    // 0x1318f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1318f4:
    // 0x1318f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1318f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1318f8:
    // 0x1318f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1318fc:
    // 0x1318fc: 0x1462ffbc  bne         $v1, $v0, . + 4 + (-0x44 << 2)
label_131900:
    if (ctx->pc == 0x131900u) {
        ctx->pc = 0x131900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318FCu;
        // 0x131900: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131904u;
        goto label_131904;
    }
    ctx->pc = 0x1318FCu;
    {
        const bool branch_taken_0x1318fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318FCu;
        // 0x131900: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318fc) {
            ctx->pc = 0x1317F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1317f0;
        }
    }
    ctx->pc = 0x131904u;
label_131904:
    // 0x131904: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_131908:
    // 0x131908: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x131908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13190c:
    // 0x13190c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13190cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_131910:
    // 0x131910: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x131910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_131914:
    // 0x131914: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x131914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_131918:
    // 0x131918: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x131918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13191c:
    // 0x13191c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13191cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_131920:
    // 0x131920: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x131920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_131924:
    // 0x131924: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x131924u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_131928:
    // 0x131928: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x131928u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13192c:
    // 0x13192c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x13192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_131930:
    // 0x131930: 0x3e00008  jr          $ra
label_131934:
    if (ctx->pc == 0x131934u) {
        ctx->pc = 0x131934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131930u;
        // 0x131934: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131938u;
        goto label_fallthrough_0x131930;
    }
    ctx->pc = 0x131930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131930u;
        // 0x131934: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131930:
    ctx->pc = 0x131938u;
}
