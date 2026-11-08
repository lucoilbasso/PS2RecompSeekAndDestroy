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

// Function: entry_001a3698
// Address: 0x1a3698 - 0x1a36a8
void entry_001a3698_0x1a3698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3698_0x1a3698");
#endif

    ctx->pc = 0x1a3698u;

    // 0x1a3698: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A3698u;
    {
        const bool branch_taken_0x1a3698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3698u;
        // 0x1a369c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3698) {
            ctx->pc = 0x1A3704u;
            return;
        }
    }
    ctx->pc = 0x1A36A0u;
    // 0x1a36a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a36a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a36a4: 0x0  nop
    ctx->pc = 0x1a36a4u;
    // NOP
    ctx->pc = 0x1a36a8u;
}
