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

// Function: ApBackPanelResetQuad__Fv
// Address: 0x146808 - 0x146990
void ApBackPanelResetQuad__Fv_0x146808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBackPanelResetQuad__Fv_0x146808");
#endif

    switch (ctx->pc) {
        case 0x1468b0u: goto label_1468b0;
        case 0x1468b8u: goto label_1468b8;
        default: break;
    }

    ctx->pc = 0x146808u;

    // 0x146808: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x146808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14680c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x14680cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146810: 0x94bbc  dsll32      $t1, $t1, 14
    ctx->pc = 0x146810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 14));
    // 0x146814: 0x244c26c0  addiu       $t4, $v0, 0x26C0
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x146818: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x146818u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14681c: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x14681cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x146820: 0x258a0070  addiu       $t2, $t4, 0x70
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 112));
    // 0x146824: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146828: 0x95420018  lhu         $v0, 0x18($t2)
    ctx->pc = 0x146828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x14682c: 0x258e00b0  addiu       $t6, $t4, 0xB0
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 176));
    // 0x146830: 0x95450004  lhu         $a1, 0x4($t2)
    ctx->pc = 0x146830u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x146834: 0x34188000  ori         $t8, $zero, 0x8000
    ctx->pc = 0x146834u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x146838: 0x18c3bc  dsll32      $t8, $t8, 14
    ctx->pc = 0x146838u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 14));
    // 0x14683c: 0x3401fffe  ori         $at, $zero, 0xFFFE
    ctx->pc = 0x14683cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x146840: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x146844: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x146844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x146848: 0x9547001a  lhu         $a3, 0x1A($t2)
    ctx->pc = 0x146848u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 26)));
    // 0x14684c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x14684cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146850: 0x9544000c  lhu         $a0, 0xC($t2)
    ctx->pc = 0x146850u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x146854: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x146854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x146858: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x146858u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x14685c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x14685cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x146860: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x146860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x146864: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x146864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x146868: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x146868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x14686c: 0x424fc  dsll32      $a0, $a0, 19
    ctx->pc = 0x14686cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 19));
    // 0x146870: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x146870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x146874: 0x9543001c  lhu         $v1, 0x1C($t2)
    ctx->pc = 0x146874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x146878: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x146878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x14687c: 0x25890050  addiu       $t1, $t4, 0x50
    ctx->pc = 0x14687cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x146880: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x146880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x146884: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x146884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x146888: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x146888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14688c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x14688cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x146890: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x146894: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x146898: 0xfd420038  sd          $v0, 0x38($t2)
    ctx->pc = 0x146898u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 2));
    // 0x14689c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x14689cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1468a0: 0xf7cf8  dsll        $t7, $t7, 19
    ctx->pc = 0x1468a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 19);
    // 0x1468a4: 0xa543001c  sh          $v1, 0x1C($t2)
    ctx->pc = 0x1468a4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x1468a8: 0x258d00c0  addiu       $t5, $t4, 0xC0
    ctx->pc = 0x1468a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 192));
    // 0x1468ac: 0x0  nop
    ctx->pc = 0x1468acu;
    // NOP
label_1468b0:
    // 0x1468b0: 0x25230070  addiu       $v1, $t1, 0x70
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x1468b4: 0x25820070  addiu       $v0, $t4, 0x70
    ctx->pc = 0x1468b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 112));
label_1468b8:
    // 0x1468b8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1468b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1468bc: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1468bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1468c0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1468c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1468c4: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1468c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1468c8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1468c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1468cc: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1468ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1468d0: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1468d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1468d4: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1468d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1468d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1468d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1468dc: 0x0  nop
    ctx->pc = 0x1468dcu;
    // NOP
    // 0x1468e0: 0x0  nop
    ctx->pc = 0x1468e0u;
    // NOP
    // 0x1468e4: 0x144efff4  bne         $v0, $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x1468E4u;
    {
        const bool branch_taken_0x1468e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x1468E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468E4u;
        // 0x1468e8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468e4) {
            ctx->pc = 0x1468B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468b8;
        }
    }
    ctx->pc = 0x1468ECu;
    // 0x1468ec: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1468ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1468f0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1468f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1468f4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1468f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1468f8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1468f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468fc: 0x254d0050  addiu       $t5, $t2, 0x50
    ctx->pc = 0x1468fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x146900: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x146904: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x146904u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x146908: 0xb1980  sll         $v1, $t3, 6
    ctx->pc = 0x146908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x14690c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x146910: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x146910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x146914: 0x29680004  slti        $t0, $t3, 0x4
    ctx->pc = 0x146914u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146918: 0x95470018  lhu         $a3, 0x18($t2)
    ctx->pc = 0x146918u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x14691c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146920: 0x9543000c  lhu         $v1, 0xC($t2)
    ctx->pc = 0x146920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x146924: 0x95440004  lhu         $a0, 0x4($t2)
    ctx->pc = 0x146924u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x146928: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x146928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x14692c: 0x95460002  lhu         $a2, 0x2($t2)
    ctx->pc = 0x14692cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x146930: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x146930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x146934: 0x9545001a  lhu         $a1, 0x1A($t2)
    ctx->pc = 0x146934u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 26)));
    // 0x146938: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x146938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x14693c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x14693cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146940: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x146940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146944: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x146944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x146948: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x146948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x14694c: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x14694cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x146950: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x146950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x146954: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x146954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x146958: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x146958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x14695c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x14695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x146960: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x146960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x146964: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x146964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x146968: 0x1500ffd1  bnez        $t0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x146968u;
    {
        const bool branch_taken_0x146968 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146968u;
        // 0x14696c: 0xfd420038  sd          $v0, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146968) {
            ctx->pc = 0x1468B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468b0;
        }
    }
    ctx->pc = 0x146970u;
    // 0x146970: 0x258a0070  addiu       $t2, $t4, 0x70
    ctx->pc = 0x146970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 112));
    // 0x146974: 0x95420018  lhu         $v0, 0x18($t2)
    ctx->pc = 0x146974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x146978: 0x9543001c  lhu         $v1, 0x1C($t2)
    ctx->pc = 0x146978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x14697c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x146980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146984: 0xa5420018  sh          $v0, 0x18($t2)
    ctx->pc = 0x146984u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x146988: 0x3e00008  jr          $ra
    ctx->pc = 0x146988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146988u;
        // 0x14698c: 0xa543001c  sh          $v1, 0x1C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146990u;
}
