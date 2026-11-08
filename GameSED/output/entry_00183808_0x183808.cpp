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

// Function: entry_00183808
// Address: 0x183808 - 0x18381c
void entry_00183808_0x183808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183808_0x183808");
#endif

    ctx->pc = 0x183808u;

    // 0x183808: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18380c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x18380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x183810: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x183810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x183814: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x183814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x183818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18381cu;
}
