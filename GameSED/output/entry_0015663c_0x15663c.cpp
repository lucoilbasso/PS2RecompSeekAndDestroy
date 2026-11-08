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

// Function: entry_0015663c
// Address: 0x15663c - 0x156640
void entry_0015663c_0x15663c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015663c_0x15663c");
#endif

    ctx->pc = 0x15663cu;

    // 0x15663c: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x15663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->pc = 0x156640u;
}
