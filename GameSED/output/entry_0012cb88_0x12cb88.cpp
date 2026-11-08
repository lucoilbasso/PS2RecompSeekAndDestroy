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

// Function: entry_0012cb88
// Address: 0x12cb88 - 0x12cb94
void entry_0012cb88_0x12cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb88_0x12cb88");
#endif

    ctx->pc = 0x12cb88u;

    // 0x12cb88: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x12cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x12cb8c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x12cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x12cb90: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x12cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->pc = 0x12cb94u;
}
