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

// Function: entry_00196170
// Address: 0x196170 - 0x196178
void entry_00196170_0x196170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196170_0x196170");
#endif

    ctx->pc = 0x196170u;

    // 0x196170: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196174: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x196174u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x196178u;
}
