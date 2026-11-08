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

// Function: entry_0018b9cc
// Address: 0x18b9cc - 0x18b9d0
void entry_0018b9cc_0x18b9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b9cc_0x18b9cc");
#endif

    ctx->pc = 0x18b9ccu;

    // 0x18b9cc: 0x26910150  addiu       $s1, $s4, 0x150
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    ctx->pc = 0x18b9d0u;
}
