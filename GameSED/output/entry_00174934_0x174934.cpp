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

// Function: entry_00174934
// Address: 0x174934 - 0x174938
void entry_00174934_0x174934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174934_0x174934");
#endif

    ctx->pc = 0x174934u;

    // 0x174934: 0x516fc  dsll32      $v0, $a1, 27
    ctx->pc = 0x174934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 27));
    ctx->pc = 0x174938u;
}
