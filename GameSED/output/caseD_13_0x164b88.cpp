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

// Function: caseD_13
// Address: 0x164b88 - 0x164b90
void caseD_13_0x164b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x164b88");
#endif

    ctx->pc = 0x164b88u;

    // 0x164b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164B88u;
    {
        const bool branch_taken_0x164b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B88u;
        // 0x164b8c: 0x248719f0  addiu       $a3, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b88) {
            ctx->pc = 0x164BACu;
            return;
        }
    }
    ctx->pc = 0x164B90u;
}
