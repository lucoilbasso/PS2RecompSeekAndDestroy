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

// Function: entry_0011d0c4
// Address: 0x11d0c4 - 0x11d0cc
void entry_0011d0c4_0x11d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0c4_0x11d0c4");
#endif

    ctx->pc = 0x11d0c4u;

    // 0x11d0c4: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D0C4u;
    {
        const bool branch_taken_0x11d0c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0C4u;
        // 0x11d0c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0c4) {
            ctx->pc = 0x11D0D8u;
            return;
        }
    }
    ctx->pc = 0x11D0CCu;
}
