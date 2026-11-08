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

// Function: entry_001d9990
// Address: 0x1d9990 - 0x1d99a0
void entry_001d9990_0x1d9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9990_0x1d9990");
#endif

    ctx->pc = 0x1d9990u;

    // 0x1d9990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D9994u;
    {
        const bool branch_taken_0x1d9994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9994u;
        // 0x1d9998: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9994) {
            ctx->pc = 0x1D99C4u;
            return;
        }
    }
    ctx->pc = 0x1D999Cu;
    // 0x1d999c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1d99a0u;
}
