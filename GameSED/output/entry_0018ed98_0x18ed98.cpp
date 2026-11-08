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

// Function: entry_0018ed98
// Address: 0x18ed98 - 0x18edb4
void entry_0018ed98_0x18ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed98_0x18ed98");
#endif

    ctx->pc = 0x18ed98u;

label_18ed98:
    // 0x18ed98: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18ed98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ed9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18eda0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x18eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x18eda4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18eda4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18eda8: 0x0  nop
    ctx->pc = 0x18eda8u;
    // NOP
    // 0x18edac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18EDACu;
    {
        const bool branch_taken_0x18edac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDACu;
        // 0x18edb0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edac) {
            ctx->pc = 0x18ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ed98;
        }
    }
    ctx->pc = 0x18EDB4u;
}
