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

// Function: entry_001d5900
// Address: 0x1d5900 - 0x1d5954
void entry_001d5900_0x1d5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5900_0x1d5900");
#endif

    ctx->pc = 0x1d5900u;

label_1d5900:
    // 0x1d5900: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5904: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5908: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1d5908u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d590c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d5910: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d5910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d5914: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5918: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x1d5918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d591c: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x1d591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5920: 0x10e282b  sltu        $a1, $t0, $t6
    ctx->pc = 0x1d5920u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1d5924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5928: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d592c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1d592cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5930: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5934: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5938: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d593c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1d593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1d5940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5944: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5948: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D5948u;
    {
        const bool branch_taken_0x1d5948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5948u;
        // 0x1d594c: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5948) {
            ctx->pc = 0x1D5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5900;
        }
    }
    ctx->pc = 0x1D5950u;
    // 0x1d5950: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d5954u;
}
