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

// Function: entry_0015cb80
// Address: 0x15cb80 - 0x15cb84
void entry_0015cb80_0x15cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb80_0x15cb80");
#endif

    ctx->pc = 0x15cb80u;

    // 0x15cb80: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    ctx->pc = 0x15cb84u;
}
