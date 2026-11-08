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

// Function: entry_0010c64c
// Address: 0x10c64c - 0x10c650
void entry_0010c64c_0x10c64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c64c_0x10c64c");
#endif

    ctx->pc = 0x10c64cu;

    // 0x10c64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10c650u;
}
