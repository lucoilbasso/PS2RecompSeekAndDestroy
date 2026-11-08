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

// Function: entry_00190670
// Address: 0x190670 - 0x190684
void entry_00190670_0x190670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190670_0x190670");
#endif

    ctx->pc = 0x190670u;

    // 0x190670: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x190670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x190674: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x190678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x190678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19067c: 0xacc30130  sw          $v1, 0x130($a2)
    ctx->pc = 0x19067cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 304), GPR_U32(ctx, 3));
    // 0x190680: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x190680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x190684u;
}
