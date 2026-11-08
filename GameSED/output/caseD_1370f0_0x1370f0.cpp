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

// Function: caseD_1370f0
// Address: 0x1370f0 - 0x137100
void caseD_1370f0_0x1370f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1370f0_0x1370f0");
#endif

    ctx->pc = 0x1370f0u;

    // 0x1370f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1370f4: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x1370f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x1370f8: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1370F8u;
    {
        const bool branch_taken_0x1370f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370F8u;
        // 0x1370fc: 0x30c20006  andi        $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370f8) {
            ctx->pc = 0x137220u;
            return;
        }
    }
    ctx->pc = 0x137100u;
}
