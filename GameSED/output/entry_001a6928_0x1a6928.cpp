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

// Function: entry_001a6928
// Address: 0x1a6928 - 0x1a6930
void entry_001a6928_0x1a6928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6928_0x1a6928");
#endif

    ctx->pc = 0x1a6928u;

    // 0x1a6928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6928u;
    {
        const bool branch_taken_0x1a6928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6928u;
        // 0x1a692c: 0xa28023  subu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6928) {
            ctx->pc = 0x1A694Cu;
            return;
        }
    }
    ctx->pc = 0x1A6930u;
}
