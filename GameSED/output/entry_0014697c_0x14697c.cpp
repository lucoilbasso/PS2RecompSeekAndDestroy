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

// Function: entry_0014697c
// Address: 0x14697c - 0x146980
void entry_0014697c_0x14697c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014697c_0x14697c");
#endif

    ctx->pc = 0x14697cu;

    // 0x14697c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x14697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x146980u;
}
