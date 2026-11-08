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

// Function: entry_001243f0
// Address: 0x1243f0 - 0x124400
void entry_001243f0_0x1243f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001243f0_0x1243f0");
#endif

    ctx->pc = 0x1243f0u;

    // 0x1243f0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1243F0u;
    {
        const bool branch_taken_0x1243f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F0u;
        // 0x1243f4: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f0) {
            ctx->pc = 0x124400u;
            return;
        }
    }
    ctx->pc = 0x1243F8u;
    // 0x1243f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1243F8u;
    {
        const bool branch_taken_0x1243f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243F8u;
        // 0x1243fc: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243f8) {
            ctx->pc = 0x12440Cu;
            return;
        }
    }
    ctx->pc = 0x124400u;
}
