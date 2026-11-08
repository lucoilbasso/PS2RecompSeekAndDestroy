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

// Function: $L20
// Address: 0x1d0ac8 - 0x1d0ad0
void ps2__L20_0x1d0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L20_0x1d0ac8");
#endif

    ctx->pc = 0x1d0ac8u;

    // 0x1d0ac8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0AC8u;
    {
        const bool branch_taken_0x1d0ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AC8u;
        // 0x1d0acc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ac8) {
            ctx->pc = 0x1D0AA8u;
            return;
        }
    }
    ctx->pc = 0x1D0AD0u;
}
