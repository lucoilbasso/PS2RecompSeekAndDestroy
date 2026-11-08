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

// Function: entry_001cb368
// Address: 0x1cb368 - 0x1cb390
void entry_001cb368_0x1cb368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb368_0x1cb368");
#endif

    ctx->pc = 0x1cb368u;

    // 0x1cb368: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1cb36c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cb370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb374: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb378: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1cb378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cb37c: 0x247182b  sltu        $v1, $s2, $a3
    ctx->pc = 0x1cb37cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cb380: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB380u;
    {
        const bool branch_taken_0x1cb380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB380u;
        // 0x1cb384: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb380) {
            ctx->pc = 0x1CB390u;
            return;
        }
    }
    ctx->pc = 0x1CB388u;
    // 0x1cb388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB388u;
    {
        const bool branch_taken_0x1cb388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB388u;
        // 0x1cb38c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb388) {
            ctx->pc = 0x1CB3A4u;
            return;
        }
    }
    ctx->pc = 0x1CB390u;
}
