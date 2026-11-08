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

// Function: entry_001aafc8
// Address: 0x1aafc8 - 0x1aafd4
void entry_001aafc8_0x1aafc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafc8_0x1aafc8");
#endif

    ctx->pc = 0x1aafc8u;

    // 0x1aafc8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aafcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AAFCCu;
    {
        const bool branch_taken_0x1aafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFCCu;
        // 0x1aafd0: 0x248495e0  addiu       $a0, $a0, -0x6A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafcc) {
            ctx->pc = 0x1AAFF4u;
            return;
        }
    }
    ctx->pc = 0x1AAFD4u;
}
