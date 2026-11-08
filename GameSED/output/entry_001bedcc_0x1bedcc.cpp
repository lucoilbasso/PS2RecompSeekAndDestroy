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

// Function: entry_001bedcc
// Address: 0x1bedcc - 0x1bedd0
void entry_001bedcc_0x1bedcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bedcc_0x1bedcc");
#endif

    ctx->pc = 0x1bedccu;

    // 0x1bedcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bedd0u;
}
