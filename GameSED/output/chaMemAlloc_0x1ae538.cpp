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

// Function: chaMemAlloc
// Address: 0x1ae538 - 0x1ae6b4
void chaMemAlloc_0x1ae538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaMemAlloc_0x1ae538");
#endif

    switch (ctx->pc) {
        case 0x1ae5f0u: goto label_1ae5f0;
        default: break;
    }

    ctx->pc = 0x1ae538u;

    // 0x1ae538: 0x3c0c0024  lui         $t4, 0x24
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)36 << 16));
    // 0x1ae53c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae540: 0x8d850938  lw          $a1, 0x938($t4)
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x240938u));
    // 0x1ae544: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ae544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ae548: 0x25860938  addiu       $a2, $t4, 0x938
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
    // 0x1ae54c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ae54cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae550: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ae554: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE554u;
    {
        const bool branch_taken_0x1ae554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE554u;
        // 0x1ae558: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae554) {
            ctx->pc = 0x1AE5D0u;
            goto label_1ae5d0;
        }
    }
    ctx->pc = 0x1AE55Cu;
    // 0x1ae55c: 0xdd830938  ld          $v1, 0x938($t4)
    ctx->pc = 0x1ae55cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 2360)));
    // 0x1ae560: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1ae560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae564: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1ae564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ae568: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae56c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1ae56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1ae570: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ae570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ae574: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1ae574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1ae578: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ae578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ae57c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ae57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ae580: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ae584: 0x240227fe  addiu       $v0, $zero, 0x27FE
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10238));
    // 0x1ae588: 0xdce41ff8  ld          $a0, 0x1FF8($a3)
    ctx->pc = 0x1ae588u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8184)));
    // 0x1ae58c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae590: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1ae590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1ae594: 0x34c60fff  ori         $a2, $a2, 0xFFF
    ctx->pc = 0x1ae594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4095);
    // 0x1ae598: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1ae598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1ae59c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1ae5a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ae5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae5a4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ae5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ae5a8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ae5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ae5ac: 0xfd830938  sd          $v1, 0x938($t4)
    ctx->pc = 0x1ae5acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 2360), GPR_U64(ctx, 3));
    // 0x1ae5b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae5b4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1ae5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1ae5b8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1ae5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1ae5bc: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x1ae5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1ae5c0: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1ae5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1ae5c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ae5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ae5c8: 0x8d850938  lw          $a1, 0x938($t4)
    ctx->pc = 0x1ae5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 2360)));
    // 0x1ae5cc: 0xfce41ff8  sd          $a0, 0x1FF8($a3)
    ctx->pc = 0x1ae5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8184), GPR_U64(ctx, 4));
label_1ae5d0:
    // 0x1ae5d0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1ae5d4: 0x51f02  srl         $v1, $a1, 28
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x1ae5d8: 0x24882  srl         $t1, $v0, 2
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ae5dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae5e0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AE5E0u;
    {
        const bool branch_taken_0x1ae5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E0u;
        // 0x1ae5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e0) {
            ctx->pc = 0x1AE6ACu;
            goto label_1ae6ac;
        }
    }
    ctx->pc = 0x1AE5E8u;
    // 0x1ae5e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5ec: 0x258b0938  addiu       $t3, $t4, 0x938
    ctx->pc = 0x1ae5ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
label_1ae5f0:
    // 0x1ae5f0: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x1ae5f4: 0x14b4021  addu        $t0, $t2, $t3
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ae5f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ae5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ae5fc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1ae5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae600: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1ae604: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE604u;
    {
        const bool branch_taken_0x1ae604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE604u;
        // 0x1ae608: 0x672824  and         $a1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae604) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE60Cu;
    // 0x1ae60c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1ae60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1ae610: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AE610u;
    {
        const bool branch_taken_0x1ae610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae610) {
            ctx->pc = 0x1AE614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE610u;
            // 0x1ae614: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE684u;
            goto label_1ae684;
        }
    }
    ctx->pc = 0x1AE618u;
    // 0x1ae618: 0x11250012  beq         $t1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE618u;
    {
        const bool branch_taken_0x1ae618 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0x25240001  addiu       $a0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae618) {
            ctx->pc = 0x1AE664u;
            goto label_1ae664;
        }
    }
    ctx->pc = 0x1AE620u;
    // 0x1ae620: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1ae624: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1ae624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ae628: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x1ae62c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ae62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ae630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ae634: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1ae634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1ae638: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1ae638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1ae63c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae640: 0x1273024  and         $a2, $t1, $a3
    ctx->pc = 0x1ae640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1ae644: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ae644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ae648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae64c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ae64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ae650: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ae650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ae654: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ae658: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ae65c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ae65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ae660: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1ae660u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1ae664:
    // 0x1ae664: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x1ae664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1ae668: 0x25640004  addiu       $a0, $t3, 0x4
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ae66c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ae670: 0x1446821  addu        $t5, $t2, $a0
    ctx->pc = 0x1ae670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1ae674: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae678: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AE678u;
    {
        const bool branch_taken_0x1ae678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE678u;
        // 0x1ae67c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae678) {
            ctx->pc = 0x1AE6ACu;
            goto label_1ae6ac;
        }
    }
    ctx->pc = 0x1AE680u;
label_1ae680:
    // 0x1ae680: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ae684:
    // 0x1ae684: 0x25830938  addiu       $v1, $t4, 0x938
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
    // 0x1ae688: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ae68c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae690: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ae690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ae694: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ae694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae698: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1ae69c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae6a0: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x1ae6a4: 0x1444ffd2  bne         $v0, $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1AE6A4u;
    {
        const bool branch_taken_0x1ae6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6A4u;
        // 0x1ae6a8: 0x258b0938  addiu       $t3, $t4, 0x938 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 2360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6a4) {
            ctx->pc = 0x1AE5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae5f0;
        }
    }
    ctx->pc = 0x1AE6ACu;
label_1ae6ac:
    // 0x1ae6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6ACu;
        // 0x1ae6b0: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE6B4u;
}
