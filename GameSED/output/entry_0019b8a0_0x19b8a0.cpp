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

// Function: entry_0019b8a0
// Address: 0x19b8a0 - 0x19b8b8
void entry_0019b8a0_0x19b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8a0_0x19b8a0");
#endif

    ctx->pc = 0x19b8a0u;

    // 0x19b8a0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B8A0u;
    {
        const bool branch_taken_0x19b8a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8A0u;
        // 0x19b8a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8a0) {
            ctx->pc = 0x19B8B8u;
            return;
        }
    }
    ctx->pc = 0x19B8A8u;
    // 0x19b8a8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B8ACu;
    {
        const bool branch_taken_0x19b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8ACu;
        // 0x19b8b0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8ac) {
            ctx->pc = 0x19B8BCu;
            return;
        }
    }
    ctx->pc = 0x19B8B4u;
    // 0x19b8b4: 0x0  nop
    ctx->pc = 0x19b8b4u;
    // NOP
    ctx->pc = 0x19b8b8u;
}
