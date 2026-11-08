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

// Function: entry_001543bc
// Address: 0x1543bc - 0x1543d0
void entry_001543bc_0x1543bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001543bc_0x1543bc");
#endif

    ctx->pc = 0x1543bcu;

    // 0x1543bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1543c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1543C0u;
    {
        const bool branch_taken_0x1543c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1543c0) {
            ctx->pc = 0x1543C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1543C0u;
            // 0x1543c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1543DCu;
            return;
        }
    }
    ctx->pc = 0x1543C8u;
    // 0x1543c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1543C8u;
    {
        const bool branch_taken_0x1543c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543c8) {
            ctx->pc = 0x1543DCu;
            return;
        }
    }
    ctx->pc = 0x1543D0u;
}
