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

// Function: entry_00185b88
// Address: 0x185b88 - 0x185b90
void entry_00185b88_0x185b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185b88_0x185b88");
#endif

    ctx->pc = 0x185b88u;

    // 0x185b88: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x185b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x185b8c: 0x260500d8  addiu       $a1, $s0, 0xD8
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    ctx->pc = 0x185b90u;
}
