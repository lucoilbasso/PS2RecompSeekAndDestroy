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

// Function: WEntityMotionJobProc__FP8WcEntityP10WcSequence
// Address: 0x185640 - 0x185930
void WEntityMotionJobProc__FP8WcEntityP10WcSequence_0x185640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityMotionJobProc__FP8WcEntityP10WcSequence_0x185640");
#endif

    switch (ctx->pc) {
        case 0x185640u: goto label_185640;
        case 0x185644u: goto label_185644;
        case 0x185648u: goto label_185648;
        case 0x18564cu: goto label_18564c;
        case 0x185650u: goto label_185650;
        case 0x185654u: goto label_185654;
        case 0x185658u: goto label_185658;
        case 0x18565cu: goto label_18565c;
        case 0x185660u: goto label_185660;
        case 0x185664u: goto label_185664;
        case 0x185668u: goto label_185668;
        case 0x18566cu: goto label_18566c;
        case 0x185670u: goto label_185670;
        case 0x185674u: goto label_185674;
        case 0x185678u: goto label_185678;
        case 0x18567cu: goto label_18567c;
        case 0x185680u: goto label_185680;
        case 0x185684u: goto label_185684;
        case 0x185688u: goto label_185688;
        case 0x18568cu: goto label_18568c;
        case 0x185690u: goto label_185690;
        case 0x185694u: goto label_185694;
        case 0x185698u: goto label_185698;
        case 0x18569cu: goto label_18569c;
        case 0x1856a0u: goto label_1856a0;
        case 0x1856a4u: goto label_1856a4;
        case 0x1856a8u: goto label_1856a8;
        case 0x1856acu: goto label_1856ac;
        case 0x1856b0u: goto label_1856b0;
        case 0x1856b4u: goto label_1856b4;
        case 0x1856b8u: goto label_1856b8;
        case 0x1856bcu: goto label_1856bc;
        case 0x1856c0u: goto label_1856c0;
        case 0x1856c4u: goto label_1856c4;
        case 0x1856c8u: goto label_1856c8;
        case 0x1856ccu: goto label_1856cc;
        case 0x1856d0u: goto label_1856d0;
        case 0x1856d4u: goto label_1856d4;
        case 0x1856d8u: goto label_1856d8;
        case 0x1856dcu: goto label_1856dc;
        case 0x1856e0u: goto label_1856e0;
        case 0x1856e4u: goto label_1856e4;
        case 0x1856e8u: goto label_1856e8;
        case 0x1856ecu: goto label_1856ec;
        case 0x1856f0u: goto label_1856f0;
        case 0x1856f4u: goto label_1856f4;
        case 0x1856f8u: goto label_1856f8;
        case 0x1856fcu: goto label_1856fc;
        case 0x185700u: goto label_185700;
        case 0x185704u: goto label_185704;
        case 0x185708u: goto label_185708;
        case 0x18570cu: goto label_18570c;
        case 0x185710u: goto label_185710;
        case 0x185714u: goto label_185714;
        case 0x185718u: goto label_185718;
        case 0x18571cu: goto label_18571c;
        case 0x185720u: goto label_185720;
        case 0x185724u: goto label_185724;
        case 0x185728u: goto label_185728;
        case 0x18572cu: goto label_18572c;
        case 0x185730u: goto label_185730;
        case 0x185734u: goto label_185734;
        case 0x185738u: goto label_185738;
        case 0x18573cu: goto label_18573c;
        case 0x185740u: goto label_185740;
        case 0x185744u: goto label_185744;
        case 0x185748u: goto label_185748;
        case 0x18574cu: goto label_18574c;
        case 0x185750u: goto label_185750;
        case 0x185754u: goto label_185754;
        case 0x185758u: goto label_185758;
        case 0x18575cu: goto label_18575c;
        case 0x185760u: goto label_185760;
        case 0x185764u: goto label_185764;
        case 0x185768u: goto label_185768;
        case 0x18576cu: goto label_18576c;
        case 0x185770u: goto label_185770;
        case 0x185774u: goto label_185774;
        case 0x185778u: goto label_185778;
        case 0x18577cu: goto label_18577c;
        case 0x185780u: goto label_185780;
        case 0x185784u: goto label_185784;
        case 0x185788u: goto label_185788;
        case 0x18578cu: goto label_18578c;
        case 0x185790u: goto label_185790;
        case 0x185794u: goto label_185794;
        case 0x185798u: goto label_185798;
        case 0x18579cu: goto label_18579c;
        case 0x1857a0u: goto label_1857a0;
        case 0x1857a4u: goto label_1857a4;
        case 0x1857a8u: goto label_1857a8;
        case 0x1857acu: goto label_1857ac;
        case 0x1857b0u: goto label_1857b0;
        case 0x1857b4u: goto label_1857b4;
        case 0x1857b8u: goto label_1857b8;
        case 0x1857bcu: goto label_1857bc;
        case 0x1857c0u: goto label_1857c0;
        case 0x1857c4u: goto label_1857c4;
        case 0x1857c8u: goto label_1857c8;
        case 0x1857ccu: goto label_1857cc;
        case 0x1857d0u: goto label_1857d0;
        case 0x1857d4u: goto label_1857d4;
        case 0x1857d8u: goto label_1857d8;
        case 0x1857dcu: goto label_1857dc;
        case 0x1857e0u: goto label_1857e0;
        case 0x1857e4u: goto label_1857e4;
        case 0x1857e8u: goto label_1857e8;
        case 0x1857ecu: goto label_1857ec;
        case 0x1857f0u: goto label_1857f0;
        case 0x1857f4u: goto label_1857f4;
        case 0x1857f8u: goto label_1857f8;
        case 0x1857fcu: goto label_1857fc;
        case 0x185800u: goto label_185800;
        case 0x185804u: goto label_185804;
        case 0x185808u: goto label_185808;
        case 0x18580cu: goto label_18580c;
        case 0x185810u: goto label_185810;
        case 0x185814u: goto label_185814;
        case 0x185818u: goto label_185818;
        case 0x18581cu: goto label_18581c;
        case 0x185820u: goto label_185820;
        case 0x185824u: goto label_185824;
        case 0x185828u: goto label_185828;
        case 0x18582cu: goto label_18582c;
        case 0x185830u: goto label_185830;
        case 0x185834u: goto label_185834;
        case 0x185838u: goto label_185838;
        case 0x18583cu: goto label_18583c;
        case 0x185840u: goto label_185840;
        case 0x185844u: goto label_185844;
        case 0x185848u: goto label_185848;
        case 0x18584cu: goto label_18584c;
        case 0x185850u: goto label_185850;
        case 0x185854u: goto label_185854;
        case 0x185858u: goto label_185858;
        case 0x18585cu: goto label_18585c;
        case 0x185860u: goto label_185860;
        case 0x185864u: goto label_185864;
        case 0x185868u: goto label_185868;
        case 0x18586cu: goto label_18586c;
        case 0x185870u: goto label_185870;
        case 0x185874u: goto label_185874;
        case 0x185878u: goto label_185878;
        case 0x18587cu: goto label_18587c;
        case 0x185880u: goto label_185880;
        case 0x185884u: goto label_185884;
        case 0x185888u: goto label_185888;
        case 0x18588cu: goto label_18588c;
        case 0x185890u: goto label_185890;
        case 0x185894u: goto label_185894;
        case 0x185898u: goto label_185898;
        case 0x18589cu: goto label_18589c;
        case 0x1858a0u: goto label_1858a0;
        case 0x1858a4u: goto label_1858a4;
        case 0x1858a8u: goto label_1858a8;
        case 0x1858acu: goto label_1858ac;
        case 0x1858b0u: goto label_1858b0;
        case 0x1858b4u: goto label_1858b4;
        case 0x1858b8u: goto label_1858b8;
        case 0x1858bcu: goto label_1858bc;
        case 0x1858c0u: goto label_1858c0;
        case 0x1858c4u: goto label_1858c4;
        case 0x1858c8u: goto label_1858c8;
        case 0x1858ccu: goto label_1858cc;
        case 0x1858d0u: goto label_1858d0;
        case 0x1858d4u: goto label_1858d4;
        case 0x1858d8u: goto label_1858d8;
        case 0x1858dcu: goto label_1858dc;
        case 0x1858e0u: goto label_1858e0;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858e8u: goto label_1858e8;
        case 0x1858ecu: goto label_1858ec;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858f4u: goto label_1858f4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1858fcu: goto label_1858fc;
        case 0x185900u: goto label_185900;
        case 0x185904u: goto label_185904;
        case 0x185908u: goto label_185908;
        case 0x18590cu: goto label_18590c;
        case 0x185910u: goto label_185910;
        case 0x185914u: goto label_185914;
        case 0x185918u: goto label_185918;
        case 0x18591cu: goto label_18591c;
        case 0x185920u: goto label_185920;
        case 0x185924u: goto label_185924;
        case 0x185928u: goto label_185928;
        case 0x18592cu: goto label_18592c;
        default: break;
    }

    ctx->pc = 0x185640u;

