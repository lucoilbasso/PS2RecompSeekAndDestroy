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

// Function: entry_0011a5ec
// Address: 0x11a5ec - 0x11a5f0
void entry_0011a5ec_0x11a5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5ec_0x11a5ec");
#endif

    ctx->pc = 0x11a5ecu;

    // 0x11a5ec: 0xc21804  sllv        $v1, $v0, $a2
    ctx->pc = 0x11a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x11a5f0u;
}
