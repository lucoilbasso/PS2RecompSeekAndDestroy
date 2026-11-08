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

// Function: entry_001c1d6c
// Address: 0x1c1d6c - 0x1c1da0
void entry_001c1d6c_0x1c1d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d6c_0x1c1d6c");
#endif

    ctx->pc = 0x1c1d6cu;

    // 0x1c1d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d74: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x1c1d74u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1c1d78: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1c1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1c1d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x1c1d80: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1c1d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c1d84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c1d84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c1d88: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1D88u;
    {
        const bool branch_taken_0x1c1d88 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D88u;
        // 0x1c1d8c: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d88) {
            ctx->pc = 0x1C1DA0u;
            return;
        }
    }
    ctx->pc = 0x1C1D90u;
    // 0x1c1d90: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1c1d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1c1d94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c1d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1D98u;
    {
        const bool branch_taken_0x1c1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D98u;
        // 0x1c1d9c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d98) {
            ctx->pc = 0x1C1DA4u;
            return;
        }
    }
    ctx->pc = 0x1C1DA0u;
}
