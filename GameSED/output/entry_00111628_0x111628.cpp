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

// Function: entry_00111628
// Address: 0x111628 - 0x111634
void entry_00111628_0x111628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111628_0x111628");
#endif

    ctx->pc = 0x111628u;

    // 0x111628: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11162c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111630: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x111630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    ctx->pc = 0x111634u;
}
