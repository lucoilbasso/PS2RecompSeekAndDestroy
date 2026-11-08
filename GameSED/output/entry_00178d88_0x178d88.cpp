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

// Function: entry_00178d88
// Address: 0x178d88 - 0x178d8c
void entry_00178d88_0x178d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d88_0x178d88");
#endif

    ctx->pc = 0x178d88u;

    // 0x178d88: 0x26244010  addiu       $a0, $s1, 0x4010
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16400));
    ctx->pc = 0x178d8cu;
}
