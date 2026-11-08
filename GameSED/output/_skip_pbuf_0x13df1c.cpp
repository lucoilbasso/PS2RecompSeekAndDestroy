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

// Function: _skip_pbuf
// Address: 0x13df1c - 0x13df30
void _skip_pbuf_0x13df1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skip_pbuf_0x13df1c");
#endif

    ctx->pc = 0x13df1cu;

    // 0x13df1c: 0x97c40002  lhu         $a0, 0x2($fp)
    ctx->pc = 0x13df1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x13df20: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13df24: 0x2e4202a  slt         $a0, $s7, $a0
    ctx->pc = 0x13df24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13df28: 0x1480ff4d  bnez        $a0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x13DF28u;
    {
        const bool branch_taken_0x13df28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF28u;
        // 0x13df2c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df28) {
            ctx->pc = 0x13DC60u;
            return;
        }
    }
    ctx->pc = 0x13DF30u;
}