label_185640:
    // 0x185640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_185644:
    // 0x185644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x185644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185648:
    // 0x185648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x185648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18564c:
    // 0x18564c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_185650:
    // 0x185650: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x185650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185654:
    // 0x185654: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x185654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_185658:
    // 0x185658: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x185658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_18565c:
    // 0x18565c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185660:
    // 0x185660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185664:
    // 0x185664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_185668:
    // 0x185668: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x185668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_18566c:
    // 0x18566c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_185670:
    // 0x185670: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x185670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_185674:
    // 0x185674: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x185674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_185678:
    // 0x185678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18567c:
    // 0x18567c: 0x8e510148  lw          $s1, 0x148($s2)
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_185680:
    // 0x185680: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x185680u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_185684:
    // 0x185684: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x185684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_185688:
    // 0x185688: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x185688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_18568c:
    // 0x18568c: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x18568cu;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_185690:
    // 0x185690: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_185694:
    if (ctx->pc == 0x185694u) {
        ctx->pc = 0x185694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185690u;
        // 0x185694: 0x2c970001  sltiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185698u;
        goto label_185698;
    }
    ctx->pc = 0x185690u;
    {
        const bool branch_taken_0x185690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185690u;
        // 0x185694: 0x2c970001  sltiu       $s7, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185690) {
            ctx->pc = 0x1856A4u;
            goto label_1856a4;
        }
    }
    ctx->pc = 0x185698u;
