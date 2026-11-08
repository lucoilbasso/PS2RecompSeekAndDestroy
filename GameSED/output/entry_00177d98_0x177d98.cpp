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

// Function: entry_00177d98
// Address: 0x177d98 - 0x177da0
void entry_00177d98_0x177d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177d98_0x177d98");
#endif

    ctx->pc = 0x177d98u;

    // 0x177d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177D98u;
    {
        const bool branch_taken_0x177d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D98u;
        // 0x177d9c: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d98) {
            ctx->pc = 0x177DA4u;
            return;
        }
    }
    ctx->pc = 0x177DA0u;
}
