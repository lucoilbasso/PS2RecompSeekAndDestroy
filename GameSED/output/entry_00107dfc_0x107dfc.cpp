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

// Function: entry_00107dfc
// Address: 0x107dfc - 0x107e08
void entry_00107dfc_0x107dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107dfc_0x107dfc");
#endif

    ctx->pc = 0x107dfcu;

    // 0x107dfc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x107DFCu;
    {
        const bool branch_taken_0x107dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DFCu;
        // 0x107e00: 0x8cb00014  lw          $s0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dfc) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107E04u;
    // 0x107e04: 0x0  nop
    ctx->pc = 0x107e04u;
    // NOP
    ctx->pc = 0x107e08u;
}
