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

// Function: entry_001928b0
// Address: 0x1928b0 - 0x1928c4
void entry_001928b0_0x1928b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001928b0_0x1928b0");
#endif

    ctx->pc = 0x1928b0u;

    // 0x1928b0: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1928B0u;
    {
        const bool branch_taken_0x1928b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1928B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928B0u;
        // 0x1928b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928b0) {
            ctx->pc = 0x1928E0u;
            return;
        }
    }
    ctx->pc = 0x1928B8u;
    // 0x1928b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1928bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1928BCu;
    {
        const bool branch_taken_0x1928bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928bc) {
            ctx->pc = 0x1928C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1928BCu;
            // 0x1928c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1928E0u;
            return;
        }
    }
    ctx->pc = 0x1928C4u;
}
