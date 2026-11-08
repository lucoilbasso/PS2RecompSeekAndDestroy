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

// Function: entry_00180bd4
// Address: 0x180bd4 - 0x180be8
void entry_00180bd4_0x180bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180bd4_0x180bd4");
#endif

    ctx->pc = 0x180bd4u;

    // 0x180bd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x180bd8: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x180bdc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x180bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180be0: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
    ctx->pc = 0x180BE0u;
    {
        const bool branch_taken_0x180be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BE0u;
        // 0x180be4: 0x25ef0010  addiu       $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180be0) {
            ctx->pc = 0x180930u;
            return;
        }
    }
    ctx->pc = 0x180BE8u;
}
