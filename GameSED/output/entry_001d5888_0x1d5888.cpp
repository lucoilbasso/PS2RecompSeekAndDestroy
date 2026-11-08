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

// Function: entry_001d5888
// Address: 0x1d5888 - 0x1d58e0
void entry_001d5888_0x1d5888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5888_0x1d5888");
#endif

    ctx->pc = 0x1d5888u;

label_1d5888:
    // 0x1d5888: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d588c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5890: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5894: 0x10e302b  sltu        $a2, $t0, $t6
    ctx->pc = 0x1d5894u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1d5898: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d5898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d589c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d58a0: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x1d58a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d58a4: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x1d58a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d58a8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1d58a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d58ac: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d58b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d58b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d58b8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d58bc: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d58c0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1d58c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58c4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d58c8: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1d58c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d58d0: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D58D0u;
    {
        const bool branch_taken_0x1d58d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58D0u;
        // 0x1d58d4: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58d0) {
            ctx->pc = 0x1D5888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5888;
        }
    }
    ctx->pc = 0x1D58D8u;
    // 0x1d58d8: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x1d58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x1d58dc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    ctx->pc = 0x1d58e0u;
}
