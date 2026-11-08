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

// Function: index
// Address: 0x1cf558 - 0x1cf56c
void index_0x1cf558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("index_0x1cf558");
#endif

    ctx->pc = 0x1cf558u;

    // 0x1cf558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf564: 0x8074202  j           func_1D0808
    ctx->pc = 0x1CF564u;
    ctx->pc = 0x1CF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF564u;
    // 0x1cf568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0808u;
    strchr_0x1d0808(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF56Cu;
}
