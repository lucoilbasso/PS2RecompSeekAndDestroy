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

// Function: entry_001a619c
// Address: 0x1a619c - 0x1a61b8
void entry_001a619c_0x1a619c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a619c_0x1a619c");
#endif

    ctx->pc = 0x1a619cu;

    // 0x1a619c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a619cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a61a0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1a61a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a61a4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x1a61a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a61a8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a61ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A61ACu;
    {
        const bool branch_taken_0x1a61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61ACu;
        // 0x1a61b0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61ac) {
            ctx->pc = 0x1A61E0u;
            return;
        }
    }
    ctx->pc = 0x1A61B4u;
    // 0x1a61b4: 0x0  nop
    ctx->pc = 0x1a61b4u;
    // NOP
    ctx->pc = 0x1a61b8u;
}
