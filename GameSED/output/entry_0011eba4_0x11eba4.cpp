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

// Function: entry_0011eba4
// Address: 0x11eba4 - 0x11eba8
void entry_0011eba4_0x11eba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eba4_0x11eba4");
#endif

    ctx->pc = 0x11eba4u;

    // 0x11eba4: 0x24c40090  addiu       $a0, $a2, 0x90
    ctx->pc = 0x11eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    ctx->pc = 0x11eba8u;
}
