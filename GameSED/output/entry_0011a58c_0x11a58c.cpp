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

// Function: entry_0011a58c
// Address: 0x11a58c - 0x11a594
void entry_0011a58c_0x11a58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a58c_0x11a58c");
#endif

    ctx->pc = 0x11a58cu;

    // 0x11a58c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a590: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    ctx->pc = 0x11a594u;
}
