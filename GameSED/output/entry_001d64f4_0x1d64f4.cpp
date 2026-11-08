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

// Function: entry_001d64f4
// Address: 0x1d64f4 - 0x1d64f8
void entry_001d64f4_0x1d64f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d64f4_0x1d64f4");
#endif

    ctx->pc = 0x1d64f4u;

    // 0x1d64f4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1d64f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x1d64f8u;
}
