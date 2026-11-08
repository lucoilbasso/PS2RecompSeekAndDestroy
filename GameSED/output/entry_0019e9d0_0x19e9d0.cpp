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

// Function: entry_0019e9d0
// Address: 0x19e9d0 - 0x19e9e0
void entry_0019e9d0_0x19e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9d0_0x19e9d0");
#endif

    ctx->pc = 0x19e9d0u;

    // 0x19e9d0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x19e9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19e9d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19E9D4u;
    {
        const bool branch_taken_0x19e9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9D4u;
        // 0x19e9d8: 0x24828000  addiu       $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9d4) {
            ctx->pc = 0x19EA00u;
            return;
        }
    }
    ctx->pc = 0x19E9DCu;
    // 0x19e9dc: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    ctx->pc = 0x19e9e0u;
}
