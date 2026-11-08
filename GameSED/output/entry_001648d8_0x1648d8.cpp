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

// Function: entry_001648d8
// Address: 0x1648d8 - 0x1648e8
void entry_001648d8_0x1648d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648d8_0x1648d8");
#endif

    ctx->pc = 0x1648d8u;

    // 0x1648d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1648d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648dc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1648DCu;
    {
        const bool branch_taken_0x1648dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648DCu;
        // 0x1648e0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648dc) {
            ctx->pc = 0x164A04u;
            return;
        }
    }
    ctx->pc = 0x1648E4u;
    // 0x1648e4: 0x0  nop
    ctx->pc = 0x1648e4u;
    // NOP
    ctx->pc = 0x1648e8u;
}
