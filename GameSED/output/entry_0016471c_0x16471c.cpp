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

// Function: entry_0016471c
// Address: 0x16471c - 0x164728
void entry_0016471c_0x16471c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016471c_0x16471c");
#endif

    ctx->pc = 0x16471cu;

    // 0x16471c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x164720: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x164720u;
    {
        const bool branch_taken_0x164720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164720u;
        // 0x164724: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164720) {
            ctx->pc = 0x1646D8u;
            return;
        }
    }
    ctx->pc = 0x164728u;
}
