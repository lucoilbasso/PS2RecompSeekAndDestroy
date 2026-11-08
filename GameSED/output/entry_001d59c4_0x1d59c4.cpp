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

// Function: entry_001d59c4
// Address: 0x1d59c4 - 0x1d59c8
void entry_001d59c4_0x1d59c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d59c4_0x1d59c4");
#endif

    ctx->pc = 0x1d59c4u;

    // 0x1d59c4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x1d59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x1d59c8u;
}
