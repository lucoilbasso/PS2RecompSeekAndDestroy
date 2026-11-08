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

// Function: entry_0014be68
// Address: 0x14be68 - 0x14be6c
void entry_0014be68_0x14be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be68_0x14be68");
#endif

    ctx->pc = 0x14be68u;

    // 0x14be68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x14be6cu;
}
