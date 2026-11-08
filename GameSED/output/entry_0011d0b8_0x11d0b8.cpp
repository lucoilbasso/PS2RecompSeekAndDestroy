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

// Function: entry_0011d0b8
// Address: 0x11d0b8 - 0x11d0c4
void entry_0011d0b8_0x11d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0b8_0x11d0b8");
#endif

    ctx->pc = 0x11d0b8u;

    // 0x11d0b8: 0x0  nop
    ctx->pc = 0x11d0b8u;
    // NOP
    // 0x11d0bc: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11D0BCu;
    {
        const bool branch_taken_0x11d0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d0bc) {
            ctx->pc = 0x11D0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0BCu;
            // 0x11d0c0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0A0u;
            return;
        }
    }
    ctx->pc = 0x11D0C4u;
}
