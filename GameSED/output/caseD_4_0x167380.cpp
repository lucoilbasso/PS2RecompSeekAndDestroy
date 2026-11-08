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
// Address: 0x167380 - 0x16738c
void caseD_4_0x167380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x167380");
#endif

    ctx->pc = 0x167380u;

    // 0x167380: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x167384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167384u;
    {
        const bool branch_taken_0x167384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167384u;
        // 0x167388: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167384) {
            ctx->pc = 0x167398u;
            return;
        }
    }
    ctx->pc = 0x16738Cu;
}
