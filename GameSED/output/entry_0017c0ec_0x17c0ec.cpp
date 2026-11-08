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

// Function: entry_0017c0ec
// Address: 0x17c0ec - 0x17c0f0
void entry_0017c0ec_0x17c0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0ec_0x17c0ec");
#endif

    ctx->pc = 0x17c0ecu;

    // 0x17c0ec: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x17c0f0u;
}
