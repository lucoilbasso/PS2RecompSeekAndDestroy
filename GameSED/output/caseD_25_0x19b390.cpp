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

// Function: caseD_25
// Address: 0x19b390 - 0x19b3a0
void caseD_25_0x19b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x19b390");
#endif

    ctx->pc = 0x19b390u;

    // 0x19b390: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x19b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b394: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b398: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19B398u;
    {
        const bool branch_taken_0x19b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B398u;
        // 0x19b39c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b398) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B3A0u;
}
