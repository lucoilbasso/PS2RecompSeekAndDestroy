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

// Function: caseD_73
// Address: 0x19b320 - 0x19b330
void caseD_73_0x19b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_73_0x19b320");
#endif

    ctx->pc = 0x19b320u;

    // 0x19b320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b324: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B328u;
    {
        const bool branch_taken_0x19b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B328u;
        // 0x19b32c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b328) {
            ctx->pc = 0x19B348u;
            return;
        }
    }
    ctx->pc = 0x19B330u;
}
