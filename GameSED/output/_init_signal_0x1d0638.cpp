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

// Function: _init_signal
// Address: 0x1d0638 - 0x1d0654
void _init_signal_0x1d0638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_init_signal_0x1d0638");
#endif

    ctx->pc = 0x1d0638u;

    // 0x1d0638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d063c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d0640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0644: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d0648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d064c: 0x80740e4  j           func_1D0390
    ctx->pc = 0x1D064Cu;
    ctx->pc = 0x1D0650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D064Cu;
    // 0x1d0650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0390u;
    _init_signal_r_0x1d0390(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0654u;
}
