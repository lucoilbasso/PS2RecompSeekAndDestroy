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

// Function: caseD_14
// Address: 0x164b90 - 0x164b98
void caseD_14_0x164b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x164b90");
#endif

    ctx->pc = 0x164b90u;

    // 0x164b90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164B90u;
    {
        const bool branch_taken_0x164b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B90u;
        // 0x164b94: 0x248719fc  addiu       $a3, $a0, 0x19FC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b90) {
            ctx->pc = 0x164BACu;
            return;
        }
    }
    ctx->pc = 0x164B98u;
}
