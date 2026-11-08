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

// Function: entry_0012f248
// Address: 0x12f248 - 0x12f258
void entry_0012f248_0x12f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f248_0x12f248");
#endif

    ctx->pc = 0x12f248u;

    // 0x12f248: 0x106200e7  beq         $v1, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x12F248u;
    {
        const bool branch_taken_0x12f248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F248u;
        // 0x12f24c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f248) {
            ctx->pc = 0x12F5E8u;
            return;
        }
    }
    ctx->pc = 0x12F250u;
    // 0x12f250: 0x100002a7  b           . + 4 + (0x2A7 << 2)
    ctx->pc = 0x12F250u;
    {
        const bool branch_taken_0x12f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f250) {
            ctx->pc = 0x12FCF0u;
            return;
        }
    }
    ctx->pc = 0x12F258u;
}
