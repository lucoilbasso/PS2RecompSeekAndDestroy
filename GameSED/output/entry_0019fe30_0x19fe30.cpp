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

// Function: entry_0019fe30
// Address: 0x19fe30 - 0x19fe50
void entry_0019fe30_0x19fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe30_0x19fe30");
#endif

    ctx->pc = 0x19fe30u;

    // 0x19fe30: 0x0  nop
    ctx->pc = 0x19fe30u;
    // NOP
    // 0x19fe34: 0x0  nop
    ctx->pc = 0x19fe34u;
    // NOP
    // 0x19fe38: 0x0  nop
    ctx->pc = 0x19fe38u;
    // NOP
    // 0x19fe3c: 0x0  nop
    ctx->pc = 0x19fe3cu;
    // NOP
    // 0x19fe40: 0x5050fff7  beql        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19FE40u;
    {
        const bool branch_taken_0x19fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x19fe40) {
            ctx->pc = 0x19FE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE40u;
            // 0x19fe44: 0x3c100027  lui         $s0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE20u;
            return;
        }
    }
    ctx->pc = 0x19FE48u;
    // 0x19fe48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19fe4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x19fe50u;
}
