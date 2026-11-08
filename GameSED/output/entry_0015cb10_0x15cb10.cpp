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

// Function: entry_0015cb10
// Address: 0x15cb10 - 0x15cb14
void entry_0015cb10_0x15cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb10_0x15cb10");
#endif

    ctx->pc = 0x15cb10u;

    // 0x15cb10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x15cb14u;
}
