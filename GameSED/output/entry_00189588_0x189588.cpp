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

// Function: entry_00189588
// Address: 0x189588 - 0x189598
void entry_00189588_0x189588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189588_0x189588");
#endif

    ctx->pc = 0x189588u;

    // 0x189588: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x189588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x18958c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x18958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x189590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189594: 0xacc30130  sw          $v1, 0x130($a2)
    ctx->pc = 0x189594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x189598u;
}
