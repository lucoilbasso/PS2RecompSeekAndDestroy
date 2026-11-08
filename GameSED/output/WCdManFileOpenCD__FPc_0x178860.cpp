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

// Function: WCdManFileOpenCD__FPc
// Address: 0x178860 - 0x178874
void WCdManFileOpenCD__FPc_0x178860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileOpenCD__FPc_0x178860");
#endif

    ctx->pc = 0x178860u;

    // 0x178860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17886c: 0x805e2b6  j           func_178AD8
    ctx->pc = 0x17886Cu;
    ctx->pc = 0x178870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17886Cu;
    // 0x178870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178AD8u;
    WCdManFileCacheSearch__FPc_0x178ad8(rdram, ctx, runtime); return;
    ctx->pc = 0x178874u;
}
