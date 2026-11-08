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

// Function: entry_001b67dc
// Address: 0x1b67dc - 0x1b67e8
void entry_001b67dc_0x1b67dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67dc_0x1b67dc");
#endif

    ctx->pc = 0x1b67dcu;

    // 0x1b67dc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b67e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B67E0u;
    {
        const bool branch_taken_0x1b67e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67E0u;
        // 0x1b67e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67e0) {
            ctx->pc = 0x1B67F0u;
            return;
        }
    }
    ctx->pc = 0x1B67E8u;
}
