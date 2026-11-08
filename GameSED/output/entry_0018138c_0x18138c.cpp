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

// Function: entry_0018138c
// Address: 0x18138c - 0x181398
void entry_0018138c_0x18138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018138c_0x18138c");
#endif

    ctx->pc = 0x18138cu;

    // 0x18138c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18138Cu;
    {
        const bool branch_taken_0x18138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18138Cu;
        // 0x181390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18138c) {
            ctx->pc = 0x1813B0u;
            return;
        }
    }
    ctx->pc = 0x181394u;
    // 0x181394: 0x0  nop
    ctx->pc = 0x181394u;
    // NOP
    ctx->pc = 0x181398u;
}
