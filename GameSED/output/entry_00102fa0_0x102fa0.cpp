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

// Function: entry_00102fa0
// Address: 0x102fa0 - 0x102fb0
void entry_00102fa0_0x102fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102fa0_0x102fa0");
#endif

    ctx->pc = 0x102fa0u;

    // 0x102fa0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x102fa4: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x102FA4u;
    {
        const bool branch_taken_0x102fa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FA4u;
        // 0x102fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fa4) {
            ctx->pc = 0x103074u;
            return;
        }
    }
    ctx->pc = 0x102FACu;
    // 0x102fac: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x102facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x102fb0u;
}
