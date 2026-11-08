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

// Function: entry_00160100
// Address: 0x160100 - 0x160110
void entry_00160100_0x160100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160100_0x160100");
#endif

    ctx->pc = 0x160100u;

    // 0x160100: 0x50650029  beql        $v1, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x160100u;
    {
        const bool branch_taken_0x160100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x160100) {
            ctx->pc = 0x160104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160100u;
            // 0x160104: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601A8u;
            return;
        }
    }
    ctx->pc = 0x160108u;
    // 0x160108: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x160108u;
    {
        const bool branch_taken_0x160108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160108u;
        // 0x16010c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160108) {
            ctx->pc = 0x1601E0u;
            return;
        }
    }
    ctx->pc = 0x160110u;
}
