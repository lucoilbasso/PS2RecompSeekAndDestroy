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

// Function: entry_001b15cc
// Address: 0x1b15cc - 0x1b15d4
void entry_001b15cc_0x1b15cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15cc_0x1b15cc");
#endif

    ctx->pc = 0x1b15ccu;

    // 0x1b15cc: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B15CCu;
    {
        const bool branch_taken_0x1b15cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b15cc) {
            ctx->pc = 0x1B15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15CCu;
            // 0x1b15d0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15A0u;
            return;
        }
    }
    ctx->pc = 0x1B15D4u;
}
