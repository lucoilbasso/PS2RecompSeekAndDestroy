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

// Function: entry_0012b46c
// Address: 0x12b46c - 0x12b470
void entry_0012b46c_0x12b46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b46c_0x12b46c");
#endif

    ctx->pc = 0x12b46cu;

    // 0x12b46c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x12b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x12b470u;
}
