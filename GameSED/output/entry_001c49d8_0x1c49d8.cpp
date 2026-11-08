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

// Function: entry_001c49d8
// Address: 0x1c49d8 - 0x1c4a10
void entry_001c49d8_0x1c49d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c49d8_0x1c49d8");
#endif

    ctx->pc = 0x1c49d8u;

    // 0x1c49d8: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x1c49d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x1c49dc: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C49DCu;
    {
        const bool branch_taken_0x1c49dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49DCu;
        // 0x1c49e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49dc) {
            ctx->pc = 0x1C4A2Cu;
            return;
        }
    }
    ctx->pc = 0x1C49E4u;
    // 0x1c49e4: 0x2603dc80  addiu       $v1, $s0, -0x2380
    ctx->pc = 0x1c49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1c49e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c49ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C49ECu;
    {
        const bool branch_taken_0x1c49ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ECu;
        // 0x1c49f0: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ec) {
            ctx->pc = 0x1C4A10u;
            return;
        }
    }
    ctx->pc = 0x1C49F4u;
    // 0x1c49f4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c49f8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c49fc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1c4a00: 0x8c52ddd0  lw          $s2, -0x2230($v0)
    ctx->pc = 0x1c4a00u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x24DDD0u));
    // 0x1c4a04: 0xac43ddd0  sw          $v1, -0x2230($v0)
    ctx->pc = 0x1c4a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x24DDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD0u, _value); } while (0);
    // 0x1c4a08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4A08u;
    {
        const bool branch_taken_0x1c4a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A08u;
        // 0x1c4a0c: 0xac85dddc  sw          $a1, -0x2224($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294958556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a08) {
            ctx->pc = 0x1C4A58u;
            return;
        }
    }
    ctx->pc = 0x1C4A10u;
}
