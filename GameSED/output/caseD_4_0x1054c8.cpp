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

// Function: caseD_4
// Address: 0x1054c8 - 0x1054e0
void caseD_4_0x1054c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1054c8");
#endif

    ctx->pc = 0x1054c8u;

    // 0x1054c8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1054cc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1054d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1054d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1054d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1054d8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054D8u;
        // 0x1054dc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x1054E0u;
}
