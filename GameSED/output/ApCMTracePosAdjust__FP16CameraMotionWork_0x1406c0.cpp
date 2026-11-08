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

// Function: ApCMTracePosAdjust__FP16CameraMotionWork
// Address: 0x1406c0 - 0x140a48
void ApCMTracePosAdjust__FP16CameraMotionWork_0x1406c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTracePosAdjust__FP16CameraMotionWork_0x1406c0");
#endif

    switch (ctx->pc) {
        case 0x1406c0u: goto label_1406c0;
        case 0x1406c4u: goto label_1406c4;
        case 0x1406c8u: goto label_1406c8;
        case 0x1406ccu: goto label_1406cc;
        case 0x1406d0u: goto label_1406d0;
        case 0x1406d4u: goto label_1406d4;
        case 0x1406d8u: goto label_1406d8;
        case 0x1406dcu: goto label_1406dc;
        case 0x1406e0u: goto label_1406e0;
        case 0x1406e4u: goto label_1406e4;
        case 0x1406e8u: goto label_1406e8;
        case 0x1406ecu: goto label_1406ec;
        case 0x1406f0u: goto label_1406f0;
        case 0x1406f4u: goto label_1406f4;
        case 0x1406f8u: goto label_1406f8;
        case 0x1406fcu: goto label_1406fc;
        case 0x140700u: goto label_140700;
        case 0x140704u: goto label_140704;
        case 0x140708u: goto label_140708;
        case 0x14070cu: goto label_14070c;
        case 0x140710u: goto label_140710;
        case 0x140714u: goto label_140714;
        case 0x140718u: goto label_140718;
        case 0x14071cu: goto label_14071c;
        case 0x140720u: goto label_140720;
        case 0x140724u: goto label_140724;
        case 0x140728u: goto label_140728;
        case 0x14072cu: goto label_14072c;
        case 0x140730u: goto label_140730;
        case 0x140734u: goto label_140734;
        case 0x140738u: goto label_140738;
        case 0x14073cu: goto label_14073c;
        case 0x140740u: goto label_140740;
        case 0x140744u: goto label_140744;
        case 0x140748u: goto label_140748;
        case 0x14074cu: goto label_14074c;
        case 0x140750u: goto label_140750;
        case 0x140754u: goto label_140754;
        case 0x140758u: goto label_140758;
        case 0x14075cu: goto label_14075c;
        case 0x140760u: goto label_140760;
        case 0x140764u: goto label_140764;
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        case 0x140808u: goto label_140808;
        case 0x14080cu: goto label_14080c;
        case 0x140810u: goto label_140810;
        case 0x140814u: goto label_140814;
        case 0x140818u: goto label_140818;
        case 0x14081cu: goto label_14081c;
        case 0x140820u: goto label_140820;
        case 0x140824u: goto label_140824;
        case 0x140828u: goto label_140828;
        case 0x14082cu: goto label_14082c;
        case 0x140830u: goto label_140830;
        case 0x140834u: goto label_140834;
        case 0x140838u: goto label_140838;
        case 0x14083cu: goto label_14083c;
        case 0x140840u: goto label_140840;
        case 0x140844u: goto label_140844;
        case 0x140848u: goto label_140848;
        case 0x14084cu: goto label_14084c;
        case 0x140850u: goto label_140850;
        case 0x140854u: goto label_140854;
        case 0x140858u: goto label_140858;
        case 0x14085cu: goto label_14085c;
        case 0x140860u: goto label_140860;
        case 0x140864u: goto label_140864;
        case 0x140868u: goto label_140868;
        case 0x14086cu: goto label_14086c;
        case 0x140870u: goto label_140870;
        case 0x140874u: goto label_140874;
        case 0x140878u: goto label_140878;
        case 0x14087cu: goto label_14087c;
        case 0x140880u: goto label_140880;
        case 0x140884u: goto label_140884;
        case 0x140888u: goto label_140888;
        case 0x14088cu: goto label_14088c;
        case 0x140890u: goto label_140890;
        case 0x140894u: goto label_140894;
        case 0x140898u: goto label_140898;
        case 0x14089cu: goto label_14089c;
        case 0x1408a0u: goto label_1408a0;
        case 0x1408a4u: goto label_1408a4;
        case 0x1408a8u: goto label_1408a8;
        case 0x1408acu: goto label_1408ac;
        case 0x1408b0u: goto label_1408b0;
        case 0x1408b4u: goto label_1408b4;
        case 0x1408b8u: goto label_1408b8;
        case 0x1408bcu: goto label_1408bc;
        case 0x1408c0u: goto label_1408c0;
        case 0x1408c4u: goto label_1408c4;
        case 0x1408c8u: goto label_1408c8;
        case 0x1408ccu: goto label_1408cc;
        case 0x1408d0u: goto label_1408d0;
        case 0x1408d4u: goto label_1408d4;
        case 0x1408d8u: goto label_1408d8;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e0u: goto label_1408e0;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408e8u: goto label_1408e8;
        case 0x1408ecu: goto label_1408ec;
        case 0x1408f0u: goto label_1408f0;
        case 0x1408f4u: goto label_1408f4;
        case 0x1408f8u: goto label_1408f8;
        case 0x1408fcu: goto label_1408fc;
        case 0x140900u: goto label_140900;
        case 0x140904u: goto label_140904;
        case 0x140908u: goto label_140908;
        case 0x14090cu: goto label_14090c;
        case 0x140910u: goto label_140910;
        case 0x140914u: goto label_140914;
        case 0x140918u: goto label_140918;
        case 0x14091cu: goto label_14091c;
        case 0x140920u: goto label_140920;
        case 0x140924u: goto label_140924;
        case 0x140928u: goto label_140928;
        case 0x14092cu: goto label_14092c;
        case 0x140930u: goto label_140930;
        case 0x140934u: goto label_140934;
        case 0x140938u: goto label_140938;
        case 0x14093cu: goto label_14093c;
        case 0x140940u: goto label_140940;
        case 0x140944u: goto label_140944;
        case 0x140948u: goto label_140948;
        case 0x14094cu: goto label_14094c;
        case 0x140950u: goto label_140950;
        case 0x140954u: goto label_140954;
        case 0x140958u: goto label_140958;
        case 0x14095cu: goto label_14095c;
        case 0x140960u: goto label_140960;
        case 0x140964u: goto label_140964;
        case 0x140968u: goto label_140968;
        case 0x14096cu: goto label_14096c;
        case 0x140970u: goto label_140970;
        case 0x140974u: goto label_140974;
        case 0x140978u: goto label_140978;
        case 0x14097cu: goto label_14097c;
        case 0x140980u: goto label_140980;
        case 0x140984u: goto label_140984;
        case 0x140988u: goto label_140988;
        case 0x14098cu: goto label_14098c;
        case 0x140990u: goto label_140990;
        case 0x140994u: goto label_140994;
        case 0x140998u: goto label_140998;
        case 0x14099cu: goto label_14099c;
        case 0x1409a0u: goto label_1409a0;
        case 0x1409a4u: goto label_1409a4;
        case 0x1409a8u: goto label_1409a8;
        case 0x1409acu: goto label_1409ac;
        case 0x1409b0u: goto label_1409b0;
        case 0x1409b4u: goto label_1409b4;
        case 0x1409b8u: goto label_1409b8;
        case 0x1409bcu: goto label_1409bc;
        case 0x1409c0u: goto label_1409c0;
        case 0x1409c4u: goto label_1409c4;
        case 0x1409c8u: goto label_1409c8;
        case 0x1409ccu: goto label_1409cc;
        case 0x1409d0u: goto label_1409d0;
        case 0x1409d4u: goto label_1409d4;
        case 0x1409d8u: goto label_1409d8;
        case 0x1409dcu: goto label_1409dc;
        case 0x1409e0u: goto label_1409e0;
        case 0x1409e4u: goto label_1409e4;
        case 0x1409e8u: goto label_1409e8;
        case 0x1409ecu: goto label_1409ec;
        case 0x1409f0u: goto label_1409f0;
        case 0x1409f4u: goto label_1409f4;
        case 0x1409f8u: goto label_1409f8;
        case 0x1409fcu: goto label_1409fc;
        case 0x140a00u: goto label_140a00;
        case 0x140a04u: goto label_140a04;
        case 0x140a08u: goto label_140a08;
        case 0x140a0cu: goto label_140a0c;
        case 0x140a10u: goto label_140a10;
        case 0x140a14u: goto label_140a14;
        case 0x140a18u: goto label_140a18;
        case 0x140a1cu: goto label_140a1c;
        case 0x140a20u: goto label_140a20;
        case 0x140a24u: goto label_140a24;
        case 0x140a28u: goto label_140a28;
        case 0x140a2cu: goto label_140a2c;
        case 0x140a30u: goto label_140a30;
        case 0x140a34u: goto label_140a34;
        case 0x140a38u: goto label_140a38;
        case 0x140a3cu: goto label_140a3c;
        case 0x140a40u: goto label_140a40;
        case 0x140a44u: goto label_140a44;
        default: break;
    }

    ctx->pc = 0x1406c0u;

