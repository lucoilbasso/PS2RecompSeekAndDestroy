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

// Function: entry_001193c4
// Address: 0x1193c4 - 0x1193cc
void entry_001193c4_0x1193c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001193c4_0x1193c4");
#endif

    ctx->pc = 0x1193c4u;

    // 0x1193c4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193C4u;
    {
        const bool branch_taken_0x1193c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1193C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193C4u;
        // 0x1193c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193c4) {
            ctx->pc = 0x1193D8u;
            return;
        }
    }
    ctx->pc = 0x1193CCu;
}
