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

// Function: entry_001424c4
// Address: 0x1424c4 - 0x1424c8
void entry_001424c4_0x1424c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001424c4_0x1424c4");
#endif

    ctx->pc = 0x1424c4u;

    // 0x1424c4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x1424c8u;
}
