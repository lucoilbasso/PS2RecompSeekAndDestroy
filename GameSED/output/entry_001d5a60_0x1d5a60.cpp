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

// Function: entry_001d5a60
// Address: 0x1d5a60 - 0x1d5a64
void entry_001d5a60_0x1d5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a60_0x1d5a60");
#endif

    ctx->pc = 0x1d5a60u;

    // 0x1d5a60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1d5a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1d5a64u;
}
