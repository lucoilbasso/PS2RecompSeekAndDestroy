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

// Function: entry_0014ce68
// Address: 0x14ce68 - 0x14ce6c
void entry_0014ce68_0x14ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ce68_0x14ce68");
#endif

    ctx->pc = 0x14ce68u;

    // 0x14ce68: 0x2606020c  addiu       $a2, $s0, 0x20C
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    ctx->pc = 0x14ce6cu;
}