label_1406c0:
    // 0x1406c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1406c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1406c4:
    // 0x1406c4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1406c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1406c8:
    // 0x1406c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1406c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1406cc:
    // 0x1406cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1406ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1406d0:
    // 0x1406d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1406d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1406d4:
    // 0x1406d4: 0x24552630  addiu       $s5, $v0, 0x2630
    ctx->pc = 0x1406d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
label_1406d8:
    // 0x1406d8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1406d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1406dc:
    // 0x1406dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1406dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1406e0:
    // 0x1406e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1406e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1406e4:
    // 0x1406e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1406e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1406e8:
    // 0x1406e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1406e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1406ec:
    // 0x1406ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1406ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1406f0:
    // 0x1406f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1406f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1406f4:
    // 0x1406f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1406f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1406f8:
    // 0x1406f8: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x1406f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1406fc:
    // 0x1406fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1406fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_140700:
    // 0x140700: 0xc66101a4  lwc1        $f1, 0x1A4($s3)
    ctx->pc = 0x140700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140704:
    // 0x140704: 0xc66001a8  lwc1        $f0, 0x1A8($s3)
    ctx->pc = 0x140704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140708:
    // 0x140708: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x140708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14070c:
    // 0x14070c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14070cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_140710:
    // 0x140710: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x140710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_140714:
    // 0x140714: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_140718:
    // 0x140718: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x140718u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14071c:
    // 0x14071c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14071cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_140720:
    // 0x140720: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x140720u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_140724:
    // 0x140724: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x140724u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_140728:
    // 0x140728: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x140728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
