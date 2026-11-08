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

// Function: entry_0011ca10
// Address: 0x11ca10 - 0x11ca1c
void entry_0011ca10_0x11ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca10_0x11ca10");
#endif

    ctx->pc = 0x11ca10u;

    // 0x11ca10: 0x0  nop
    ctx->pc = 0x11ca10u;
    // NOP
    // 0x11ca14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CA14u;
    {
        const bool branch_taken_0x11ca14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ca14) {
            ctx->pc = 0x11CA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA14u;
            // 0x11ca18: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9F8u;
            return;
        }
    }
    ctx->pc = 0x11CA1Cu;
}
