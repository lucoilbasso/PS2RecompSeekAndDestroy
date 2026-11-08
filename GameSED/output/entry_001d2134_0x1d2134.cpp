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

// Function: entry_001d2134
// Address: 0x1d2134 - 0x1d2150
void entry_001d2134_0x1d2134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2134_0x1d2134");
#endif

    ctx->pc = 0x1d2134u;

    // 0x1d2134: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1d2138: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2138u;
    {
        const bool branch_taken_0x1d2138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2138) {
            ctx->pc = 0x1D213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2138u;
            // 0x1d213c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2150u;
            return;
        }
    }
    ctx->pc = 0x1D2140u;
    // 0x1d2140: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1d2144: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x1D2144u;
    {
        const bool branch_taken_0x1d2144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2144u;
        // 0x1d2148: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2144) {
            ctx->pc = 0x1D27ACu;
            return;
        }
    }
    ctx->pc = 0x1D214Cu;
    // 0x1d214c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x1d214cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x1d2150u;
}
