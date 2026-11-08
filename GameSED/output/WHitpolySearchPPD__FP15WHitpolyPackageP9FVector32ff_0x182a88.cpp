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

// Function: WHitpolySearchPPD__FP15WHitpolyPackageP9FVector32ff
// Address: 0x182a88 - 0x182aa0
void WHitpolySearchPPD__FP15WHitpolyPackageP9FVector32ff_0x182a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPPD__FP15WHitpolyPackageP9FVector32ff_0x182a88");
#endif

    ctx->pc = 0x182a88u;

    // 0x182a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182a8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182a98: 0x80600d6  j           func_180358
    ctx->pc = 0x182A98u;
    ctx->pc = 0x182A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A98u;
    // 0x182a9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180358u;
    WHitpolySearchPPD_1__FP15WHitpolyPackageP9FVector32ffi_0x180358(rdram, ctx, runtime); return;
    ctx->pc = 0x182AA0u;
}
