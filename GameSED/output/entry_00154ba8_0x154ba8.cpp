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

// Function: entry_00154ba8
// Address: 0x154ba8 - 0x154bb0
void entry_00154ba8_0x154ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154ba8_0x154ba8");
#endif

    ctx->pc = 0x154ba8u;

    // 0x154ba8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x154BA8u;
    {
        const bool branch_taken_0x154ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA8u;
        // 0x154bac: 0x2403fdff  addiu       $v1, $zero, -0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ba8) {
            ctx->pc = 0x154DC4u;
            return;
        }
    }
    ctx->pc = 0x154BB0u;
}
