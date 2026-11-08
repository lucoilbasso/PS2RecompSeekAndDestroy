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

// Function: entry_0014069c
// Address: 0x14069c - 0x1406a8
void entry_0014069c_0x14069c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014069c_0x14069c");
#endif

    ctx->pc = 0x14069cu;

    // 0x14069c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14069Cu;
    {
        const bool branch_taken_0x14069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14069Cu;
        // 0x1406a0: 0x8cc30694  lw          $v1, 0x694($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14069c) {
            ctx->pc = 0x1406B0u;
            return;
        }
    }
    ctx->pc = 0x1406A4u;
    // 0x1406a4: 0x0  nop
    ctx->pc = 0x1406a4u;
    // NOP
    ctx->pc = 0x1406a8u;
}
