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

// Function: entry_0019ff5c
// Address: 0x19ff5c - 0x19ff60
void entry_0019ff5c_0x19ff5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff5c_0x19ff5c");
#endif

    ctx->pc = 0x19ff5cu;

    // 0x19ff5c: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x19ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    ctx->pc = 0x19ff60u;
}