label_14072c:
    // 0x14072c: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x14072cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_140730:
    // 0x140730: 0x24f02620  addiu       $s0, $a3, 0x2620
    ctx->pc = 0x140730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 9760));
label_140734:
    // 0x140734: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_140738:
    // 0x140738: 0xc06760e  jal         func_19D838
label_14073c:
    if (ctx->pc == 0x14073Cu) {
        ctx->pc = 0x14073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140738u;
        // 0x14073c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140740u;
        goto label_140740;
    }
    ctx->pc = 0x140738u;
    SET_GPR_U32(ctx, 31, 0x140740u);
    ctx->pc = 0x14073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140738u;
    // 0x14073c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x140738u, 0x140740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140740u;
label_140740:
    // 0x140740: 0x8e760060  lw          $s6, 0x60($s3)
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_140744:
    // 0x140744: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_140748:
    // 0x140748: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x140748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_14074c:
    // 0x14074c: 0x24522610  addiu       $s2, $v0, 0x2610
    ctx->pc = 0x14074cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
label_140750:
    // 0x140750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140754:
    // 0x140754: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_140758:
    // 0x140758: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x140758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_14075c:
    // 0x14075c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x14075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_140760:
    // 0x140760: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_140764:
    if (ctx->pc == 0x140764u) {
        ctx->pc = 0x140764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140760u;
        // 0x140764: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140768u;
        goto label_140768;
    }
    ctx->pc = 0x140760u;
    {
        const bool branch_taken_0x140760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140760u;
        // 0x140764: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140760) {
            ctx->pc = 0x140770u;
            goto label_140770;
        }
    }
    ctx->pc = 0x140768u;
label_140768:
    // 0x140768: 0xc061920  jal         func_186480
