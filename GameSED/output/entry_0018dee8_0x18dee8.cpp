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

// Function: entry_0018dee8
// Address: 0x18dee8 - 0x18df04
void entry_0018dee8_0x18dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dee8_0x18dee8");
#endif

    ctx->pc = 0x18dee8u;

label_18dee8:
    // 0x18dee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18deec: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x18deecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18def0: 0x0  nop
    ctx->pc = 0x18def0u;
    // NOP
    // 0x18def4: 0x0  nop
    ctx->pc = 0x18def4u;
    // NOP
    // 0x18def8: 0x0  nop
    ctx->pc = 0x18def8u;
    // NOP
    // 0x18defc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DEFCu;
    {
        const bool branch_taken_0x18defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEFCu;
        // 0x18df00: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18defc) {
            ctx->pc = 0x18DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dee8;
        }
    }
    ctx->pc = 0x18DF04u;
}
