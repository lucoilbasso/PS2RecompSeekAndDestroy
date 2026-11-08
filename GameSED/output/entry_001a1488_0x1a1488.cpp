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

// Function: entry_001a1488
// Address: 0x1a1488 - 0x1a1490
void entry_001a1488_0x1a1488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1488_0x1a1488");
#endif

    ctx->pc = 0x1a1488u;

    // 0x1a1488: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1488u;
    {
        const bool branch_taken_0x1a1488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1488) {
            ctx->pc = 0x1A148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1488u;
            // 0x1a148c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1498u;
            return;
        }
    }
    ctx->pc = 0x1A1490u;
}
