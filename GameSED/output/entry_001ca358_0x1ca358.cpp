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

// Function: entry_001ca358
// Address: 0x1ca358 - 0x1ca370
void entry_001ca358_0x1ca358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca358_0x1ca358");
#endif

    ctx->pc = 0x1ca358u;

    // 0x1ca358: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA358u;
    {
        const bool branch_taken_0x1ca358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca358) {
            ctx->pc = 0x1CA35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA358u;
            // 0x1ca35c: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA370u;
            return;
        }
    }
    ctx->pc = 0x1CA360u;
    // 0x1ca360: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ca360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1ca364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca368: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CA368u;
    {
        const bool branch_taken_0x1ca368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA368u;
        // 0x1ca36c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca368) {
            ctx->pc = 0x1CA3F0u;
            return;
        }
    }
    ctx->pc = 0x1CA370u;
}
