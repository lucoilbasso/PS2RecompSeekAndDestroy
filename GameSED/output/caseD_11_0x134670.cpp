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

// Function: caseD_11
// Address: 0x134670 - 0x134680
void caseD_11_0x134670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x134670");
#endif

    ctx->pc = 0x134670u;

    // 0x134670: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x134670u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134674: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x134674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x134678: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x134678u;
    {
        const bool branch_taken_0x134678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134678) {
            ctx->pc = 0x13467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134678u;
            // 0x13467c: 0x8e510260  lw          $s1, 0x260($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134680u;
}
