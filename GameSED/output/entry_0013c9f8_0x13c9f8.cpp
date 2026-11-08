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

// Function: entry_0013c9f8
// Address: 0x13c9f8 - 0x13ca08
void entry_0013c9f8_0x13c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c9f8_0x13c9f8");
#endif

    ctx->pc = 0x13c9f8u;

    // 0x13c9f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13c9fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ca00: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13CA00u;
    {
        const bool branch_taken_0x13ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ca00) {
            ctx->pc = 0x13CA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA00u;
            // 0x13ca04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C9C0u;
            return;
        }
    }
    ctx->pc = 0x13CA08u;
}
