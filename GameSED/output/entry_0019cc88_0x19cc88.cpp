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

// Function: entry_0019cc88
// Address: 0x19cc88 - 0x19cc8c
void entry_0019cc88_0x19cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc88_0x19cc88");
#endif

    ctx->pc = 0x19cc88u;

    // 0x19cc88: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x19cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->pc = 0x19cc8cu;
}
