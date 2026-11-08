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

// Function: entry_00174128
// Address: 0x174128 - 0x17412c
void entry_00174128_0x174128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174128_0x174128");
#endif

    ctx->pc = 0x174128u;

    // 0x174128: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    ctx->pc = 0x17412cu;
}
