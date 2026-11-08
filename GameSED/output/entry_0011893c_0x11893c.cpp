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

// Function: entry_0011893c
// Address: 0x11893c - 0x118940
void entry_0011893c_0x11893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011893c_0x11893c");
#endif

    ctx->pc = 0x11893cu;

    // 0x11893c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x11893cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x118940u;
}
