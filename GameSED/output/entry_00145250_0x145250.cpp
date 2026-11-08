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

// Function: entry_00145250
// Address: 0x145250 - 0x145260
void entry_00145250_0x145250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145250_0x145250");
#endif

    ctx->pc = 0x145250u;

    // 0x145250: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145250u;
    {
        const bool branch_taken_0x145250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x145250) {
            ctx->pc = 0x145254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145250u;
            // 0x145254: 0x8e32005c  lw          $s2, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14527Cu;
            return;
        }
    }
    ctx->pc = 0x145258u;
    // 0x145258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145258u;
    {
        const bool branch_taken_0x145258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145258u;
        // 0x14525c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145258) {
            ctx->pc = 0x145270u;
            return;
        }
    }
    ctx->pc = 0x145260u;
}
