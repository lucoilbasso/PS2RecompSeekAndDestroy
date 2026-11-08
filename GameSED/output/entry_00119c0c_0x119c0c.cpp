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

// Function: entry_00119c0c
// Address: 0x119c0c - 0x119c10
void entry_00119c0c_0x119c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119c0c_0x119c0c");
#endif

    ctx->pc = 0x119c0cu;

    // 0x119c0c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x119c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x119c10u;
}
