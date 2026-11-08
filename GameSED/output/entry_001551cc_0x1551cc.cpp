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

// Function: entry_001551cc
// Address: 0x1551cc - 0x1551e0
void entry_001551cc_0x1551cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551cc_0x1551cc");
#endif

    ctx->pc = 0x1551ccu;

    // 0x1551cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1551ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1551d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1551d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1551d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1551d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1551d8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1551D8u;
    {
        const bool branch_taken_0x1551d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551D8u;
        // 0x1551dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551d8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1551E0u;
}
