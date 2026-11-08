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

// Function: entry_001d4ddc
// Address: 0x1d4ddc - 0x1d4df8
void entry_001d4ddc_0x1d4ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ddc_0x1d4ddc");
#endif

    ctx->pc = 0x1d4ddcu;

    // 0x1d4ddc: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1d4ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d4de0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d4de4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d4de8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1D4DE8u;
    {
        const bool branch_taken_0x1d4de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DE8u;
        // 0x1d4dec: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4de8) {
            ctx->pc = 0x1D4C90u;
            return;
        }
    }
    ctx->pc = 0x1D4DF0u;
    // 0x1d4df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4DF0u;
    {
        const bool branch_taken_0x1d4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DF0u;
        // 0x1d4df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4df0) {
            ctx->pc = 0x1D4E04u;
            return;
        }
    }
    ctx->pc = 0x1D4DF8u;
}
