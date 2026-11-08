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

// Function: GetWatchVector__8WcEntityP9DVAngle32P9FVector32
// Address: 0x1dd270 - 0x1dd294
void GetWatchVector__8WcEntityP9DVAngle32P9FVector32_0x1dd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWatchVector__8WcEntityP9DVAngle32P9FVector32_0x1dd270");
#endif

    ctx->pc = 0x1dd270u;

    // 0x1dd270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd274: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1dd278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd27c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dd27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd280: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dd280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd284: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dd284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd28c: 0x80674a2  j           func_19D288
    ctx->pc = 0x1DD28Cu;
    ctx->pc = 0x1DD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD28Cu;
    // 0x1dd290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    BUtilityGetAngleOffset__FP9DVAngle32P9FVector32T0_0x19d288(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD294u;
}
