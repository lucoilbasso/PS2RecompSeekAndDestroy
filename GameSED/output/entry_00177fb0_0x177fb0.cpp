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

// Function: entry_00177fb0
// Address: 0x177fb0 - 0x177fc0
void entry_00177fb0_0x177fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177fb0_0x177fb0");
#endif

    ctx->pc = 0x177fb0u;

    // 0x177fb0: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177FB0u;
    {
        const bool branch_taken_0x177fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177fb0) {
            ctx->pc = 0x177FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177FB0u;
            // 0x177fb4: 0xa2120055  sb          $s2, 0x55($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FC0u;
            return;
        }
    }
    ctx->pc = 0x177FB8u;
    // 0x177fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177FB8u;
    {
        const bool branch_taken_0x177fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FB8u;
        // 0x177fbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fb8) {
            ctx->pc = 0x177FD8u;
            return;
        }
    }
    ctx->pc = 0x177FC0u;
}
