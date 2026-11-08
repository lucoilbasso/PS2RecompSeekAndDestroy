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

// Function: entry_001d4ad0
// Address: 0x1d4ad0 - 0x1d4ad8
void entry_001d4ad0_0x1d4ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ad0_0x1d4ad0");
#endif

    ctx->pc = 0x1d4ad0u;

    // 0x1d4ad0: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AD0u;
            // 0x1d4ad4: 0x2e430401  sltiu       $v1, $s2, 0x401 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AF8u;
            return;
        }
    }
    ctx->pc = 0x1D4AD8u;
}
