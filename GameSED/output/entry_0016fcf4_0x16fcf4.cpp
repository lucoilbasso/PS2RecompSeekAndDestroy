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

// Function: entry_0016fcf4
// Address: 0x16fcf4 - 0x16fcf8
void entry_0016fcf4_0x16fcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fcf4_0x16fcf4");
#endif

    ctx->pc = 0x16fcf4u;

    // 0x16fcf4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->pc = 0x16fcf8u;
}
