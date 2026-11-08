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

// Function: entry_001dd000
// Address: 0x1dd000 - 0x1dd010
void entry_001dd000_0x1dd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd000_0x1dd000");
#endif

    ctx->pc = 0x1dd000u;

    // 0x1dd000: 0x50c2001b  beql        $a2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DD000u;
    {
        const bool branch_taken_0x1dd000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dd000) {
            ctx->pc = 0x1DD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD000u;
            // 0x1dd004: 0xad050008  sw          $a1, 0x8($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD070u;
            return;
        }
    }
    ctx->pc = 0x1DD008u;
    // 0x1dd008: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DD008u;
    {
        const bool branch_taken_0x1dd008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD008u;
        // 0x1dd00c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd008) {
            ctx->pc = 0x1DD074u;
            return;
        }
    }
    ctx->pc = 0x1DD010u;
}
