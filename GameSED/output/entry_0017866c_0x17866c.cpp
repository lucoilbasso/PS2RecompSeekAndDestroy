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

// Function: entry_0017866c
// Address: 0x17866c - 0x178670
void entry_0017866c_0x17866c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017866c_0x17866c");
#endif

    ctx->pc = 0x17866cu;

    // 0x17866c: 0x24a41024  addiu       $a0, $a1, 0x1024
    ctx->pc = 0x17866cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4132));
    ctx->pc = 0x178670u;
}
