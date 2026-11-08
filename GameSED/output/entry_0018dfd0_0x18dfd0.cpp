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

// Function: entry_0018dfd0
// Address: 0x18dfd0 - 0x18dfe0
void entry_0018dfd0_0x18dfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dfd0_0x18dfd0");
#endif

    ctx->pc = 0x18dfd0u;

    // 0x18dfd0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18dfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18dfd4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DFD4u;
    {
        const bool branch_taken_0x18dfd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD4u;
        // 0x18dfd8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd4) {
            ctx->pc = 0x18E000u;
            return;
        }
    }
    ctx->pc = 0x18DFDCu;
    // 0x18dfdc: 0x0  nop
    ctx->pc = 0x18dfdcu;
    // NOP
    ctx->pc = 0x18dfe0u;
}
