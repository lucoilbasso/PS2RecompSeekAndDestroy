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

// Function: entry_001674c0
// Address: 0x1674c0 - 0x1674d0
void entry_001674c0_0x1674c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674c0_0x1674c0");
#endif

    ctx->pc = 0x1674c0u;

    // 0x1674c0: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1674C0u;
    {
        const bool branch_taken_0x1674c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C0u;
        // 0x1674c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c0) {
            ctx->pc = 0x167780u;
            return;
        }
    }
    ctx->pc = 0x1674C8u;
    // 0x1674c8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1674C8u;
    {
        const bool branch_taken_0x1674c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C8u;
        // 0x1674cc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c8) {
            ctx->pc = 0x167958u;
            return;
        }
    }
    ctx->pc = 0x1674D0u;
}
