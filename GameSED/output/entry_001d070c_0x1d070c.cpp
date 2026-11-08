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

// Function: entry_001d070c
// Address: 0x1d070c - 0x1d0710
void entry_001d070c_0x1d070c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d070c_0x1d070c");
#endif

    ctx->pc = 0x1d070cu;

    // 0x1d070c: 0x240c0208  addiu       $t4, $zero, 0x208
    ctx->pc = 0x1d070cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->pc = 0x1d0710u;
}
