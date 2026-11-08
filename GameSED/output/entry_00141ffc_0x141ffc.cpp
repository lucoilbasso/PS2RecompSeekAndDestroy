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

// Function: entry_00141ffc
// Address: 0x141ffc - 0x142000
void entry_00141ffc_0x141ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ffc_0x141ffc");
#endif

    ctx->pc = 0x141ffcu;

    // 0x141ffc: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x141ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    ctx->pc = 0x142000u;
}
