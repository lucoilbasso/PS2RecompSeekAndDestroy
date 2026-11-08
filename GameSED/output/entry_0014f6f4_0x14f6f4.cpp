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

// Function: entry_0014f6f4
// Address: 0x14f6f4 - 0x14f6f8
void entry_0014f6f4_0x14f6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f6f4_0x14f6f4");
#endif

    ctx->pc = 0x14f6f4u;

    // 0x14f6f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x14f6f8u;
}
