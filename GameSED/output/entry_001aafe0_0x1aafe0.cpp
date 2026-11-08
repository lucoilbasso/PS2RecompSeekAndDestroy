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

// Function: entry_001aafe0
// Address: 0x1aafe0 - 0x1aafec
void entry_001aafe0_0x1aafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafe0_0x1aafe0");
#endif

    ctx->pc = 0x1aafe0u;

    // 0x1aafe0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aafe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAFE4u;
    {
        const bool branch_taken_0x1aafe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFE4u;
        // 0x1aafe8: 0x24849640  addiu       $a0, $a0, -0x69C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafe4) {
            ctx->pc = 0x1AAFF4u;
            return;
        }
    }
    ctx->pc = 0x1AAFECu;
}
