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

// Function: entry_001c80b8
// Address: 0x1c80b8 - 0x1c80e8
void entry_001c80b8_0x1c80b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c80b8_0x1c80b8");
#endif

    ctx->pc = 0x1c80b8u;

    // 0x1c80b8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C80B8u;
    {
        const bool branch_taken_0x1c80b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80b8) {
            ctx->pc = 0x1C80BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C80B8u;
            // 0x1c80bc: 0x24630036  addiu       $v1, $v1, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8118u;
            return;
        }
    }
    ctx->pc = 0x1C80C0u;
    // 0x1c80c0: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x1c80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1c80c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c80c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c80c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C80C8u;
    {
        const bool branch_taken_0x1c80c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80C8u;
        // 0x1c80cc: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80c8) {
            ctx->pc = 0x1C80E8u;
            return;
        }
    }
    ctx->pc = 0x1C80D0u;
    // 0x1c80d0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c80d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80d8: 0xdc50bbd8  ld          $s0, -0x4428($v0)
    ctx->pc = 0x1c80d8u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BBD8u));
    // 0x1c80dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C80DCu;
    {
        const bool branch_taken_0x1c80dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c80dc) {
            ctx->pc = 0x1C80F0u;
            return;
        }
    }
    ctx->pc = 0x1C80E4u;
    // 0x1c80e4: 0x0  nop
    ctx->pc = 0x1c80e4u;
    // NOP
    ctx->pc = 0x1c80e8u;
}