label_185698:
    // 0x185698: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x185698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_18569c:
    // 0x18569c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1856a0:
    if (ctx->pc == 0x1856A0u) {
        ctx->pc = 0x1856A4u;
        goto label_1856a4;
    }
    ctx->pc = 0x18569Cu;
    {
        const bool branch_taken_0x18569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18569c) {
            ctx->pc = 0x1856A8u;
            goto label_1856a8;
        }
    }
    ctx->pc = 0x1856A4u;
label_1856a4:
    // 0x1856a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1856a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1856a8:
    // 0x1856a8: 0x12200087  beqz        $s1, . + 4 + (0x87 << 2)
label_1856ac:
    if (ctx->pc == 0x1856ACu) {
        ctx->pc = 0x1856ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A8u;
        // 0x1856ac: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856B0u;
        goto label_1856b0;
    }
    ctx->pc = 0x1856A8u;
    {
        const bool branch_taken_0x1856a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A8u;
        // 0x1856ac: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856a8) {
            ctx->pc = 0x1858C8u;
            goto label_1858c8;
        }
    }
    ctx->pc = 0x1856B0u;
label_1856b0:
    // 0x1856b0: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x1856b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1856b4:
    // 0x1856b4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1856b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1856b8:
    // 0x1856b8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1856b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1856bc:
    // 0x1856bc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1856c0:
    if (ctx->pc == 0x1856C0u) {
        ctx->pc = 0x1856C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856BCu;
        // 0x1856c0: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856C4u;
        goto label_1856c4;
    }
    ctx->pc = 0x1856BCu;
    {
        const bool branch_taken_0x1856bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1856C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856BCu;
        // 0x1856c0: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856bc) {
            ctx->pc = 0x18572Cu;
            goto label_18572c;
        }
    }
    ctx->pc = 0x1856C4u;
label_1856c4:
    // 0x1856c4: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_1856c8:
    if (ctx->pc == 0x1856C8u) {
        ctx->pc = 0x1856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856C4u;
        // 0x1856c8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856CCu;
        goto label_1856cc;
    }
    ctx->pc = 0x1856C4u;
    {
        const bool branch_taken_0x1856c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856C4u;
        // 0x1856c8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856c4) {
            ctx->pc = 0x1856E0u;
            goto label_1856e0;
        }
    }
    ctx->pc = 0x1856CCu;
label_1856cc:
    // 0x1856cc: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_1856d0:
    if (ctx->pc == 0x1856D0u) {
        ctx->pc = 0x1856D4u;
        goto label_1856d4;
    }
    ctx->pc = 0x1856CCu;
    {
        const bool branch_taken_0x1856cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856cc) {
            ctx->pc = 0x185898u;
            goto label_185898;
        }
    }
    ctx->pc = 0x1856D4u;
