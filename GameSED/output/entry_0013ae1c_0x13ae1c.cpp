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

// Function: entry_0013ae1c
// Address: 0x13ae1c - 0x13ae20
void entry_0013ae1c_0x13ae1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ae1c_0x13ae1c");
#endif

    ctx->pc = 0x13ae1cu;

    // 0x13ae1c: 0x24040127  addiu       $a0, $zero, 0x127
    ctx->pc = 0x13ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->pc = 0x13ae20u;
}