label_14076c:
    if (ctx->pc == 0x14076Cu) {
        ctx->pc = 0x140770u;
        goto label_140770;
    }
    ctx->pc = 0x140768u;
    SET_GPR_U32(ctx, 31, 0x140770u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x140768u, 0x140770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140770u;
label_140770:
    // 0x140770: 0xc061422  jal         func_185088
label_140774:
    if (ctx->pc == 0x140774u) {
        ctx->pc = 0x140774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140770u;
        // 0x140774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140778u;
        goto label_140778;
    }
    ctx->pc = 0x140770u;
    SET_GPR_U32(ctx, 31, 0x140778u);
    ctx->pc = 0x140774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140770u;
    // 0x140774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x140770u, 0x140778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140778u;
label_140778:
    // 0x140778: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x140778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_14077c:
    // 0x14077c: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_140780:
    // 0x140780: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x140780u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140784:
    // 0x140784: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x140784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140788:
    // 0x140788: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x140788u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_14078c:
    // 0x14078c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x14078cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_140790:
    // 0x140790: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x140790u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_140794:
    // 0x140794: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x140794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_140798:
    // 0x140798: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x140798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14079c:
    // 0x14079c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14079cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1407a0:
    // 0x1407a0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1407a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1407a4:
    // 0x1407a4: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x1407a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1407a8:
    // 0x1407a8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1407a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1407ac:
    // 0x1407ac: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1407acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407b0:
    // 0x1407b0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1407b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1407b4:
    // 0x1407b4: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1407b4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1407b8:
    // 0x1407b8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1407b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407bc:
    // 0x1407bc: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x1407bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1407c0:
    // 0x1407c0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1407c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1407c4:
    // 0x1407c4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1407c8:
    // 0x1407c8: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x1407c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
label_1407cc:
    // 0x1407cc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1407ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407d0:
    // 0x1407d0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1407d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407d4:
    // 0x1407d4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1407d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407d8:
    // 0x1407d8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1407d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407dc:
    // 0x1407dc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1407dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1407e0:
    // 0x1407e0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1407e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407e4:
    // 0x1407e4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1407e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407e8:
    // 0x1407e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1407e8u;
    // VWAITQ (Q already resolved in this runtime)
label_1407ec:
    // 0x1407ec: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1407ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407f0:
    // 0x1407f0: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1407f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1407f4:
    // 0x1407f4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1407f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1407f8:
    // 0x1407f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1407fc:
    // 0x1407fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_140800:
    // 0x140800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x140800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140804:
    // 0x140804: 0x8c6201d0  lw          $v0, 0x1D0($v1)
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
label_140808:
    // 0x140808: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x140808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14080c:
    // 0x14080c: 0xc05be74  jal         func_16F9D0
label_140810:
    if (ctx->pc == 0x140810u) {
        ctx->pc = 0x140810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14080Cu;
        // 0x140810: 0x8c5101e4  lw          $s1, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140814u;
        goto label_140814;
    }
    ctx->pc = 0x14080Cu;
    SET_GPR_U32(ctx, 31, 0x140814u);
    ctx->pc = 0x140810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14080Cu;
    // 0x140810: 0x8c5101e4  lw          $s1, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x14080Cu, 0x140814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140814u;
label_140814:
    // 0x140814: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_140818:
    // 0x140818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14081c:
    // 0x14081c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_140820:
    // 0x140820: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x140820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
label_140824:
    // 0x140824: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x140824u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_140828:
    // 0x140828: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_14082c:
    if (ctx->pc == 0x14082Cu) {
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140830u;
        goto label_140830;
    }
    ctx->pc = 0x140828u;
    {
        const bool branch_taken_0x140828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140828) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x140830u;
label_140830:
    // 0x140830: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_140834:
    // 0x140834: 0xc7808154  lwc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x140834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140838:
    // 0x140838: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x140838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
label_14083c:
    // 0x14083c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_140840:
    // 0x140840: 0x24a52620  addiu       $a1, $a1, 0x2620
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
label_140844:
    // 0x140844: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x140844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_140848:
    // 0x140848: 0x24e72630  addiu       $a3, $a3, 0x2630
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9776));
label_14084c:
    // 0x14084c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x14084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_140850:
    // 0x140850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140854:
    // 0x140854: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_140858:
    // 0x140858: 0x40f809  jalr        $v0
