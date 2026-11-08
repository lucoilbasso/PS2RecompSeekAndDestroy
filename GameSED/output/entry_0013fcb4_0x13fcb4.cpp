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

// Function: entry_0013fcb4
// Address: 0x13fcb4 - 0x13fcbc
void entry_0013fcb4_0x13fcb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fcb4_0x13fcb4");
#endif

    ctx->pc = 0x13fcb4u;

    // 0x13fcb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FCB4u;
    {
        const bool branch_taken_0x13fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fcb4) {
            ctx->pc = 0x13FCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FCB4u;
            // 0x13fcb8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FCBCu;
            return;
        }
    }
    ctx->pc = 0x13FCBCu;
}
