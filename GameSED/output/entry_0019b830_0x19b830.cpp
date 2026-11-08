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

// Function: entry_0019b830
// Address: 0x19b830 - 0x19b84c
void entry_0019b830_0x19b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b830_0x19b830");
#endif

    ctx->pc = 0x19b830u;

label_19b830:
    // 0x19b830: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b830u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b834: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b838: 0x0  nop
    ctx->pc = 0x19b838u;
    // NOP
    // 0x19b83c: 0x0  nop
    ctx->pc = 0x19b83cu;
    // NOP
    // 0x19b840: 0x0  nop
    ctx->pc = 0x19b840u;
    // NOP
    // 0x19b844: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B844u;
    {
        const bool branch_taken_0x19b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B844u;
        // 0x19b848: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b844) {
            ctx->pc = 0x19B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b830;
        }
    }
    ctx->pc = 0x19B84Cu;
}
