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

// Function: entry_0011a4e4
// Address: 0x11a4e4 - 0x11a4ec
void entry_0011a4e4_0x11a4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a4e4_0x11a4e4");
#endif

    ctx->pc = 0x11a4e4u;

    // 0x11a4e4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x11a4e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a4e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->pc = 0x11a4ecu;
}
