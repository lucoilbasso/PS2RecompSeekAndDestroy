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

// Function: entry_001392cc
// Address: 0x1392cc - 0x1392d4
void entry_001392cc_0x1392cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001392cc_0x1392cc");
#endif

    ctx->pc = 0x1392ccu;

    // 0x1392cc: 0x24c400f0  addiu       $a0, $a2, 0xF0
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x1392d0: 0x8ca3b830  lw          $v1, -0x47D0($a1)
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948912)));
    ctx->pc = 0x1392d4u;
}
