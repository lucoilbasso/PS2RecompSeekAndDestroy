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

// Function: _id2type
// Address: 0x1bc7a8 - 0x1bc9a4
void _id2type_0x1bc7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_id2type_0x1bc7a8");
#endif

    switch (ctx->pc) {
        case 0x1bc858u: goto label_1bc858;
        default: break;
    }

    ctx->pc = 0x1bc7a8u;

    // 0x1bc7a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bc7ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bc7b0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1bc7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1bc7b4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1bc7b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1bc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1bc7bc: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x1bc7bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x1bc7c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1bc7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1bc7c4: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x1bc7c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bc7c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bc7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1bc7cc: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1bc7ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc7d0: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1bc7d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1bc7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1bc7d8: 0x2463db30  addiu       $v1, $v1, -0x24D0
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957872));
    // 0x1bc7dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bc7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bc7e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bc7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bc7e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc7e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc7f0: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x1bc7f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1bc7f4: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x1bc7f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x1bc7f8: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x1bc7f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1bc7fc: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x1bc800: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1bc800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc804: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x1bc804u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x1bc808: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc80c: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x1bc80cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x1bc810: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x1bc810u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x1bc814: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x1bc814u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48416);
    // 0x1bc818: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x1bc818u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x1bc81c: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x1bc81cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48512);
    // 0x1bc820: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x1bc820u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x1bc824: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x1bc824u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48528);
    // 0x1bc828: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x1bc828u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x1bc82c: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x1bc82cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48544);
    // 0x1bc830: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x1bc830u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x1bc834: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x1bc834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1bc838: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x1bc838u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x1bc83c: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x1bc83cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1bc840: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x1bc840u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x1bc844: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x1bc844u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1bc848: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x1bc848u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x1bc84c: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x1bc84cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1bc850: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x1bc850u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x1bc854: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1bc854u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1bc858:
    // 0x1bc858: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC858u;
    {
        const bool branch_taken_0x1bc858 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x1BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC858u;
        // 0x1bc85c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc858) {
            ctx->pc = 0x1BC8A0u;
            goto label_1bc8a0;
        }
    }
    ctx->pc = 0x1BC860u;
    // 0x1bc860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC860u;
    {
        const bool branch_taken_0x1bc860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc860) {
            ctx->pc = 0x1BC878u;
            goto label_1bc878;
        }
    }
    ctx->pc = 0x1BC868u;
    // 0x1bc868: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC868u;
            // 0x1bc86c: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC90Cu;
            goto label_1bc90c;
        }
    }
    ctx->pc = 0x1BC870u;
    // 0x1bc870: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BC870u;
    {
        const bool branch_taken_0x1bc870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC870u;
        // 0x1bc874: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc870) {
            ctx->pc = 0x1BC964u;
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BC878u;
label_1bc878:
    // 0x1bc878: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BC878u;
    {
        const bool branch_taken_0x1bc878 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1bc878) {
            ctx->pc = 0x1BC87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC878u;
            // 0x1bc87c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BC880u;
    // 0x1bc880: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1bc880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc884: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1bc884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1bc888: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BC888u;
    {
        const bool branch_taken_0x1bc888 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc888) {
            ctx->pc = 0x1BC88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC888u;
            // 0x1bc88c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BC890u;
    // 0x1bc890: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1bc890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1bc894: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bc894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc898: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BC898u;
    {
        const bool branch_taken_0x1bc898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC898u;
        // 0x1bc89c: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc898) {
            ctx->pc = 0x1BC960u;
            goto label_1bc960;
        }
    }
    ctx->pc = 0x1BC8A0u;
label_1bc8a0:
    // 0x1bc8a0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1bc8a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc8a4: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1bc8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x1bc8a8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bc8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bc8ac: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC8ACu;
    {
        const bool branch_taken_0x1bc8ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ACu;
        // 0x1bc8b0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8ac) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8B4u;
    // 0x1bc8b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC8B4u;
    {
        const bool branch_taken_0x1bc8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8b4) {
            ctx->pc = 0x1BC8D4u;
            goto label_1bc8d4;
        }
    }
    ctx->pc = 0x1BC8BCu;
    // 0x1bc8bc: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8BCu;
    {
        const bool branch_taken_0x1bc8bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1BC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8BCu;
        // 0x1bc8c0: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8bc) {
            ctx->pc = 0x1BC8ECu;
            goto label_1bc8ec;
        }
    }
    ctx->pc = 0x1BC8C4u;
    // 0x1bc8c4: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8C4u;
    {
        const bool branch_taken_0x1bc8c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C4u;
        // 0x1bc8c8: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c4) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8CCu;
    // 0x1bc8cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BC8CCu;
    {
        const bool branch_taken_0x1bc8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8CCu;
        // 0x1bc8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8cc) {
            ctx->pc = 0x1BC8FCu;
            goto label_1bc8fc;
        }
    }
    ctx->pc = 0x1BC8D4u;
label_1bc8d4:
    // 0x1bc8d4: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC8D4u;
    {
        const bool branch_taken_0x1bc8d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x1BC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D4u;
        // 0x1bc8d8: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8d4) {
            ctx->pc = 0x1BC8F8u;
            goto label_1bc8f8;
        }
    }
    ctx->pc = 0x1BC8DCu;
    // 0x1bc8dc: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC8DCu;
    {
        const bool branch_taken_0x1bc8dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8DCu;
        // 0x1bc8e0: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8dc) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8E4u;
    // 0x1bc8e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC8E4u;
    {
        const bool branch_taken_0x1bc8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8e4) {
            ctx->pc = 0x1BC8FCu;
            goto label_1bc8fc;
        }
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC8ECu;
    {
        const bool branch_taken_0x1bc8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ECu;
        // 0x1bc8f0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8ec) {
            ctx->pc = 0x1BC8FCu;
            goto label_1bc8fc;
        }
    }
    ctx->pc = 0x1BC8F4u;
