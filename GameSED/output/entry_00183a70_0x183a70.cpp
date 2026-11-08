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

// Function: entry_00183a70
// Address: 0x183a70 - 0x183a9c
void entry_00183a70_0x183a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183a70_0x183a70");
#endif

    ctx->pc = 0x183a70u;

    // 0x183a70: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x183a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x183a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a78: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x183a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x183a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a80: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x183a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x183a84: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x183a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x183a88: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x183a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x183a8c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x183a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x183a90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x183a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x183a94: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x183a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x183a98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x183a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x183a9cu;
}
