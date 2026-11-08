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

// Function: entry_0019c958
// Address: 0x19c958 - 0x19c974
void entry_0019c958_0x19c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c958_0x19c958");
#endif

    ctx->pc = 0x19c958u;

label_19c958:
    // 0x19c958: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19c958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c95c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c960: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c964: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x19c964u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c968: 0x0  nop
    ctx->pc = 0x19c968u;
    // NOP
    // 0x19c96c: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C96Cu;
    {
        const bool branch_taken_0x19c96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x19C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C96Cu;
        // 0x19c970: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c96c) {
            ctx->pc = 0x19C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c958;
        }
    }
    ctx->pc = 0x19C974u;
}
