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

// Function: entry_001d332c
// Address: 0x1d332c - 0x1d3348
void entry_001d332c_0x1d332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d332c_0x1d332c");
#endif

    ctx->pc = 0x1d332cu;

    // 0x1d332c: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x1d332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1d3330: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d3330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3334: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3334u;
    {
        const bool branch_taken_0x1d3334 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d3334) {
            ctx->pc = 0x1D3338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3334u;
            // 0x1d3338: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3348u;
            return;
        }
    }
    ctx->pc = 0x1D333Cu;
    // 0x1d333c: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1d333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1d3340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3340u;
    {
        const bool branch_taken_0x1d3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3340u;
        // 0x1d3344: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3340) {
            ctx->pc = 0x1D3350u;
            return;
        }
    }
    ctx->pc = 0x1D3348u;
}
