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

// Function: entry_00155d04
// Address: 0x155d04 - 0x155d08
void entry_00155d04_0x155d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155d04_0x155d04");
#endif

    ctx->pc = 0x155d04u;

    // 0x155d04: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x155d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x155d08u;
}
