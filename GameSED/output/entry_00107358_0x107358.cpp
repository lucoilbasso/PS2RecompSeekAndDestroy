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

// Function: entry_00107358
// Address: 0x107358 - 0x107368
void entry_00107358_0x107358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107358_0x107358");
#endif

    ctx->pc = 0x107358u;

    // 0x107358: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107358u;
    {
        const bool branch_taken_0x107358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107358u;
        // 0x10735c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107358) {
            ctx->pc = 0x107378u;
            return;
        }
    }
    ctx->pc = 0x107360u;
    // 0x107360: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x107360u;
    {
        const bool branch_taken_0x107360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107360) {
            ctx->pc = 0x107380u;
            return;
        }
    }
    ctx->pc = 0x107368u;
}
