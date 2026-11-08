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

// Function: entry_00116160
// Address: 0x116160 - 0x116164
void entry_00116160_0x116160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116160_0x116160");
#endif

    ctx->pc = 0x116160u;

    // 0x116160: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x116164u;
}
