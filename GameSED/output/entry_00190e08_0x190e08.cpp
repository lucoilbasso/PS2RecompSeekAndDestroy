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

// Function: entry_00190e08
// Address: 0x190e08 - 0x190e0c
void entry_00190e08_0x190e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e08_0x190e08");
#endif

    ctx->pc = 0x190e08u;

    // 0x190e08: 0x26510150  addiu       $s1, $s2, 0x150
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->pc = 0x190e0cu;
}
