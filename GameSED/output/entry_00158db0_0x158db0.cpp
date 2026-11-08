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

// Function: entry_00158db0
// Address: 0x158db0 - 0x158dc8
void entry_00158db0_0x158db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158db0_0x158db0");
#endif

    ctx->pc = 0x158db0u;

    // 0x158db0: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x158DB0u;
    {
        const bool branch_taken_0x158db0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x158db0) {
            ctx->pc = 0x158DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DB0u;
            // 0x158db4: 0xc50c0400  lwc1        $f12, 0x400($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x158DC8u;
            return;
        }
    }
    ctx->pc = 0x158DB8u;
    // 0x158db8: 0x8d02047c  lw          $v0, 0x47C($t0)
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1148)));
    // 0x158dbc: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x158DBCu;
    {
        const bool branch_taken_0x158dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158dbc) {
            ctx->pc = 0x158DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158DBCu;
            // 0x158dc0: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x158DC4u;
    // 0x158dc4: 0xc50c0400  lwc1        $f12, 0x400($t0)
    ctx->pc = 0x158dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x158dc8u;
}
