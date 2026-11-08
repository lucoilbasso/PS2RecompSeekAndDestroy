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

// Function: entry_001bb0d0
// Address: 0x1bb0d0 - 0x1bb0dc
void entry_001bb0d0_0x1bb0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0d0_0x1bb0d0");
#endif

    ctx->pc = 0x1bb0d0u;

    // 0x1bb0d0: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    // 0x1bb0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB0D4u;
    {
        const bool branch_taken_0x1bb0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D4u;
        // 0x1bb0d8: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0d4) {
            ctx->pc = 0x1BB0E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0DCu;
}
