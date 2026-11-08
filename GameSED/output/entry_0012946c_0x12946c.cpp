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

// Function: entry_0012946c
// Address: 0x12946c - 0x129478
void entry_0012946c_0x12946c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012946c_0x12946c");
#endif

    ctx->pc = 0x12946cu;

    // 0x12946c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x12946cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129470: 0x1440fe43  bnez        $v0, . + 4 + (-0x1BD << 2)
    ctx->pc = 0x129470u;
    {
        const bool branch_taken_0x129470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129470u;
        // 0x129474: 0xafa400d0  sw          $a0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129470) {
            ctx->pc = 0x128D80u;
            return;
        }
    }
    ctx->pc = 0x129478u;
}
