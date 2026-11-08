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

// Function: entry_001468b8
// Address: 0x1468b8 - 0x146970
void entry_001468b8_0x1468b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001468b8_0x1468b8");
#endif

    ctx->pc = 0x1468b8u;

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
            return;
        }
    }
    ctx->pc = 0x146970u;
}