label_1bc8f4:
    // 0x1bc8f4: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
label_1bc8f8:
    // 0x1bc8f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bc8fc:
    // 0x1bc8fc: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BC8FCu;
    {
        const bool branch_taken_0x1bc8fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1bc8fc) {
            ctx->pc = 0x1BC900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC8FCu;
            // 0x1bc900: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BC904u;
    // 0x1bc904: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC904u;
    {
        const bool branch_taken_0x1bc904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC904u;
        // 0x1bc908: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc904) {
            ctx->pc = 0x1BC94Cu;
            goto label_1bc94c;
        }
    }
    ctx->pc = 0x1BC90Cu;
label_1bc90c:
    // 0x1bc90c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x1bc90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1bc910: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bc910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bc914: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC914u;
    {
        const bool branch_taken_0x1bc914 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc914) {
            ctx->pc = 0x1BC928u;
            goto label_1bc928;
        }
    }
    ctx->pc = 0x1BC91Cu;
    // 0x1bc91c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x1bc920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC920u;
    {
        const bool branch_taken_0x1bc920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC920u;
        // 0x1bc924: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc920) {
            ctx->pc = 0x1BC940u;
            goto label_1bc940;
        }
    }
    ctx->pc = 0x1BC928u;
label_1bc928:
    // 0x1bc928: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC928u;
    {
        const bool branch_taken_0x1bc928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x1BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC928u;
        // 0x1bc92c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc928) {
            ctx->pc = 0x1BC93Cu;
            goto label_1bc93c;
        }
    }
    ctx->pc = 0x1BC930u;
    // 0x1bc930: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1bc930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1bc934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC934u;
    {
        const bool branch_taken_0x1bc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC934u;
        // 0x1bc938: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc934) {
            ctx->pc = 0x1BC940u;
            goto label_1bc940;
        }
    }
    ctx->pc = 0x1BC93Cu;
label_1bc93c:
    // 0x1bc93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bc93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc940:
    // 0x1bc940: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC940u;
    {
        const bool branch_taken_0x1bc940 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1bc940) {
            ctx->pc = 0x1BC944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC940u;
            // 0x1bc944: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC964u;
            goto label_1bc964;
        }
    }
    ctx->pc = 0x1BC948u;
    // 0x1bc948: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1bc948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_1bc94c:
    // 0x1bc94c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1bc94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1bc950: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc954: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bc954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bc958: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bc958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc95c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1bc960:
    // 0x1bc960: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1bc960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1bc964:
    // 0x1bc964: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x1bc964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bc968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC968u;
    {
        const bool branch_taken_0x1bc968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC968u;
        // 0x1bc96c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc968) {
            ctx->pc = 0x1BC978u;
            goto label_1bc978;
        }
    }
    ctx->pc = 0x1BC970u;
    // 0x1bc970: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1BC970u;
    {
        const bool branch_taken_0x1bc970 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc970) {
            ctx->pc = 0x1BC974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC970u;
            // 0x1bc974: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc858;
        }
    }
    ctx->pc = 0x1BC978u;
label_1bc978:
    // 0x1bc978: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1bc978u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc97c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1bc97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc980: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1bc980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc984: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1bc984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc988: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bc988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc98c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bc98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc990: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bc990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc994: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bc994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc99c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC99Cu;
        // 0x1bc9a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC9A4u;
}
