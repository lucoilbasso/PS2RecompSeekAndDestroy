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

// Function: entry_00181b80
// Address: 0x181b80 - 0x181b90
void entry_00181b80_0x181b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181b80_0x181b80");
#endif

    ctx->pc = 0x181b80u;

    // 0x181b80: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x181b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x181b84: 0x139102a  slt         $v0, $t1, $t9
    ctx->pc = 0x181b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x181b88: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x181B88u;
    {
        const bool branch_taken_0x181b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B88u;
        // 0x181b8c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b88) {
            ctx->pc = 0x181A38u;
            return;
        }
    }
    ctx->pc = 0x181B90u;
}
