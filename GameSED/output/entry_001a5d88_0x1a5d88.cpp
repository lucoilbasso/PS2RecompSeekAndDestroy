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

// Function: entry_001a5d88
// Address: 0x1a5d88 - 0x1a5da0
void entry_001a5d88_0x1a5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5d88_0x1a5d88");
#endif

    ctx->pc = 0x1a5d88u;

    // 0x1a5d88: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5D88u;
    {
        const bool branch_taken_0x1a5d88 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D88u;
        // 0x1a5d8c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d88) {
            ctx->pc = 0x1A5DA0u;
            return;
        }
    }
    ctx->pc = 0x1A5D90u;
    // 0x1a5d90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5d94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5d98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A5D98u;
    {
        const bool branch_taken_0x1a5d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D98u;
        // 0x1a5d9c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d98) {
            ctx->pc = 0x1A5E70u;
            return;
        }
    }
    ctx->pc = 0x1A5DA0u;
}