label_1856d4:
    // 0x1856d4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1856d8:
    if (ctx->pc == 0x1856D8u) {
        ctx->pc = 0x1856D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856D4u;
        // 0x1856d8: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856DCu;
        goto label_1856dc;
    }
    ctx->pc = 0x1856D4u;
    {
        const bool branch_taken_0x1856d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856D4u;
        // 0x1856d8: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856d4) {
            ctx->pc = 0x185730u;
            goto label_185730;
        }
    }
    ctx->pc = 0x1856DCu;
label_1856dc:
    // 0x1856dc: 0x0  nop
    ctx->pc = 0x1856dcu;
    // NOP
label_1856e0:
    // 0x1856e0: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_1856e4:
    if (ctx->pc == 0x1856E4u) {
        ctx->pc = 0x1856E8u;
        goto label_1856e8;
    }
    ctx->pc = 0x1856E0u;
    {
        const bool branch_taken_0x1856e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856e0) {
            ctx->pc = 0x185714u;
            goto label_185714;
        }
    }
    ctx->pc = 0x1856E8u;
label_1856e8:
    // 0x1856e8: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_1856ec:
    // 0x1856ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1856f0:
    if (ctx->pc == 0x1856F0u) {
        ctx->pc = 0x1856F4u;
        goto label_1856f4;
    }
    ctx->pc = 0x1856ECu;
    {
        const bool branch_taken_0x1856ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856ec) {
            ctx->pc = 0x185714u;
            goto label_185714;
        }
    }
    ctx->pc = 0x1856F4u;
label_1856f4:
    // 0x1856f4: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1856f8:
    // 0x1856f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1856fc:
    // 0x1856fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_185700:
    if (ctx->pc == 0x185700u) {
        ctx->pc = 0x185700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856FCu;
        // 0x185700: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185704u;
        goto label_185704;
    }
    ctx->pc = 0x1856FCu;
    {
        const bool branch_taken_0x1856fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1856fc) {
            ctx->pc = 0x185700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1856FCu;
            // 0x185700: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            goto label_185730;
        }
    }
    ctx->pc = 0x185704u;
label_185704:
    // 0x185704: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x185704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_185708:
    // 0x185708: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
label_18570c:
    // 0x18570c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_185710:
    if (ctx->pc == 0x185710u) {
        ctx->pc = 0x185710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18570Cu;
        // 0x185710: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185714u;
        goto label_185714;
    }
    ctx->pc = 0x18570Cu;
    {
        const bool branch_taken_0x18570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18570c) {
            ctx->pc = 0x185710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18570Cu;
            // 0x185710: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            goto label_185730;
        }
    }
    ctx->pc = 0x185714u;
label_185714:
    // 0x185714: 0x56e00006  bnel        $s7, $zero, . + 4 + (0x6 << 2)
label_185718:
    if (ctx->pc == 0x185718u) {
        ctx->pc = 0x185718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185714u;
        // 0x185718: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18571Cu;
        goto label_18571c;
    }
    ctx->pc = 0x185714u;
    {
        const bool branch_taken_0x185714 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x185714) {
            ctx->pc = 0x185718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185714u;
            // 0x185718: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185730u;
            goto label_185730;
        }
    }
    ctx->pc = 0x18571Cu;
label_18571c:
    // 0x18571c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_185720:
    // 0x185720: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x185720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_185724:
    // 0x185724: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_185728:
    if (ctx->pc == 0x185728u) {
        ctx->pc = 0x18572Cu;
        goto label_18572c;
    }
    ctx->pc = 0x185724u;
    {
        const bool branch_taken_0x185724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185724) {
            ctx->pc = 0x185898u;
            goto label_185898;
        }
    }
    ctx->pc = 0x18572Cu;
label_18572c:
    // 0x18572c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_185730:
    // 0x185730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_185734:
    if (ctx->pc == 0x185734u) {
        ctx->pc = 0x185734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185730u;
        // 0x185734: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185738u;
        goto label_185738;
    }
    ctx->pc = 0x185730u;
    {
        const bool branch_taken_0x185730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185730u;
        // 0x185734: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185730) {
            ctx->pc = 0x185748u;
            goto label_185748;
        }
    }
    ctx->pc = 0x185738u;
label_185738:
    // 0x185738: 0xc069268  jal         func_1A49A0
label_18573c:
    if (ctx->pc == 0x18573Cu) {
        ctx->pc = 0x18573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185738u;
        // 0x18573c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185740u;
        goto label_185740;
    }
    ctx->pc = 0x185738u;
    SET_GPR_U32(ctx, 31, 0x185740u);
    ctx->pc = 0x18573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185738u;
    // 0x18573c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A49A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49A0u, 0x185738u, 0x185740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185740u;
