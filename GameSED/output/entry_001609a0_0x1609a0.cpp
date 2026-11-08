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

// Function: entry_001609a0
// Address: 0x1609a0 - 0x1609c8
void entry_001609a0_0x1609a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001609a0_0x1609a0");
#endif

    ctx->pc = 0x1609a0u;

    // 0x1609a0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1609a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1609a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1609a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1609ac: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x1609b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609B0u;
        // 0x1609b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x1609C8u;
            return;
        }
    }
    ctx->pc = 0x1609B8u;
    // 0x1609b8: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1609bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1609BCu;
    {
        const bool branch_taken_0x1609bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1609C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609BCu;
        // 0x1609c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609bc) {
            ctx->pc = 0x1609C8u;
            return;
        }
    }
    ctx->pc = 0x1609C4u;
    // 0x1609c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1609c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1609c8u;
}
