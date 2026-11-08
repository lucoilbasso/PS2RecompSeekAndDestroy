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

// Function: entry_001084e8
// Address: 0x1084e8 - 0x1084ec
void entry_001084e8_0x1084e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084e8_0x1084e8");
#endif

    ctx->pc = 0x1084e8u;

    // 0x1084e8: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1084e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    ctx->pc = 0x1084ecu;
}
