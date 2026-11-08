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

// Function: entry_0018d1e0
// Address: 0x18d1e0 - 0x18d1f8
void entry_0018d1e0_0x18d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d1e0_0x18d1e0");
#endif

    ctx->pc = 0x18d1e0u;

    // 0x18d1e0: 0x1202023b  beq         $s0, $v0, . + 4 + (0x23B << 2)
    ctx->pc = 0x18D1E0u;
    {
        const bool branch_taken_0x18d1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E0u;
        // 0x18d1e4: 0x3402818f  ori         $v0, $zero, 0x818F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33167);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e0) {
            ctx->pc = 0x18DAD0u;
            return;
        }
    }
    ctx->pc = 0x18D1E8u;
    // 0x18d1e8: 0x1202024b  beq         $s0, $v0, . + 4 + (0x24B << 2)
    ctx->pc = 0x18D1E8u;
    {
        const bool branch_taken_0x18d1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1E8u;
        // 0x18d1ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e8) {
            ctx->pc = 0x18DB18u;
            return;
        }
    }
    ctx->pc = 0x18D1F0u;
    // 0x18d1f0: 0x10000279  b           . + 4 + (0x279 << 2)
    ctx->pc = 0x18D1F0u;
    {
        const bool branch_taken_0x18d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1F0u;
        // 0x18d1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1f0) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18D1F8u;
}
