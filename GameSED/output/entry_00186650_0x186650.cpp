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

// Function: entry_00186650
// Address: 0x186650 - 0x186660
void entry_00186650_0x186650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186650_0x186650");
#endif

    ctx->pc = 0x186650u;

    // 0x186650: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x186654: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x186654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186658: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18665c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18665cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x186660u;
}
