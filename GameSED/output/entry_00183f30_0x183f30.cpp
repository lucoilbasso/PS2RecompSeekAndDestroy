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

// Function: entry_00183f30
// Address: 0x183f30 - 0x183f4c
void entry_00183f30_0x183f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183f30_0x183f30");
#endif

    ctx->pc = 0x183f30u;

label_183f30:
    // 0x183f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183f34: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x183f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x183f38: 0x0  nop
    ctx->pc = 0x183f38u;
    // NOP
    // 0x183f3c: 0x0  nop
    ctx->pc = 0x183f3cu;
    // NOP
    // 0x183f40: 0x0  nop
    ctx->pc = 0x183f40u;
    // NOP
    // 0x183f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183F44u;
    {
        const bool branch_taken_0x183f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F44u;
        // 0x183f48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f44) {
            ctx->pc = 0x183F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183f30;
        }
    }
    ctx->pc = 0x183F4Cu;
}
