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

// Function: entry_00143c1c
// Address: 0x143c1c - 0x143c20
void entry_00143c1c_0x143c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c1c_0x143c1c");
#endif

    ctx->pc = 0x143c1cu;

    // 0x143c1c: 0x26510220  addiu       $s1, $s2, 0x220
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    ctx->pc = 0x143c20u;
}
