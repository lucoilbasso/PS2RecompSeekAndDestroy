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

// Function: caseD_12
// Address: 0x164b80 - 0x164b88
void caseD_12_0x164b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x164b80");
#endif

    ctx->pc = 0x164b80u;

    // 0x164b80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164B80u;
    {
        const bool branch_taken_0x164b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B80u;
        // 0x164b84: 0x248719e4  addiu       $a3, $a0, 0x19E4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b80) {
            ctx->pc = 0x164BACu;
            return;
        }
    }
    ctx->pc = 0x164B88u;
}