label_185740:
    // 0x185740: 0x10000002  b           . + 4 + (0x2 << 2)
label_185744:
    if (ctx->pc == 0x185744u) {
        ctx->pc = 0x185744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185740u;
        // 0x185744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185748u;
        goto label_185748;
    }
    ctx->pc = 0x185740u;
    {
        const bool branch_taken_0x185740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185740u;
        // 0x185744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185740) {
            ctx->pc = 0x18574Cu;
            goto label_18574c;
        }
    }
    ctx->pc = 0x185748u;
label_185748:
    // 0x185748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18574c:
    // 0x18574c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_185750:
    if (ctx->pc == 0x185750u) {
        ctx->pc = 0x185750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18574Cu;
        // 0x185750: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185754u;
        goto label_185754;
    }
    ctx->pc = 0x18574Cu;
    {
        const bool branch_taken_0x18574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18574Cu;
        // 0x185750: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18574c) {
            ctx->pc = 0x185768u;
            goto label_185768;
        }
    }
    ctx->pc = 0x185754u;
label_185754:
    // 0x185754: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x185754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_185758:
    // 0x185758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18575c:
    // 0x18575c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_185760:
    // 0x185760: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_185764:
    if (ctx->pc == 0x185764u) {
        ctx->pc = 0x185764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185760u;
        // 0x185764: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185768u;
        goto label_185768;
    }
    ctx->pc = 0x185760u;
    {
        const bool branch_taken_0x185760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185760u;
        // 0x185764: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185760) {
            ctx->pc = 0x185898u;
            goto label_185898;
        }
    }
    ctx->pc = 0x185768u;
label_185768:
    // 0x185768: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x185768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18576c:
    // 0x18576c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_185770:
    // 0x185770: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_185774:
    if (ctx->pc == 0x185774u) {
        ctx->pc = 0x185774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185770u;
        // 0x185774: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185778u;
        goto label_185778;
    }
    ctx->pc = 0x185770u;
    {
        const bool branch_taken_0x185770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185770u;
        // 0x185774: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185770) {
            ctx->pc = 0x185780u;
            goto label_185780;
        }
    }
    ctx->pc = 0x185778u;
label_185778:
    // 0x185778: 0x1000002a  b           . + 4 + (0x2A << 2)
label_18577c:
    if (ctx->pc == 0x18577Cu) {
        ctx->pc = 0x18577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185778u;
        // 0x18577c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185780u;
        goto label_185780;
    }
    ctx->pc = 0x185778u;
    {
        const bool branch_taken_0x185778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185778u;
        // 0x18577c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185778) {
            ctx->pc = 0x185824u;
            goto label_185824;
        }
    }
    ctx->pc = 0x185780u;
label_185780:
    // 0x185780: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_185784:
    // 0x185784: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_185788:
    if (ctx->pc == 0x185788u) {
        ctx->pc = 0x185788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185784u;
        // 0x185788: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18578Cu;
        goto label_18578c;
    }
    ctx->pc = 0x185784u;
    {
        const bool branch_taken_0x185784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185784u;
        // 0x185788: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185784) {
            ctx->pc = 0x1857D8u;
            goto label_1857d8;
        }
    }
    ctx->pc = 0x18578Cu;
label_18578c:
    // 0x18578c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_185790:
    // 0x185790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185794:
    // 0x185794: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x185794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_185798:
    // 0x185798: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18579c:
    // 0x18579c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1857a0:
    // 0x1857a0: 0x60f809  jalr        $v1
label_1857a4:
    if (ctx->pc == 0x1857A4u) {
        ctx->pc = 0x1857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857A0u;
        // 0x1857a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857A8u;
        goto label_1857a8;
    }
    ctx->pc = 0x1857A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1857A8u);
        ctx->pc = 0x1857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857A0u;
        // 0x1857a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857A0u, 0x1857A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1857A8u;
label_1857a8:
    // 0x1857a8: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1857ac:
    // 0x1857ac: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_1857b0:
    if (ctx->pc == 0x1857B0u) {
        ctx->pc = 0x1857B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857ACu;
        // 0x1857b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857B4u;
        goto label_1857b4;
    }
    ctx->pc = 0x1857ACu;
    {
        const bool branch_taken_0x1857ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857ACu;
        // 0x1857b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857ac) {
            ctx->pc = 0x185824u;
            goto label_185824;
        }
    }
    ctx->pc = 0x1857B4u;
label_1857b4:
    // 0x1857b4: 0x0  nop
    ctx->pc = 0x1857b4u;
    // NOP
