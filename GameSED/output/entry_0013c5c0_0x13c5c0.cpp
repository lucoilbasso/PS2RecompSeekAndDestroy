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

// Function: entry_0013c5c0
// Address: 0x13c5c0 - 0x13c5c8
void entry_0013c5c0_0x13c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c5c0_0x13c5c0");
#endif

    ctx->pc = 0x13c5c0u;

    // 0x13c5c0: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c5c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->pc = 0x13c5c8u;
}
