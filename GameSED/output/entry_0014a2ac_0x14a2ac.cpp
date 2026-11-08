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

// Function: entry_0014a2ac
// Address: 0x14a2ac - 0x14a2c0
void entry_0014a2ac_0x14a2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2ac_0x14a2ac");
#endif

    ctx->pc = 0x14a2acu;

    // 0x14a2ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a2b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a2b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14A2B4u;
    {
        const bool branch_taken_0x14a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2B4u;
        // 0x14a2b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2b4) {
            ctx->pc = 0x14A280u;
            return;
        }
    }
    ctx->pc = 0x14A2BCu;
    // 0x14a2bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->pc = 0x14a2c0u;
}