label_1857b8:
    // 0x1857b8: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x1857b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1857bc:
    // 0x1857bc: 0xc061906  jal         func_186418
label_1857c0:
    if (ctx->pc == 0x1857C0u) {
        ctx->pc = 0x1857C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857BCu;
        // 0x1857c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857C4u;
        goto label_1857c4;
    }
    ctx->pc = 0x1857BCu;
    SET_GPR_U32(ctx, 31, 0x1857C4u);
    ctx->pc = 0x1857C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857BCu;
    // 0x1857c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186418u, 0x1857BCu, 0x1857C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857C4u;
label_1857c4:
    // 0x1857c4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
label_1857c8:
    if (ctx->pc == 0x1857C8u) {
        ctx->pc = 0x1857C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857C4u;
        // 0x1857c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857CCu;
        goto label_1857cc;
    }
    ctx->pc = 0x1857C4u;
    {
        const bool branch_taken_0x1857c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1857C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857C4u;
        // 0x1857c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857c4) {
            ctx->pc = 0x1857B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1857b8;
        }
    }
    ctx->pc = 0x1857CCu;
label_1857cc:
    // 0x1857cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1857d0:
    if (ctx->pc == 0x1857D0u) {
        ctx->pc = 0x1857D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857CCu;
        // 0x1857d0: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857D4u;
        goto label_1857d4;
    }
    ctx->pc = 0x1857CCu;
    {
        const bool branch_taken_0x1857cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857CCu;
        // 0x1857d0: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857cc) {
            ctx->pc = 0x185828u;
            goto label_185828;
        }
    }
    ctx->pc = 0x1857D4u;
label_1857d4:
    // 0x1857d4: 0x0  nop
    ctx->pc = 0x1857d4u;
    // NOP
label_1857d8:
    // 0x1857d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1857dc:
    // 0x1857dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1857dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1857e0:
    // 0x1857e0: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_1857e4:
    if (ctx->pc == 0x1857E4u) {
        ctx->pc = 0x1857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857E0u;
        // 0x1857e4: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857E8u;
        goto label_1857e8;
    }
    ctx->pc = 0x1857E0u;
    {
        const bool branch_taken_0x1857e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1857e0) {
            ctx->pc = 0x1857E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1857E0u;
            // 0x1857e4: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185828u;
            goto label_185828;
        }
    }
    ctx->pc = 0x1857E8u;
label_1857e8:
    // 0x1857e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1857ec:
    // 0x1857ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1857ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1857f0:
    // 0x1857f0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1857f4:
    // 0x1857f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1857f8:
    // 0x1857f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1857fc:
    // 0x1857fc: 0x60f809  jalr        $v1
label_185800:
    if (ctx->pc == 0x185800u) {
        ctx->pc = 0x185800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857FCu;
        // 0x185800: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185804u;
        goto label_185804;
    }
    ctx->pc = 0x1857FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185804u);
        ctx->pc = 0x185800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857FCu;
        // 0x185800: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857FCu, 0x185804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185804u;
label_185804:
    // 0x185804: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_185808:
    // 0x185808: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_18580c:
    if (ctx->pc == 0x18580Cu) {
        ctx->pc = 0x18580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185808u;
        // 0x18580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185810u;
        goto label_185810;
    }
    ctx->pc = 0x185808u;
    {
        const bool branch_taken_0x185808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185808u;
        // 0x18580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185808) {
            ctx->pc = 0x185824u;
            goto label_185824;
        }
    }
    ctx->pc = 0x185810u;
label_185810:
    // 0x185810: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_185814:
    // 0x185814: 0xc061906  jal         func_186418
label_185818:
    if (ctx->pc == 0x185818u) {
        ctx->pc = 0x185818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185814u;
        // 0x185818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18581Cu;
        goto label_18581c;
    }
    ctx->pc = 0x185814u;
    SET_GPR_U32(ctx, 31, 0x18581Cu);
    ctx->pc = 0x185818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185814u;
    // 0x185818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186418u, 0x185814u, 0x18581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18581Cu;
label_18581c:
    // 0x18581c: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
label_185820:
    if (ctx->pc == 0x185820u) {
        ctx->pc = 0x185820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18581Cu;
        // 0x185820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185824u;
        goto label_185824;
    }
    ctx->pc = 0x18581Cu;
    {
        const bool branch_taken_0x18581c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x185820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18581Cu;
        // 0x185820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18581c) {
            ctx->pc = 0x185810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185810;
        }
    }
    ctx->pc = 0x185824u;
