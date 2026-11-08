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

// Function: entry_0019b4f0
// Address: 0x19b4f0 - 0x19b50c
void entry_0019b4f0_0x19b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b4f0_0x19b4f0");
#endif

    ctx->pc = 0x19b4f0u;

label_19b4f0:
    // 0x19b4f0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b4f4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b4f8: 0x0  nop
    ctx->pc = 0x19b4f8u;
    // NOP
    // 0x19b4fc: 0x0  nop
    ctx->pc = 0x19b4fcu;
    // NOP
    // 0x19b500: 0x0  nop
    ctx->pc = 0x19b500u;
    // NOP
    // 0x19b504: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B504u;
        // 0x19b508: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b4f0;
        }
    }
    ctx->pc = 0x19B50Cu;
}
