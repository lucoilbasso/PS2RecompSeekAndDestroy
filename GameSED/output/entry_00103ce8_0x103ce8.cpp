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

// Function: entry_00103ce8
// Address: 0x103ce8 - 0x103cf4
void entry_00103ce8_0x103ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ce8_0x103ce8");
#endif

    ctx->pc = 0x103ce8u;

    // 0x103ce8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x103cec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103cf0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->pc = 0x103cf4u;
}
