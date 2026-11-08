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

// Function: entry_0019ff68
// Address: 0x19ff68 - 0x19ff6c
void entry_0019ff68_0x19ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff68_0x19ff68");
#endif

    ctx->pc = 0x19ff68u;

    // 0x19ff68: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x19ff6cu;
}
