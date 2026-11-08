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

// Function: entry_0014353c
// Address: 0x14353c - 0x143540
void entry_0014353c_0x14353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014353c_0x14353c");
#endif

    ctx->pc = 0x14353cu;

    // 0x14353c: 0x24a300c0  addiu       $v1, $a1, 0xC0
    ctx->pc = 0x14353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->pc = 0x143540u;
}
