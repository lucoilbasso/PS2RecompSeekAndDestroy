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

// Function: entry_0019ce68
// Address: 0x19ce68 - 0x19ce8c
void entry_0019ce68_0x19ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce68_0x19ce68");
#endif

    ctx->pc = 0x19ce68u;

label_19ce68:
    // 0x19ce68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ce6c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CE6Cu;
    {
        const bool branch_taken_0x19ce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce6c) {
            ctx->pc = 0x19CE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE6Cu;
            // 0x19ce70: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CEB0u;
            return;
        }
    }
    ctx->pc = 0x19CE74u;
    // 0x19ce74: 0x0  nop
    ctx->pc = 0x19ce74u;
    // NOP
    // 0x19ce78: 0x0  nop
    ctx->pc = 0x19ce78u;
    // NOP
    // 0x19ce7c: 0x0  nop
    ctx->pc = 0x19ce7cu;
    // NOP
    // 0x19ce80: 0x0  nop
    ctx->pc = 0x19ce80u;
    // NOP
    // 0x19ce84: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19CE84u;
    {
        const bool branch_taken_0x19ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ce84) {
            ctx->pc = 0x19CE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CE84u;
            // 0x19ce88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE8Cu;
}
