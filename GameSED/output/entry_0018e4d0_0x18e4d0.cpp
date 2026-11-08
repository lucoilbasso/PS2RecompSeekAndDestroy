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

// Function: entry_0018e4d0
// Address: 0x18e4d0 - 0x18e4ec
void entry_0018e4d0_0x18e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e4d0_0x18e4d0");
#endif

    ctx->pc = 0x18e4d0u;

label_18e4d0:
    // 0x18e4d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e4d4: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x18e4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x18e4d8: 0x0  nop
    ctx->pc = 0x18e4d8u;
    // NOP
    // 0x18e4dc: 0x0  nop
    ctx->pc = 0x18e4dcu;
    // NOP
    // 0x18e4e0: 0x0  nop
    ctx->pc = 0x18e4e0u;
    // NOP
    // 0x18e4e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E4E4u;
    {
        const bool branch_taken_0x18e4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E4u;
        // 0x18e4e8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4e4) {
            ctx->pc = 0x18E4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e4d0;
        }
    }
    ctx->pc = 0x18E4ECu;
}
