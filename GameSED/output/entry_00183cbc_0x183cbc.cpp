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

// Function: entry_00183cbc
// Address: 0x183cbc - 0x183cc0
void entry_00183cbc_0x183cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183cbc_0x183cbc");
#endif

    ctx->pc = 0x183cbcu;

    // 0x183cbc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x183cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x183cc0u;
}
