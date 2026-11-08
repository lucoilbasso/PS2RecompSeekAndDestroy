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

// Function: $L24
// Address: 0x1d0978 - 0x1d097c
void ps2__L24_0x1d0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L24_0x1d0978");
#endif

    ctx->pc = 0x1d0978u;

    // 0x1d0978: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1d0978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1d097cu;
}
