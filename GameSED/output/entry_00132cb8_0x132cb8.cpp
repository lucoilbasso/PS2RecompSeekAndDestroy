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

// Function: entry_00132cb8
// Address: 0x132cb8 - 0x132cc0
void entry_00132cb8_0x132cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132cb8_0x132cb8");
#endif

    ctx->pc = 0x132cb8u;

    // 0x132cb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x132CB8u;
    {
        const bool branch_taken_0x132cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CB8u;
        // 0x132cbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cb8) {
            ctx->pc = 0x132D18u;
            return;
        }
    }
    ctx->pc = 0x132CC0u;
}