label_14085c:
    if (ctx->pc == 0x14085Cu) {
        ctx->pc = 0x14085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140858u;
        // 0x14085c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140860u;
        goto label_140860;
    }
    ctx->pc = 0x140858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140860u);
        ctx->pc = 0x14085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140858u;
        // 0x14085c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140858u, 0x140860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140860u;
label_140860:
    // 0x140860: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_140864:
    if (ctx->pc == 0x140864u) {
        ctx->pc = 0x140868u;
        goto label_140868;
    }
    ctx->pc = 0x140860u;
    {
        const bool branch_taken_0x140860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140860) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x140868u;
label_140868:
    // 0x140868: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_14086c:
    // 0x14086c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_140870:
    if (ctx->pc == 0x140870u) {
        ctx->pc = 0x140870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14086Cu;
        // 0x140870: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140874u;
        goto label_140874;
    }
    ctx->pc = 0x14086Cu;
    {
        const bool branch_taken_0x14086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14086Cu;
        // 0x140870: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14086c) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x140874u;
label_140874:
    // 0x140874: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x140874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_140878:
    // 0x140878: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_14087c:
    if (ctx->pc == 0x14087Cu) {
        ctx->pc = 0x14087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140878u;
        // 0x14087c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140880u;
        goto label_140880;
    }
    ctx->pc = 0x140878u;
    {
        const bool branch_taken_0x140878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140878u;
        // 0x14087c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140878) {
            ctx->pc = 0x1408B0u;
            goto label_1408b0;
        }
    }
    ctx->pc = 0x140880u;
label_140880:
    // 0x140880: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x140880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140884:
    // 0x140884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_140888:
    // 0x140888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14088c:
    // 0x14088c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14088cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_140890:
    // 0x140890: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140894:
    // 0x140894: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_140898:
    if (ctx->pc == 0x140898u) {
        ctx->pc = 0x14089Cu;
        goto label_14089c;
    }
    ctx->pc = 0x140894u;
    {
        const bool branch_taken_0x140894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140894) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x14089Cu;
label_14089c:
    // 0x14089c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x14089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1408a0:
    // 0x1408a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1408a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1408a4:
    // 0x1408a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1408a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1408a8:
    // 0x1408a8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1408ac:
    if (ctx->pc == 0x1408ACu) {
        ctx->pc = 0x1408ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408A8u;
        // 0x1408ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408B0u;
        goto label_1408b0;
    }
    ctx->pc = 0x1408A8u;
    {
        const bool branch_taken_0x1408a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408A8u;
        // 0x1408ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408a8) {
            ctx->pc = 0x140954u;
            goto label_140954;
        }
    }
    ctx->pc = 0x1408B0u;
label_1408b0:
    // 0x1408b0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_1408b4:
    if (ctx->pc == 0x1408B4u) {
        ctx->pc = 0x1408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408B0u;
        // 0x1408b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408B8u;
        goto label_1408b8;
    }
    ctx->pc = 0x1408B0u;
    {
        const bool branch_taken_0x1408b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408B0u;
        // 0x1408b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408b0) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x1408B8u;
label_1408b8:
    // 0x1408b8: 0x8c6300d8  lw          $v1, 0xD8($v1)
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_1408bc:
    // 0x1408bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1408c0:
    if (ctx->pc == 0x1408C0u) {
        ctx->pc = 0x1408C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408BCu;
        // 0x1408c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408C4u;
        goto label_1408c4;
    }
    ctx->pc = 0x1408BCu;
    {
        const bool branch_taken_0x1408bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1408C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408BCu;
        // 0x1408c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408bc) {
            ctx->pc = 0x1408E0u;
            goto label_1408e0;
        }
    }
    ctx->pc = 0x1408C4u;
label_1408c4:
    // 0x1408c4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1408c8:
    if (ctx->pc == 0x1408C8u) {
        ctx->pc = 0x1408C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C4u;
        // 0x1408c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408CCu;
        goto label_1408cc;
    }
    ctx->pc = 0x1408C4u;
    {
        const bool branch_taken_0x1408c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1408C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408C4u;
        // 0x1408c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408c4) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x1408CCu;
label_1408cc:
    // 0x1408cc: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_1408d0:
    if (ctx->pc == 0x1408D0u) {
        ctx->pc = 0x1408D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408CCu;
        // 0x1408d0: 0xc481000c  lwc1        $f1, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408D4u;
        goto label_1408d4;
    }
    ctx->pc = 0x1408CCu;
    {
        const bool branch_taken_0x1408cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1408cc) {
            ctx->pc = 0x1408D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1408CCu;
            // 0x1408d0: 0xc481000c  lwc1        $f1, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x140908u;
            goto label_140908;
        }
    }
    ctx->pc = 0x1408D4u;
