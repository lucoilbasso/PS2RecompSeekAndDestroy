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

// Function: EntityAllObjSorting__8WcEntity
// Address: 0x1854b8 - 0x185618
void EntityAllObjSorting__8WcEntity_0x1854b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntityAllObjSorting__8WcEntity_0x1854b8");
#endif

    switch (ctx->pc) {
        case 0x1854b8u: goto label_1854b8;
        case 0x1854bcu: goto label_1854bc;
        case 0x1854c0u: goto label_1854c0;
        case 0x1854c4u: goto label_1854c4;
        case 0x1854c8u: goto label_1854c8;
        case 0x1854ccu: goto label_1854cc;
        case 0x1854d0u: goto label_1854d0;
        case 0x1854d4u: goto label_1854d4;
        case 0x1854d8u: goto label_1854d8;
        case 0x1854dcu: goto label_1854dc;
        case 0x1854e0u: goto label_1854e0;
        case 0x1854e4u: goto label_1854e4;
        case 0x1854e8u: goto label_1854e8;
        case 0x1854ecu: goto label_1854ec;
        case 0x1854f0u: goto label_1854f0;
        case 0x1854f4u: goto label_1854f4;
        case 0x1854f8u: goto label_1854f8;
        case 0x1854fcu: goto label_1854fc;
        case 0x185500u: goto label_185500;
        case 0x185504u: goto label_185504;
        case 0x185508u: goto label_185508;
        case 0x18550cu: goto label_18550c;
        case 0x185510u: goto label_185510;
        case 0x185514u: goto label_185514;
        case 0x185518u: goto label_185518;
        case 0x18551cu: goto label_18551c;
        case 0x185520u: goto label_185520;
        case 0x185524u: goto label_185524;
        case 0x185528u: goto label_185528;
        case 0x18552cu: goto label_18552c;
        case 0x185530u: goto label_185530;
        case 0x185534u: goto label_185534;
        case 0x185538u: goto label_185538;
        case 0x18553cu: goto label_18553c;
        case 0x185540u: goto label_185540;
        case 0x185544u: goto label_185544;
        case 0x185548u: goto label_185548;
        case 0x18554cu: goto label_18554c;
        case 0x185550u: goto label_185550;
        case 0x185554u: goto label_185554;
        case 0x185558u: goto label_185558;
        case 0x18555cu: goto label_18555c;
        case 0x185560u: goto label_185560;
        case 0x185564u: goto label_185564;
        case 0x185568u: goto label_185568;
        case 0x18556cu: goto label_18556c;
        case 0x185570u: goto label_185570;
        case 0x185574u: goto label_185574;
        case 0x185578u: goto label_185578;
        case 0x18557cu: goto label_18557c;
        case 0x185580u: goto label_185580;
        case 0x185584u: goto label_185584;
        case 0x185588u: goto label_185588;
        case 0x18558cu: goto label_18558c;
        case 0x185590u: goto label_185590;
        case 0x185594u: goto label_185594;
        case 0x185598u: goto label_185598;
        case 0x18559cu: goto label_18559c;
        case 0x1855a0u: goto label_1855a0;
        case 0x1855a4u: goto label_1855a4;
        case 0x1855a8u: goto label_1855a8;
        case 0x1855acu: goto label_1855ac;
        case 0x1855b0u: goto label_1855b0;
        case 0x1855b4u: goto label_1855b4;
        case 0x1855b8u: goto label_1855b8;
        case 0x1855bcu: goto label_1855bc;
        case 0x1855c0u: goto label_1855c0;
        case 0x1855c4u: goto label_1855c4;
        case 0x1855c8u: goto label_1855c8;
        case 0x1855ccu: goto label_1855cc;
        case 0x1855d0u: goto label_1855d0;
        case 0x1855d4u: goto label_1855d4;
        case 0x1855d8u: goto label_1855d8;
        case 0x1855dcu: goto label_1855dc;
        case 0x1855e0u: goto label_1855e0;
        case 0x1855e4u: goto label_1855e4;
        case 0x1855e8u: goto label_1855e8;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855f0u: goto label_1855f0;
        case 0x1855f4u: goto label_1855f4;
        case 0x1855f8u: goto label_1855f8;
        case 0x1855fcu: goto label_1855fc;
        case 0x185600u: goto label_185600;
        case 0x185604u: goto label_185604;
        case 0x185608u: goto label_185608;
        case 0x18560cu: goto label_18560c;
        case 0x185610u: goto label_185610;
        case 0x185614u: goto label_185614;
        default: break;
    }

    ctx->pc = 0x1854b8u;

label_1854b8:
    // 0x1854b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1854b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1854bc:
    // 0x1854bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1854bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1854c0:
    // 0x1854c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1854c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1854c4:
    // 0x1854c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1854c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1854c8:
    // 0x1854c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1854c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1854cc:
    // 0x1854cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1854ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1854d0:
    // 0x1854d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1854d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1854d4:
    // 0x1854d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1854d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1854d8:
    // 0x1854d8: 0x8c5315c4  lw          $s3, 0x15C4($v0)
    ctx->pc = 0x1854d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
