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

// Function: entry_0015ed78
// Address: 0x15ed78 - 0x15ed88
void entry_0015ed78_0x15ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed78_0x15ed78");
#endif

    ctx->pc = 0x15ed78u;

    // 0x15ed78: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15ed7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15ED7Cu;
    {
        const bool branch_taken_0x15ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED7Cu;
        // 0x15ed80: 0x2454a878  addiu       $s4, $v0, -0x5788 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed7c) {
            ctx->pc = 0x15ED94u;
            return;
        }
    }
    ctx->pc = 0x15ED84u;
    // 0x15ed84: 0x0  nop
    ctx->pc = 0x15ed84u;
    // NOP
    ctx->pc = 0x15ed88u;
}
