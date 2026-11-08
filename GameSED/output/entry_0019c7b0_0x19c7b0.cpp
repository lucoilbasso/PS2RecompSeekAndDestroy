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

// Function: entry_0019c7b0
// Address: 0x19c7b0 - 0x19c7cc
void entry_0019c7b0_0x19c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c7b0_0x19c7b0");
#endif

    ctx->pc = 0x19c7b0u;

label_19c7b0:
    // 0x19c7b0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19c7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19c7b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c7b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c7bc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c7c0: 0x0  nop
    ctx->pc = 0x19c7c0u;
    // NOP
    // 0x19c7c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C7C4u;
    {
        const bool branch_taken_0x19c7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7C4u;
        // 0x19c7c8: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7c4) {
            ctx->pc = 0x19C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c7b0;
        }
    }
    ctx->pc = 0x19C7CCu;
}
