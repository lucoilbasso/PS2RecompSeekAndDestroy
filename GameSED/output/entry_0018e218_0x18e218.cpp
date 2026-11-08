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

// Function: entry_0018e218
// Address: 0x18e218 - 0x18e234
void entry_0018e218_0x18e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e218_0x18e218");
#endif

    ctx->pc = 0x18e218u;

label_18e218:
    // 0x18e218: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18e218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e21c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e220: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18e224: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18e224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e228: 0x0  nop
    ctx->pc = 0x18e228u;
    // NOP
    // 0x18e22c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E22Cu;
    {
        const bool branch_taken_0x18e22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E22Cu;
        // 0x18e230: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e22c) {
            ctx->pc = 0x18E218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e218;
        }
    }
    ctx->pc = 0x18E234u;
}
