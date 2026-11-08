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

// Function: entry_0017a114
// Address: 0x17a114 - 0x17a118
void entry_0017a114_0x17a114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a114_0x17a114");
#endif

    ctx->pc = 0x17a114u;

    // 0x17a114: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    ctx->pc = 0x17a118u;
}
