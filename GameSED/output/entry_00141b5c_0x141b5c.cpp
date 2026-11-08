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

// Function: entry_00141b5c
// Address: 0x141b5c - 0x141b64
void entry_00141b5c_0x141b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b5c_0x141b5c");
#endif

    ctx->pc = 0x141b5cu;

    // 0x141b5c: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x141B5Cu;
    {
        const bool branch_taken_0x141b5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x141b5c) {
            ctx->pc = 0x141B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B5Cu;
            // 0x141b60: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141B64u;
            return;
        }
    }
    ctx->pc = 0x141B64u;
}
