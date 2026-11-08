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

// Function: entry_001053a8
// Address: 0x1053a8 - 0x1053b0
void entry_001053a8_0x1053a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001053a8_0x1053a8");
#endif

    ctx->pc = 0x1053a8u;

    // 0x1053a8: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x1053a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1053ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1053acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1053b0u;
}
