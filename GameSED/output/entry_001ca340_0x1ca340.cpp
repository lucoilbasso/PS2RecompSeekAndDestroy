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

// Function: entry_001ca340
// Address: 0x1ca340 - 0x1ca358
void entry_001ca340_0x1ca340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca340_0x1ca340");
#endif

    ctx->pc = 0x1ca340u;

    // 0x1ca340: 0x54c5002b  bnel        $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CA340u;
    {
        const bool branch_taken_0x1ca340 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ca340) {
            ctx->pc = 0x1CA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA340u;
            // 0x1ca344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3F0u;
            return;
        }
    }
    ctx->pc = 0x1CA348u;
    // 0x1ca348: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1ca34c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CA34Cu;
    {
        const bool branch_taken_0x1ca34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA34Cu;
        // 0x1ca350: 0x2444bfe0  addiu       $a0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca34c) {
            ctx->pc = 0x1CA3F0u;
            return;
        }
    }
    ctx->pc = 0x1CA354u;
    // 0x1ca354: 0x0  nop
    ctx->pc = 0x1ca354u;
    // NOP
    ctx->pc = 0x1ca358u;
}
