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

// Function: entry_00182f50
// Address: 0x182f50 - 0x182f6c
void entry_00182f50_0x182f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182f50_0x182f50");
#endif

    ctx->pc = 0x182f50u;

    // 0x182f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182f54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x182f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f58: 0x8c47dc08  lw          $a3, -0x23F8($v0)
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958088)));
    // 0x182f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182f60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x182f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x182f64: 0x8060216  j           func_180858
    ctx->pc = 0x182F64u;
    ctx->pc = 0x182F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182F64u;
    // 0x182f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    ps2___WHitpolySearchPBDPoint__FP15WHitpolyPackageP9FVector32fT1ib_0x180858(rdram, ctx, runtime); return;
    ctx->pc = 0x182F6Cu;
}
