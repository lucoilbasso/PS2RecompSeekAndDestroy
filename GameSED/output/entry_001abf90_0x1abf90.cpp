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

// Function: entry_001abf90
// Address: 0x1abf90 - 0x1abf94
void entry_001abf90_0x1abf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abf90_0x1abf90");
#endif

    ctx->pc = 0x1abf90u;

    // 0x1abf90: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    ctx->pc = 0x1abf94u;
}
