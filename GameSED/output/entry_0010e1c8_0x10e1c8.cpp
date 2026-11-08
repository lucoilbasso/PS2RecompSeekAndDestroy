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

// Function: entry_0010e1c8
// Address: 0x10e1c8 - 0x10e1e0
void entry_0010e1c8_0x10e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e1c8_0x10e1c8");
#endif

    ctx->pc = 0x10e1c8u;

    // 0x10e1c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10e1cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e1d0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x10e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x10e1d4: 0xae7001c4  sw          $s0, 0x1C4($s3)
    ctx->pc = 0x10e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 16));
    // 0x10e1d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10E1D8u;
    {
        const bool branch_taken_0x10e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0xac640044  sw          $a0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1d8) {
            ctx->pc = 0x10E21Cu;
            return;
        }
    }
    ctx->pc = 0x10E1E0u;
}
