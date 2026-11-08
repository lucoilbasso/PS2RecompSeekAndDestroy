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

// Function: entry_001aafd4
// Address: 0x1aafd4 - 0x1aafe0
void entry_001aafd4_0x1aafd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafd4_0x1aafd4");
#endif

    ctx->pc = 0x1aafd4u;

    // 0x1aafd4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aafd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAFD8u;
    {
        const bool branch_taken_0x1aafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFD8u;
        // 0x1aafdc: 0x24849610  addiu       $a0, $a0, -0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafd8) {
            ctx->pc = 0x1AAFF4u;
            return;
        }
    }
    ctx->pc = 0x1AAFE0u;
}
