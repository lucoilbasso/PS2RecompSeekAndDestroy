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

// Function: entry_0018deb8
// Address: 0x18deb8 - 0x18ded8
void entry_0018deb8_0x18deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018deb8_0x18deb8");
#endif

    ctx->pc = 0x18deb8u;

label_18deb8:
    // 0x18deb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18debc: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x18debcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18dec0: 0x0  nop
    ctx->pc = 0x18dec0u;
    // NOP
    // 0x18dec4: 0x0  nop
    ctx->pc = 0x18dec4u;
    // NOP
    // 0x18dec8: 0x0  nop
    ctx->pc = 0x18dec8u;
    // NOP
    // 0x18decc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DECCu;
    {
        const bool branch_taken_0x18decc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DECCu;
        // 0x18ded0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18decc) {
            ctx->pc = 0x18DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18deb8;
        }
    }
    ctx->pc = 0x18DED4u;
    // 0x18ded4: 0x8c850210  lw          $a1, 0x210($a0)
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    ctx->pc = 0x18ded8u;
}