label_1854dc:
    // 0x1854dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1854dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1854e0:
    // 0x1854e0: 0x3c150400  lui         $s5, 0x400
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1024 << 16));
label_1854e4:
    // 0x1854e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1854e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1854e8:
    // 0x1854e8: 0x3c160010  lui         $s6, 0x10
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16 << 16));
label_1854ec:
    // 0x1854ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1854ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1854f0:
    // 0x1854f0: 0x3c170100  lui         $s7, 0x100
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)256 << 16));
label_1854f4:
    // 0x1854f4: 0x0  nop
    ctx->pc = 0x1854f4u;
    // NOP
label_1854f8:
    // 0x1854f8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1854fc:
    // 0x1854fc: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185500:
    // 0x185500: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_185504:
    // 0x185504: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_185508:
    if (ctx->pc == 0x185508u) {
        ctx->pc = 0x18550Cu;
        goto label_18550c;
    }
    ctx->pc = 0x185504u;
    {
        const bool branch_taken_0x185504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185504) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x18550Cu;
label_18550c:
    // 0x18550c: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_185510:
    // 0x185510: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_185514:
    if (ctx->pc == 0x185514u) {
        ctx->pc = 0x185518u;
        goto label_185518;
    }
    ctx->pc = 0x185510u;
    {
        const bool branch_taken_0x185510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185510) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x185518u;
label_185518:
    // 0x185518: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_18551c:
    // 0x18551c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_185520:
    // 0x185520: 0x571824  and         $v1, $v0, $s7
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_185524:
    // 0x185524: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
label_185528:
    if (ctx->pc == 0x185528u) {
        ctx->pc = 0x185528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185524u;
        // 0x185528: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18552Cu;
        goto label_18552c;
    }
    ctx->pc = 0x185524u;
    {
        const bool branch_taken_0x185524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185524) {
            ctx->pc = 0x185528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185524u;
            // 0x185528: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1855A0u;
            goto label_1855a0;
        }
    }
    ctx->pc = 0x18552Cu;
label_18552c:
    // 0x18552c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x18552cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_185530:
    // 0x185530: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_185534:
    if (ctx->pc == 0x185534u) {
        ctx->pc = 0x185534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185530u;
        // 0x185534: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185538u;
        goto label_185538;
    }
    ctx->pc = 0x185530u;
    {
        const bool branch_taken_0x185530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185530) {
            ctx->pc = 0x185534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185530u;
            // 0x185534: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1855A0u;
            goto label_1855a0;
        }
    }
    ctx->pc = 0x185538u;
label_185538:
    // 0x185538: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_18553c:
    // 0x18553c: 0x3412e000  ori         $s2, $zero, 0xE000
    ctx->pc = 0x18553cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_185540:
    // 0x185540: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x185540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_185544:
    // 0x185544: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x185544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_185548:
    // 0x185548: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18554c:
    if (ctx->pc == 0x18554Cu) {
        ctx->pc = 0x18554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185548u;
        // 0x18554c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185550u;
        goto label_185550;
    }
    ctx->pc = 0x185548u;
    {
        const bool branch_taken_0x185548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185548u;
        // 0x18554c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185548) {
            ctx->pc = 0x185590u;
            goto label_185590;
        }
    }
    ctx->pc = 0x185550u;
label_185550:
    // 0x185550: 0xc061390  jal         func_184E40
label_185554:
    if (ctx->pc == 0x185554u) {
        ctx->pc = 0x185554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185550u;
        // 0x185554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185558u;
        goto label_185558;
    }
    ctx->pc = 0x185550u;
    SET_GPR_U32(ctx, 31, 0x185558u);
    ctx->pc = 0x185554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185550u;
    // 0x185554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x185550u, 0x185558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185558u;
label_185558:
    // 0x185558: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x185558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_18555c:
    // 0x18555c: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x18555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_185560:
    // 0x185560: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_185564:
    if (ctx->pc == 0x185564u) {
        ctx->pc = 0x185564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185560u;
        // 0x185564: 0x30621fff  andi        $v0, $v1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185568u;
        goto label_185568;
    }
    ctx->pc = 0x185560u;
    {
        const bool branch_taken_0x185560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185560u;
        // 0x185564: 0x30621fff  andi        $v0, $v1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185560) {
            ctx->pc = 0x185590u;
            goto label_185590;
        }
    }
    ctx->pc = 0x185568u;
label_185568:
    // 0x185568: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_18556c:
    // 0x18556c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x18556cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_185570:
    // 0x185570: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x185570u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_185574:
    // 0x185574: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_185578:
    if (ctx->pc == 0x185578u) {
        ctx->pc = 0x185578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185574u;
        // 0x185578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18557Cu;
        goto label_18557c;
    }
    ctx->pc = 0x185574u;
    {
        const bool branch_taken_0x185574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185574u;
        // 0x185578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185574) {
            ctx->pc = 0x185590u;
            goto label_185590;
        }
    }
    ctx->pc = 0x18557Cu;
