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

// Function: entry_001a2a9c
// Address: 0x1a2a9c - 0x1a2ab4
void entry_001a2a9c_0x1a2a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a9c_0x1a2a9c");
#endif

    ctx->pc = 0x1a2a9cu;

    // 0x1a2a9c: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a2aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2aa4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a2aa8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2AA8u;
    {
        const bool branch_taken_0x1a2aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AA8u;
        // 0x1a2aac: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2aa8) {
            ctx->pc = 0x1A2AB4u;
            return;
        }
    }
    ctx->pc = 0x1A2AB0u;
    // 0x1a2ab0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1a2ab4u;
}
