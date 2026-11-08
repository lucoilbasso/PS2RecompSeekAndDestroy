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

// Function: entry_00163370
// Address: 0x163370 - 0x163390
void entry_00163370_0x163370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163370_0x163370");
#endif

    ctx->pc = 0x163370u;

    // 0x163370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x163374: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x163374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x163378: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163378u;
    {
        const bool branch_taken_0x163378 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163378u;
        // 0x16337c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163378) {
            ctx->pc = 0x163390u;
            return;
        }
    }
    ctx->pc = 0x163380u;
    // 0x163380: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x163384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163384u;
    {
        const bool branch_taken_0x163384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163384u;
        // 0x163388: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163384) {
            ctx->pc = 0x163394u;
            return;
        }
    }
    ctx->pc = 0x16338Cu;
    // 0x16338c: 0x0  nop
    ctx->pc = 0x16338cu;
    // NOP
    ctx->pc = 0x163390u;
}
