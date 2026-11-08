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

// Function: entry_00195888
// Address: 0x195888 - 0x195898
void entry_00195888_0x195888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195888_0x195888");
#endif

    ctx->pc = 0x195888u;

    // 0x195888: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19588c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x195890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195894: 0xad030130  sw          $v1, 0x130($t0)
    ctx->pc = 0x195894u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x195898u;
}
