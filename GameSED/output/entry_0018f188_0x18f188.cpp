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

// Function: entry_0018f188
// Address: 0x18f188 - 0x18f1ac
void entry_0018f188_0x18f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f188_0x18f188");
#endif

    ctx->pc = 0x18f188u;

label_18f188:
    // 0x18f188: 0x1082fff5  beq         $a0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18F188u;
    {
        const bool branch_taken_0x18f188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F188u;
        // 0x18f18c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f188) {
            ctx->pc = 0x18F160u;
            return;
        }
    }
    ctx->pc = 0x18F190u;
    // 0x18f190: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f194: 0x0  nop
    ctx->pc = 0x18f194u;
    // NOP
    // 0x18f198: 0x0  nop
    ctx->pc = 0x18f198u;
    // NOP
    // 0x18f19c: 0x0  nop
    ctx->pc = 0x18f19cu;
    // NOP
    // 0x18f1a0: 0x0  nop
    ctx->pc = 0x18f1a0u;
    // NOP
    // 0x18f1a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F1A4u;
    {
        const bool branch_taken_0x18f1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A4u;
        // 0x18f1a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1a4) {
            ctx->pc = 0x18F188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f188;
        }
    }
    ctx->pc = 0x18F1ACu;
}
