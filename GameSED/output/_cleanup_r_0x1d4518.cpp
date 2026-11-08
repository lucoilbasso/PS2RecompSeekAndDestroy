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

// Function: _cleanup_r
// Address: 0x1d4518 - 0x1d4534
void _cleanup_r_0x1d4518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_r_0x1d4518");
#endif

    ctx->pc = 0x1d4518u;

    // 0x1d4518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d451c: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d451cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d4520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4524: 0x24a54230  addiu       $a1, $a1, 0x4230
    ctx->pc = 0x1d4524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16944));
    // 0x1d4528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d452c: 0x807538c  j           func_1D4E30
    ctx->pc = 0x1D452Cu;
    ctx->pc = 0x1D4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D452Cu;
    // 0x1d4530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E30u;
    _fwalk_0x1d4e30(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4534u;
}
