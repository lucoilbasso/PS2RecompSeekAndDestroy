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

// Function: entry_0014a4ec
// Address: 0x14a4ec - 0x14a4fc
void entry_0014a4ec_0x14a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a4ec_0x14a4ec");
#endif

    ctx->pc = 0x14a4ecu;

    // 0x14a4ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14a4f0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14a4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a4f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x14A4F4u;
    {
        const bool branch_taken_0x14a4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F4u;
        // 0x14a4f8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f4) {
            ctx->pc = 0x14A408u;
            return;
        }
    }
    ctx->pc = 0x14A4FCu;
}
