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

// Function: entry_001405a4
// Address: 0x1405a4 - 0x1405d0
void entry_001405a4_0x1405a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405a4_0x1405a4");
#endif

    ctx->pc = 0x1405a4u;

    // 0x1405a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1405a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1405a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1405ac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1405ACu;
    {
        const bool branch_taken_0x1405ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405ac) {
            ctx->pc = 0x1405B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405ACu;
            // 0x1405b0: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405E4u;
            return;
        }
    }
    ctx->pc = 0x1405B4u;
    // 0x1405b4: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1405b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1405b8: 0x2862f556  slti        $v0, $v1, -0xAAA
    ctx->pc = 0x1405b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294964566) ? 1 : 0);
    // 0x1405bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1405BCu;
    {
        const bool branch_taken_0x1405bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405bc) {
            ctx->pc = 0x1405C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405BCu;
            // 0x1405c0: 0x28620aab  slti        $v0, $v1, 0xAAB (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2731) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1405D0u;
            return;
        }
    }
    ctx->pc = 0x1405C4u;
    // 0x1405c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1405C4u;
    {
        const bool branch_taken_0x1405c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405C4u;
        // 0x1405c8: 0x2402f556  addiu       $v0, $zero, -0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964566));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405c4) {
            ctx->pc = 0x1405DCu;
            return;
        }
    }
    ctx->pc = 0x1405CCu;
    // 0x1405cc: 0x0  nop
    ctx->pc = 0x1405ccu;
    // NOP
    ctx->pc = 0x1405d0u;
}
