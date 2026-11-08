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

// Function: entry_001cf650
// Address: 0x1cf650 - 0x1cf654
void entry_001cf650_0x1cf650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf650_0x1cf650");
#endif

    ctx->pc = 0x1cf650u;

    // 0x1cf650: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    ctx->pc = 0x1cf654u;
}