label_18557c:
    // 0x18557c: 0x0  nop
    ctx->pc = 0x18557cu;
    // NOP
label_185580:
    // 0x185580: 0xc061934  jal         func_1864D0
label_185584:
    if (ctx->pc == 0x185584u) {
        ctx->pc = 0x185584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185580u;
        // 0x185584: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185588u;
        goto label_185588;
    }
    ctx->pc = 0x185580u;
    SET_GPR_U32(ctx, 31, 0x185588u);
    ctx->pc = 0x185584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185580u;
    // 0x185584: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x185580u, 0x185588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185588u;
label_185588:
    // 0x185588: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
label_18558c:
    if (ctx->pc == 0x18558Cu) {
        ctx->pc = 0x18558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185588u;
        // 0x18558c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185590u;
        goto label_185590;
    }
    ctx->pc = 0x185588u;
    {
        const bool branch_taken_0x185588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185588u;
        // 0x18558c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185588) {
            ctx->pc = 0x185580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185580;
        }
    }
    ctx->pc = 0x185590u;
label_185590:
    // 0x185590: 0xc061422  jal         func_185088
label_185594:
    if (ctx->pc == 0x185594u) {
        ctx->pc = 0x185594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185590u;
        // 0x185594: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185598u;
        goto label_185598;
    }
    ctx->pc = 0x185590u;
    SET_GPR_U32(ctx, 31, 0x185598u);
    ctx->pc = 0x185594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185590u;
    // 0x185594: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x185590u, 0x185598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185598u;
label_185598:
    // 0x185598: 0x10000013  b           . + 4 + (0x13 << 2)
label_18559c:
    if (ctx->pc == 0x18559Cu) {
        ctx->pc = 0x1855A0u;
        goto label_1855a0;
    }
    ctx->pc = 0x185598u;
    {
        const bool branch_taken_0x185598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185598) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x1855A0u;
label_1855a0:
    // 0x1855a0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x1855a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_1855a4:
    // 0x1855a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1855a8:
    if (ctx->pc == 0x1855A8u) {
        ctx->pc = 0x1855ACu;
        goto label_1855ac;
    }
    ctx->pc = 0x1855A4u;
    {
        const bool branch_taken_0x1855a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1855a4) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x1855ACu;
label_1855ac:
    // 0x1855ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1855acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1855b0:
    // 0x1855b0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1855b4:
    // 0x1855b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1855b8:
    // 0x1855b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1855bc:
    // 0x1855bc: 0x40f809  jalr        $v0
label_1855c0:
    if (ctx->pc == 0x1855C0u) {
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855C4u;
        goto label_1855c4;
    }
    ctx->pc = 0x1855BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1855C4u);
        ctx->pc = 0x1855C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855BCu;
        // 0x1855c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1855BCu, 0x1855C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1855C4u;
label_1855c4:
    // 0x1855c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1855c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1855c8:
    // 0x1855c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1855cc:
    if (ctx->pc == 0x1855CCu) {
        ctx->pc = 0x1855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855C8u;
        // 0x1855cc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855D0u;
        goto label_1855d0;
    }
    ctx->pc = 0x1855C8u;
    {
        const bool branch_taken_0x1855c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855C8u;
        // 0x1855cc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855c8) {
            ctx->pc = 0x1855E8u;
            goto label_1855e8;
        }
    }
    ctx->pc = 0x1855D0u;
label_1855d0:
    // 0x1855d0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_1855d4:
    // 0x1855d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1855d8:
    // 0x1855d8: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x1855d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_1855dc:
    // 0x1855dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1855dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1855e0:
    // 0x1855e0: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x1855e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
label_1855e4:
    // 0x1855e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1855e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1855e8:
    // 0x1855e8: 0x1660ffc3  bnez        $s3, . + 4 + (-0x3D << 2)
label_1855ec:
    if (ctx->pc == 0x1855ECu) {
        ctx->pc = 0x1855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E8u;
        // 0x1855ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855F0u;
        goto label_1855f0;
    }
    ctx->pc = 0x1855E8u;
    {
        const bool branch_taken_0x1855e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1855ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E8u;
        // 0x1855ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855e8) {
            ctx->pc = 0x1854F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1854f8;
        }
    }
    ctx->pc = 0x1855F0u;
label_1855f0:
    // 0x1855f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1855f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1855f4:
    // 0x1855f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1855f8:
    // 0x1855f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1855f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1855fc:
    // 0x1855fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1855fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185600:
    // 0x185600: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x185600u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_185604:
    // 0x185604: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x185604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_185608:
    // 0x185608: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x185608u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18560c:
    // 0x18560c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_185610:
    // 0x185610: 0x3e00008  jr          $ra
label_185614:
    if (ctx->pc == 0x185614u) {
        ctx->pc = 0x185614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185610u;
        // 0x185614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185618u;
        goto label_fallthrough_0x185610;
    }
    ctx->pc = 0x185610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185610u;
        // 0x185614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x185610:
    ctx->pc = 0x185618u;
}
