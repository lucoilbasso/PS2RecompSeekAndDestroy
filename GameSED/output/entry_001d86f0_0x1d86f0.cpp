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

// Function: entry_001d86f0
// Address: 0x1d86f0 - 0x1d86f8
void entry_001d86f0_0x1d86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d86f0_0x1d86f0");
#endif

    ctx->pc = 0x1d86f0u;

    // 0x1d86f0: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d86f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x1d86f8u;
}
