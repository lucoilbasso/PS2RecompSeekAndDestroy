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

// Function: ErrMessage
// Address: 0x170918 - 0x170938
void ErrMessage_0x170918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ErrMessage_0x170918");
#endif

    ctx->pc = 0x170918u;

    // 0x170918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17091c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17091cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170924: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x170924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x170928: 0x24847690  addiu       $a0, $a0, 0x7690
    ctx->pc = 0x170928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30352));
    // 0x17092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170930: 0x80740b2  j           func_1D02C8
    ctx->pc = 0x170930u;
    ctx->pc = 0x170934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170930u;
    // 0x170934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x170938u;
}
