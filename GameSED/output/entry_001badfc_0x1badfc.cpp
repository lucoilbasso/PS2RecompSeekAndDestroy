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

// Function: entry_001badfc
// Address: 0x1badfc - 0x1bae00
void entry_001badfc_0x1badfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001badfc_0x1badfc");
#endif

    ctx->pc = 0x1badfcu;

    // 0x1badfc: 0x26b0d8d0  addiu       $s0, $s5, -0x2730
    ctx->pc = 0x1badfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957264));
    ctx->pc = 0x1bae00u;
}
