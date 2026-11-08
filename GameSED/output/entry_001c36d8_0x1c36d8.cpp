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

// Function: entry_001c36d8
// Address: 0x1c36d8 - 0x1c3758
void entry_001c36d8_0x1c36d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c36d8_0x1c36d8");
#endif

    ctx->pc = 0x1c36d8u;

label_1c36d8:
    // 0x1c36d8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c36dc: 0x16d1026  xor         $v0, $t3, $t5
    ctx->pc = 0x1c36dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
    // 0x1c36e0: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x1c36e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c36e4: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1c36e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c36ec: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1c36f0: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1c36f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1c36f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1c36f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1c36f8: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x1c36f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x1c36fc: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x1c3700: 0x35290030  ori         $t1, $t1, 0x30
    ctx->pc = 0x1c3700u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)48);
    // 0x1c3704: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c3708: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c3708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c370c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x1c370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1c3710: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1c3714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3718: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x1c3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1c371c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c3720: 0x16c382a  slt         $a3, $t3, $t4
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1c3724: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1c3724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1c3728: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1c3728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1c372c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c372cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3730: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c3730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c3734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3738: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1c3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1c373c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c3740: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1c3740u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x1c3744: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x1c3744u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
    // 0x1c3748: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C3748u;
    {
        const bool branch_taken_0x1c3748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3748u;
        // 0x1c374c: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3748) {
            ctx->pc = 0x1C36D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c36d8;
        }
    }
    ctx->pc = 0x1C3750u;
    // 0x1c3750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3750u;
    {
        const bool branch_taken_0x1c3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3750) {
            ctx->pc = 0x1C375Cu;
            return;
        }
    }
    ctx->pc = 0x1C3758u;
}
