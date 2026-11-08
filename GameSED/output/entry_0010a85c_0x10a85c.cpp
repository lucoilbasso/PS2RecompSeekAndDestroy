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

// Function: entry_0010a85c
// Address: 0x10a85c - 0x10a868
void entry_0010a85c_0x10a85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a85c_0x10a85c");
#endif

    ctx->pc = 0x10a85cu;

    // 0x10a85c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x10a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x10a860: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x10A860u;
    {
        const bool branch_taken_0x10a860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A860u;
        // 0x10a864: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a860) {
            ctx->pc = 0x10A8E0u;
            return;
        }
    }
    ctx->pc = 0x10A868u;
}
