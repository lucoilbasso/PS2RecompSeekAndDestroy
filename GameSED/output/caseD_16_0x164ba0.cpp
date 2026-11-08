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

// Function: caseD_16
// Address: 0x164ba0 - 0x164ba8
void caseD_16_0x164ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x164ba0");
#endif

    ctx->pc = 0x164ba0u;

    // 0x164ba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164BA0u;
    {
        const bool branch_taken_0x164ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BA0u;
        // 0x164ba4: 0x24871a14  addiu       $a3, $a0, 0x1A14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ba0) {
            ctx->pc = 0x164BACu;
            return;
        }
    }
    ctx->pc = 0x164BA8u;
}
