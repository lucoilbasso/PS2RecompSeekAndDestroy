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

// Function: entry_001a40ac
// Address: 0x1a40ac - 0x1a40b0
void entry_001a40ac_0x1a40ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a40ac_0x1a40ac");
#endif

    ctx->pc = 0x1a40acu;

    // 0x1a40ac: 0x8f849190  lw          $a0, -0x6E70($gp)
    ctx->pc = 0x1a40acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    ctx->pc = 0x1a40b0u;
}