label_185824:
    // 0x185824: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x185824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_185828:
    // 0x185828: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x185828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_18582c:
    // 0x18582c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_185830:
    // 0x185830: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_185834:
    if (ctx->pc == 0x185834u) {
        ctx->pc = 0x185834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185830u;
        // 0x185834: 0x26460148  addiu       $a2, $s2, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185838u;
        goto label_185838;
    }
    ctx->pc = 0x185830u;
    {
        const bool branch_taken_0x185830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185830u;
        // 0x185834: 0x26460148  addiu       $a2, $s2, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185830) {
            ctx->pc = 0x185898u;
            goto label_185898;
        }
    }
    ctx->pc = 0x185838u;
label_185838:
    // 0x185838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18583c:
    // 0x18583c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_185840:
    // 0x185840: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x185840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185844:
    // 0x185844: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_185848:
    if (ctx->pc == 0x185848u) {
        ctx->pc = 0x185848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185844u;
        // 0x185848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18584Cu;
        goto label_18584c;
    }
    ctx->pc = 0x185844u;
    {
        const bool branch_taken_0x185844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185844u;
        // 0x185848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185844) {
            ctx->pc = 0x185890u;
            goto label_185890;
        }
    }
    ctx->pc = 0x18584Cu;
label_18584c:
    // 0x18584c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
label_185850:
    if (ctx->pc == 0x185850u) {
        ctx->pc = 0x185854u;
        goto label_185854;
    }
    ctx->pc = 0x18584Cu;
    {
        const bool branch_taken_0x18584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x18584c) {
            ctx->pc = 0x18586Cu;
            goto label_18586c;
        }
    }
    ctx->pc = 0x185854u;
label_185854:
    // 0x185854: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x185854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185858:
    // 0x185858: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18585c:
    // 0x18585c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_185860:
    if (ctx->pc == 0x185860u) {
        ctx->pc = 0x185864u;
        goto label_185864;
    }
    ctx->pc = 0x18585Cu;
    {
        const bool branch_taken_0x18585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18585c) {
            ctx->pc = 0x185890u;
            goto label_185890;
        }
    }
    ctx->pc = 0x185864u;
label_185864:
    // 0x185864: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_185868:
    if (ctx->pc == 0x185868u) {
        ctx->pc = 0x185868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185864u;
        // 0x185868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18586Cu;
        goto label_18586c;
    }
    ctx->pc = 0x185864u;
    {
        const bool branch_taken_0x185864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x185864) {
            ctx->pc = 0x185868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185864u;
            // 0x185868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185858;
        }
    }
    ctx->pc = 0x18586Cu;
label_18586c:
    // 0x18586c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_185870:
    if (ctx->pc == 0x185870u) {
        ctx->pc = 0x185874u;
        goto label_185874;
    }
    ctx->pc = 0x18586Cu;
    {
        const bool branch_taken_0x18586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18586c) {
            ctx->pc = 0x185890u;
            goto label_185890;
        }
    }
    ctx->pc = 0x185874u;
label_185874:
    // 0x185874: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_185878:
    if (ctx->pc == 0x185878u) {
        ctx->pc = 0x185878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185874u;
        // 0x185878: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18587Cu;
        goto label_18587c;
    }
    ctx->pc = 0x185874u;
    {
        const bool branch_taken_0x185874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185874u;
        // 0x185878: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185874) {
            ctx->pc = 0x185888u;
            goto label_185888;
        }
    }
    ctx->pc = 0x18587Cu;
label_18587c:
    // 0x18587c: 0x10000003  b           . + 4 + (0x3 << 2)
label_185880:
    if (ctx->pc == 0x185880u) {
        ctx->pc = 0x185880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18587Cu;
        // 0x185880: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185884u;
        goto label_185884;
    }
    ctx->pc = 0x18587Cu;
    {
        const bool branch_taken_0x18587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18587Cu;
        // 0x185880: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18587c) {
            ctx->pc = 0x18588Cu;
            goto label_18588c;
        }
    }
    ctx->pc = 0x185884u;
label_185884:
    // 0x185884: 0x0  nop
    ctx->pc = 0x185884u;
    // NOP
label_185888:
    // 0x185888: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x185888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_18588c:
    // 0x18588c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18588cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_185890:
    // 0x185890: 0xc069070  jal         func_1A41C0
