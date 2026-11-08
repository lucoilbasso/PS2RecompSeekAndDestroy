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

// Function: entry_001bc8d4
// Address: 0x1bc8d4 - 0x1bc8ec
void entry_001bc8d4_0x1bc8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8d4_0x1bc8d4");
#endif

    ctx->pc = 0x1bc8d4u;

    // 0x1bc8d4: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC8D4u;
    {
        const bool branch_taken_0x1bc8d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x1BC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D4u;
        // 0x1bc8d8: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8d4) {
            ctx->pc = 0x1BC8F8u;
            return;
        }
    }
    ctx->pc = 0x1BC8DCu;
    // 0x1bc8dc: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC8DCu;
    {
        const bool branch_taken_0x1bc8dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8DCu;
        // 0x1bc8e0: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8dc) {
            ctx->pc = 0x1BC8F4u;
            return;
        }
    }
    ctx->pc = 0x1BC8E4u;
    // 0x1bc8e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC8E4u;
    {
        const bool branch_taken_0x1bc8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8e4) {
            ctx->pc = 0x1BC8FCu;
            return;
        }
    }
    ctx->pc = 0x1BC8ECu;
}
