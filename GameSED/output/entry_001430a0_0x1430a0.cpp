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

// Function: entry_001430a0
// Address: 0x1430a0 - 0x1430b4
void entry_001430a0_0x1430a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001430a0_0x1430a0");
#endif

    ctx->pc = 0x1430a0u;

    // 0x1430a0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1430A0u;
    {
        const bool branch_taken_0x1430a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A0u;
        // 0x1430a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430a0) {
            ctx->pc = 0x143198u;
            return;
        }
    }
    ctx->pc = 0x1430A8u;
    // 0x1430a8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1430A8u;
    {
        const bool branch_taken_0x1430a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430A8u;
        // 0x1430ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430a8) {
            ctx->pc = 0x1430B4u;
            return;
        }
    }
    ctx->pc = 0x1430B0u;
    // 0x1430b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1430b4u;
}