label_1408d4:
    // 0x1408d4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1408d8:
    if (ctx->pc == 0x1408D8u) {
        ctx->pc = 0x1408DCu;
        goto label_1408dc;
    }
    ctx->pc = 0x1408D4u;
    {
        const bool branch_taken_0x1408d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408d4) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x1408DCu;
label_1408dc:
    // 0x1408dc: 0x0  nop
    ctx->pc = 0x1408dcu;
    // NOP
label_1408e0:
    // 0x1408e0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1408e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1408e4:
    // 0x1408e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1408e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1408e8:
    // 0x1408e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1408e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1408ec:
    // 0x1408ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1408ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1408f0:
    // 0x1408f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1408f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1408f4:
    // 0x1408f4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_1408f8:
    if (ctx->pc == 0x1408F8u) {
        ctx->pc = 0x1408F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408F4u;
        // 0x1408f8: 0x24830070  addiu       $v1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408FCu;
        goto label_1408fc;
    }
    ctx->pc = 0x1408F4u;
    {
        const bool branch_taken_0x1408f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1408F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408F4u;
        // 0x1408f8: 0x24830070  addiu       $v1, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408f4) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x1408FCu;
label_1408fc:
    // 0x1408fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_140900:
    if (ctx->pc == 0x140900u) {
        ctx->pc = 0x140904u;
        goto label_140904;
    }
    ctx->pc = 0x1408FCu;
    {
        const bool branch_taken_0x1408fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1408fc) {
            ctx->pc = 0x140924u;
            goto label_140924;
        }
    }
    ctx->pc = 0x140904u;
label_140904:
    // 0x140904: 0x0  nop
    ctx->pc = 0x140904u;
    // NOP
label_140908:
    // 0x140908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_14090c:
    // 0x14090c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14090cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140910:
    // 0x140910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x140910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_140914:
    // 0x140914: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140918:
    // 0x140918: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_14091c:
    if (ctx->pc == 0x14091Cu) {
        ctx->pc = 0x140920u;
        goto label_140920;
    }
    ctx->pc = 0x140918u;
    {
        const bool branch_taken_0x140918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140918) {
            ctx->pc = 0x140958u;
            goto label_140958;
        }
    }
    ctx->pc = 0x140920u;
label_140920:
    // 0x140920: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_140924:
    // 0x140924: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x140924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140928:
    // 0x140928: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x140928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_14092c:
    // 0x14092c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x14092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_140930:
    // 0x140930: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x140930u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140934:
    // 0x140934: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x140934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_140938:
    // 0x140938: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x140938u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_14093c:
    // 0x14093c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x14093cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_140940:
    // 0x140940: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x140940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_140944:
    // 0x140944: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x140944u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_140948:
    // 0x140948: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x140948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_14094c:
    // 0x14094c: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x14094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_140950:
    // 0x140950: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x140950u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_140954:
    // 0x140954: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140958:
    // 0x140958: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x140958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14095c:
    // 0x14095c: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x14095cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140960:
    // 0x140960: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_140964:
    if (ctx->pc == 0x140964u) {
        ctx->pc = 0x140964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140960u;
        // 0x140964: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140968u;
        goto label_140968;
    }
    ctx->pc = 0x140960u;
    {
        const bool branch_taken_0x140960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x140964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140960u;
        // 0x140964: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140960) {
            ctx->pc = 0x1409B8u;
            goto label_1409b8;
        }
    }
    ctx->pc = 0x140968u;
label_140968:
    // 0x140968: 0x24632640  addiu       $v1, $v1, 0x2640
    ctx->pc = 0x140968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9792));
