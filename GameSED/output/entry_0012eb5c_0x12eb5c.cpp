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

// Function: entry_0012eb5c
// Address: 0x12eb5c - 0x12eb60
void entry_0012eb5c_0x12eb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb5c_0x12eb5c");
#endif

    ctx->pc = 0x12eb5cu;

    // 0x12eb5c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x12eb5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x12eb60u;
}
