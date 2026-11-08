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

// Function: entry_00175850
// Address: 0x175850 - 0x175858
void entry_00175850_0x175850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175850_0x175850");
#endif

    ctx->pc = 0x175850u;

    // 0x175850: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175854: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    ctx->pc = 0x175858u;
}
