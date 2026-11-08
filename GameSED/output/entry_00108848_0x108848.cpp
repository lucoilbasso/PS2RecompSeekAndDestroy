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

// Function: entry_00108848
// Address: 0x108848 - 0x108858
void entry_00108848_0x108848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108848_0x108848");
#endif

    ctx->pc = 0x108848u;

    // 0x108848: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x108848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10884c: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x10884Cu;
    {
        const bool branch_taken_0x10884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10884Cu;
        // 0x108850: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10884c) {
            ctx->pc = 0x109100u;
            return;
        }
    }
    ctx->pc = 0x108854u;
    // 0x108854: 0x0  nop
    ctx->pc = 0x108854u;
    // NOP
    ctx->pc = 0x108858u;
}