label_14096c:
    // 0x14096c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x14096cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140970:
    // 0x140970: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x140970u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140974:
    // 0x140974: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x140974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_140978:
    // 0x140978: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x140978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_14097c:
    // 0x14097c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x14097cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_140980:
    // 0x140980: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x140980u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_140984:
    // 0x140984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140988:
    // 0x140988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14098c:
    // 0x14098c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_140990:
    if (ctx->pc == 0x140990u) {
        ctx->pc = 0x140990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14098Cu;
        // 0x140990: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140994u;
        goto label_140994;
    }
    ctx->pc = 0x14098Cu;
    {
        const bool branch_taken_0x14098c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x140990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14098Cu;
        // 0x140990: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14098c) {
            ctx->pc = 0x1409BCu;
            goto label_1409bc;
        }
    }
    ctx->pc = 0x140994u;
label_140994:
    // 0x140994: 0x0  nop
    ctx->pc = 0x140994u;
    // NOP
label_140998:
    // 0x140998: 0x0  nop
    ctx->pc = 0x140998u;
    // NOP
label_14099c:
    // 0x14099c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x14099cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1409a0:
    // 0x1409a0: 0xc66101a8  lwc1        $f1, 0x1A8($s3)
    ctx->pc = 0x1409a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1409a4:
    // 0x1409a4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1409a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_1409a8:
    // 0x1409a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1409a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1409ac:
    // 0x1409ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1409acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1409b0:
    // 0x1409b0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1409b0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
label_1409b4:
    // 0x1409b4: 0xe66101a8  swc1        $f1, 0x1A8($s3)
    ctx->pc = 0x1409b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 424), bits); }
label_1409b8:
    // 0x1409b8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_1409bc:
    // 0x1409bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1409bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1409c0:
    // 0x1409c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1409c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1409c4:
    // 0x1409c4: 0x26102630  addiu       $s0, $s0, 0x2630
    ctx->pc = 0x1409c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9776));
label_1409c8:
    // 0x1409c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1409c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1409cc:
    // 0x1409cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1409ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1409d0:
    // 0x1409d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1409d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1409d4:
    // 0x1409d4: 0xc05129a  jal         func_144A68
label_1409d8:
    if (ctx->pc == 0x1409D8u) {
        ctx->pc = 0x1409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409D4u;
        // 0x1409d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1409DCu;
        goto label_1409dc;
    }
    ctx->pc = 0x1409D4u;
    SET_GPR_U32(ctx, 31, 0x1409DCu);
    ctx->pc = 0x1409D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409D4u;
    // 0x1409d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x1409D4u, 0x1409DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409DCu;
label_1409dc:
    // 0x1409dc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1409dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1409e0:
    // 0x1409e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1409e4:
    // 0x1409e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1409e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1409e8:
    // 0x1409e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1409e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1409ec:
    // 0x1409ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1409ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1409f0:
    // 0x1409f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1409f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1409f4:
    // 0x1409f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1409f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1409f8:
    // 0x1409f8: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x1409f8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
label_1409fc:
    // 0x1409fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_140a00:
    // 0x140a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_140a04:
    // 0x140a04: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x140a04u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_140a08:
    // 0x140a08: 0xc66201a4  lwc1        $f2, 0x1A4($s3)
    ctx->pc = 0x140a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_140a0c:
    // 0x140a0c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x140a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_140a10:
    // 0x140a10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140a14:
    // 0x140a14: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x140a14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_140a18:
    // 0x140a18: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x140a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_140a1c:
    // 0x140a1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x140a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_140a20:
    // 0x140a20: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x140a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140a24:
    // 0x140a24: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x140a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_140a28:
    // 0x140a28: 0xe66201a4  swc1        $f2, 0x1A4($s3)
    ctx->pc = 0x140a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 420), bits); }
label_140a2c:
    // 0x140a2c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x140a2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_140a30:
    // 0x140a30: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x140a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_140a34:
    // 0x140a34: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x140a34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_140a38:
    // 0x140a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x140a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_140a3c:
    // 0x140a3c: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x140a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_140a40:
    // 0x140a40: 0x3e00008  jr          $ra
label_140a44:
    if (ctx->pc == 0x140A44u) {
        ctx->pc = 0x140A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A40u;
        // 0x140a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A48u;
        goto label_fallthrough_0x140a40;
    }
    ctx->pc = 0x140A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A40u;
        // 0x140a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140a40:
    ctx->pc = 0x140A48u;
}