label_185894:
    if (ctx->pc == 0x185894u) {
        ctx->pc = 0x185898u;
        goto label_185898;
    }
    ctx->pc = 0x185890u;
    SET_GPR_U32(ctx, 31, 0x185898u);
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x185890u, 0x185898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185898u;
label_185898:
    // 0x185898: 0x1680ff85  bnez        $s4, . + 4 + (-0x7B << 2)
label_18589c:
    if (ctx->pc == 0x18589Cu) {
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A0u;
        goto label_1858a0;
    }
    ctx->pc = 0x185898u;
    {
        const bool branch_taken_0x185898 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185898) {
            ctx->pc = 0x1856B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1856b0;
        }
    }
    ctx->pc = 0x1858A0u;
label_1858a0:
    // 0x1858a0: 0x12a00017  beqz        $s5, . + 4 + (0x17 << 2)
label_1858a4:
    if (ctx->pc == 0x1858A4u) {
        ctx->pc = 0x1858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A0u;
        // 0x1858a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A8u;
        goto label_1858a8;
    }
    ctx->pc = 0x1858A0u;
    {
        const bool branch_taken_0x1858a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A0u;
        // 0x1858a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858a0) {
            ctx->pc = 0x185900u;
            goto label_185900;
        }
    }
    ctx->pc = 0x1858A8u;
label_1858a8:
    // 0x1858a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1858a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1858ac:
    // 0x1858ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1858acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1858b0:
    // 0x1858b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1858b4:
    // 0x1858b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1858b8:
    // 0x1858b8: 0x60f809  jalr        $v1
label_1858bc:
    if (ctx->pc == 0x1858BCu) {
        ctx->pc = 0x1858BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858B8u;
        // 0x1858bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858C0u;
        goto label_1858c0;
    }
    ctx->pc = 0x1858B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1858C0u);
        ctx->pc = 0x1858BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858B8u;
        // 0x1858bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1858B8u, 0x1858C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1858C0u;
label_1858c0:
    // 0x1858c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1858c4:
    if (ctx->pc == 0x1858C4u) {
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858C8u;
        goto label_1858c8;
    }
    ctx->pc = 0x1858C0u;
    {
        const bool branch_taken_0x1858c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858c0) {
            ctx->pc = 0x185904u;
            goto label_185904;
        }
    }
    ctx->pc = 0x1858C8u;
label_1858c8:
    // 0x1858c8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1858cc:
    // 0x1858cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1858ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1858d0:
    // 0x1858d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1858d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1858d4:
    // 0x1858d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1858d8:
    if (ctx->pc == 0x1858D8u) {
        ctx->pc = 0x1858D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D4u;
        // 0x1858d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858DCu;
        goto label_1858dc;
    }
    ctx->pc = 0x1858D4u;
    {
        const bool branch_taken_0x1858d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D4u;
        // 0x1858d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858d4) {
            ctx->pc = 0x185904u;
            goto label_185904;
        }
    }
    ctx->pc = 0x1858DCu;
label_1858dc:
    // 0x1858dc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1858dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1858e0:
    // 0x1858e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1858e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1858e4:
    // 0x1858e4: 0xc0685b8  jal         func_1A16E0
label_1858e8:
    if (ctx->pc == 0x1858E8u) {
        ctx->pc = 0x1858E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858E4u;
        // 0x1858e8: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858ECu;
        goto label_1858ec;
    }
    ctx->pc = 0x1858E4u;
    SET_GPR_U32(ctx, 31, 0x1858ECu);
    ctx->pc = 0x1858E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E4u;
    // 0x1858e8: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1858E4u, 0x1858ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858ECu;
label_1858ec:
    // 0x1858ec: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_1858f0:
    // 0x1858f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1858f4:
    // 0x1858f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1858f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1858f8:
    // 0x1858f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1858f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1858fc:
    // 0x1858fc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1858fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_185900:
    // 0x185900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185904:
    // 0x185904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185908:
    // 0x185908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18590c:
    // 0x18590c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18590cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185910:
    // 0x185910: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x185910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185914:
    // 0x185914: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x185914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_185918:
    // 0x185918: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x185918u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18591c:
    // 0x18591c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18591cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_185920:
    // 0x185920: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x185920u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_185924:
    // 0x185924: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x185924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_185928:
    // 0x185928: 0x3e00008  jr          $ra
label_18592c:
    if (ctx->pc == 0x18592Cu) {
        ctx->pc = 0x18592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185928u;
        // 0x18592c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185930u;
        goto label_fallthrough_0x185928;
    }
    ctx->pc = 0x185928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185928u;
        // 0x18592c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x185928:
    ctx->pc = 0x185930u;
}
