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

// Function: entry_001d26a8
// Address: 0x1d26a8 - 0x1d26c0
void entry_001d26a8_0x1d26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d26a8_0x1d26a8");
#endif

    ctx->pc = 0x1d26a8u;

    // 0x1d26a8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d26a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d26ac: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d26acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d26b0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D26B0u;
    {
        const bool branch_taken_0x1d26b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d26b0) {
            ctx->pc = 0x1D26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D26B0u;
            // 0x1d26b4: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2660u;
            return;
        }
    }
    ctx->pc = 0x1D26B8u;
    // 0x1d26b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D26B8u;
    {
        const bool branch_taken_0x1d26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26B8u;
        // 0x1d26bc: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26b8) {
            ctx->pc = 0x1D26C4u;
            return;
        }
    }
    ctx->pc = 0x1D26C0u;
}
