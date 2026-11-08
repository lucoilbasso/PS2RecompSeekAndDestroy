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

// Function: entry_001a1478
// Address: 0x1a1478 - 0x1a1484
void entry_001a1478_0x1a1478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1478_0x1a1478");
#endif

    ctx->pc = 0x1a1478u;

    // 0x1a1478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a147c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A147Cu;
    {
        const bool branch_taken_0x1a147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A147Cu;
        // 0x1a1480: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a147c) {
            ctx->pc = 0x1A14B0u;
            return;
        }
    }
    ctx->pc = 0x1A1484u;
}
