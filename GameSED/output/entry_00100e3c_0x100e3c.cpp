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

// Function: entry_00100e3c
// Address: 0x100e3c - 0x100e4c
void entry_00100e3c_0x100e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100e3c_0x100e3c");
#endif

    ctx->pc = 0x100e3cu;

    // 0x100e3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x100e40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x100e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100e44: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x100E44u;
    {
        const bool branch_taken_0x100e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100e44) {
            ctx->pc = 0x100E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100E44u;
            // 0x100e48: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100DF8u;
            return;
        }
    }
    ctx->pc = 0x100E4Cu;
}
