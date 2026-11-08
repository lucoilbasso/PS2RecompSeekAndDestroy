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

// Function: entry_00141808
// Address: 0x141808 - 0x14180c
void entry_00141808_0x141808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141808_0x141808");
#endif

    ctx->pc = 0x141808u;

    // 0x141808: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    ctx->pc = 0x14180cu;
}
