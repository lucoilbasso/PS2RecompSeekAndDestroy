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

// Function: entry_0010e4e8
// Address: 0x10e4e8 - 0x10e4f8
void entry_0010e4e8_0x10e4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e4e8_0x10e4e8");
#endif

    ctx->pc = 0x10e4e8u;

    // 0x10e4e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x10e4ec: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x10e4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10e4f0: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x10E4F0u;
    {
        const bool branch_taken_0x10e4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f0) {
            ctx->pc = 0x10E298u;
            return;
        }
    }
    ctx->pc = 0x10E4F8u;
}
