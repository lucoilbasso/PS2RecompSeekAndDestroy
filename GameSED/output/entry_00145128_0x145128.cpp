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

// Function: entry_00145128
// Address: 0x145128 - 0x145138
void entry_00145128_0x145128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145128_0x145128");
#endif

    ctx->pc = 0x145128u;

    // 0x145128: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145128u;
    {
        const bool branch_taken_0x145128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x145128) {
            ctx->pc = 0x14512Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145128u;
            // 0x14512c: 0x8e30005c  lw          $s0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145154u;
            return;
        }
    }
    ctx->pc = 0x145130u;
    // 0x145130: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145130u;
    {
        const bool branch_taken_0x145130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145130u;
        // 0x145134: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145130) {
            ctx->pc = 0x145148u;
            return;
        }
    }
    ctx->pc = 0x145138u;
}
