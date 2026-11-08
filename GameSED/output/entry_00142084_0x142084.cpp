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

// Function: entry_00142084
// Address: 0x142084 - 0x142088
void entry_00142084_0x142084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142084_0x142084");
#endif

    ctx->pc = 0x142084u;

    // 0x142084: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x142084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x142088u;
}
