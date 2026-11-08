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

// Function: caseD_26
// Address: 0x19b428 - 0x19b440
void caseD_26_0x19b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_26_0x19b428");
#endif

    ctx->pc = 0x19b428u;

    // 0x19b428: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x19b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19b42c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b434: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x19b434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x19b438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B438u;
    {
        const bool branch_taken_0x19b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B438u;
        // 0x19b43c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b438) {
            ctx->pc = 0x19B448u;
            return;
        }
    }
    ctx->pc = 0x19B440u;
}
