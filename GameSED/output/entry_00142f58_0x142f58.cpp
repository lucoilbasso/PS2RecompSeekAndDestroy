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

// Function: entry_00142f58
// Address: 0x142f58 - 0x142f70
void entry_00142f58_0x142f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f58_0x142f58");
#endif

    ctx->pc = 0x142f58u;

    // 0x142f58: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x142f5c: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x142F5Cu;
    {
        const bool branch_taken_0x142f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f5c) {
            ctx->pc = 0x142F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142F5Cu;
            // 0x142f60: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1430A0u;
            return;
        }
    }
    ctx->pc = 0x142F64u;
    // 0x142f64: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142F64u;
    {
        const bool branch_taken_0x142f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F64u;
        // 0x142f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f64) {
            ctx->pc = 0x142F70u;
            return;
        }
    }
    ctx->pc = 0x142F6Cu;
    // 0x142f6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x142f70u;
}
