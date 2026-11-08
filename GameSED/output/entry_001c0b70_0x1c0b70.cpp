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

// Function: entry_001c0b70
// Address: 0x1c0b70 - 0x1c0b74
void entry_001c0b70_0x1c0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0b70_0x1c0b70");
#endif

    ctx->pc = 0x1c0b70u;

    // 0x1c0b70: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
    ctx->pc = 0x1c0b74u;
}
