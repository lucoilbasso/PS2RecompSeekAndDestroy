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

// Function: entry_001ca8b8
// Address: 0x1ca8b8 - 0x1ca8c0
void entry_001ca8b8_0x1ca8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca8b8_0x1ca8b8");
#endif

    ctx->pc = 0x1ca8b8u;

    // 0x1ca8b8: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1ca8b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca8bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1ca8c0u;
}
