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

// Function: entry_001c09e4
// Address: 0x1c09e4 - 0x1c09e8
void entry_001c09e4_0x1c09e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c09e4_0x1c09e4");
#endif

    ctx->pc = 0x1c09e4u;

    // 0x1c09e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c09e8u;
}
