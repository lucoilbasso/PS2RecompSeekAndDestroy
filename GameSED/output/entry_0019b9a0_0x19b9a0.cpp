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

// Function: entry_0019b9a0
// Address: 0x19b9a0 - 0x19b9bc
void entry_0019b9a0_0x19b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b9a0_0x19b9a0");
#endif

    ctx->pc = 0x19b9a0u;

label_19b9a0:
    // 0x19b9a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x19b9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b9a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b9a8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b9ac: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b9b0: 0x0  nop
    ctx->pc = 0x19b9b0u;
    // NOP
    // 0x19b9b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B9B4u;
    {
        const bool branch_taken_0x19b9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B9B4u;
        // 0x19b9b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9b4) {
            ctx->pc = 0x19B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b9a0;
        }
    }
    ctx->pc = 0x19B9BCu;
}
