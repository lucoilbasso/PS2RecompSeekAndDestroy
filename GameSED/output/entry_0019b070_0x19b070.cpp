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

// Function: entry_0019b070
// Address: 0x19b070 - 0x19b08c
void entry_0019b070_0x19b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b070_0x19b070");
#endif

    ctx->pc = 0x19b070u;

label_19b070:
    // 0x19b070: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b074: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19b074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b078: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19b078u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b07c: 0x0  nop
    ctx->pc = 0x19b07cu;
    // NOP
    // 0x19b080: 0x0  nop
    ctx->pc = 0x19b080u;
    // NOP
    // 0x19b084: 0x1509fffa  bne         $t0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B084u;
    {
        const bool branch_taken_0x19b084 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B084u;
        // 0x19b088: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b084) {
            ctx->pc = 0x19B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b070;
        }
    }
    ctx->pc = 0x19B08Cu;
}
