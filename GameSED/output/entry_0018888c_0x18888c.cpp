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

// Function: entry_0018888c
// Address: 0x18888c - 0x18889c
void entry_0018888c_0x18888c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018888c_0x18888c");
#endif

    ctx->pc = 0x18888cu;

    // 0x18888c: 0x0  nop
    ctx->pc = 0x18888cu;
    // NOP
    // 0x188890: 0x0  nop
    ctx->pc = 0x188890u;
    // NOP
    // 0x188894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188894u;
    {
        const bool branch_taken_0x188894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188894u;
        // 0x188898: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188894) {
            ctx->pc = 0x188880u;
            return;
        }
    }
    ctx->pc = 0x18889Cu;
}
