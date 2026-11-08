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

// Function: entry_001d0600
// Address: 0x1d0600 - 0x1d0610
void entry_001d0600_0x1d0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0600_0x1d0600");
#endif

    ctx->pc = 0x1d0600u;

    // 0x1d0600: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    // 0x1d0604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0608: 0x8074120  j           func_1D0480
    ctx->pc = 0x1D0608u;
    ctx->pc = 0x1D060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0608u;
    // 0x1d060c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0480u;
    _raise_r_0x1d0480(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0610u;
}
