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

// Function: entry_0017c0f4
// Address: 0x17c0f4 - 0x17c0f8
void entry_0017c0f4_0x17c0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0f4_0x17c0f4");
#endif

    ctx->pc = 0x17c0f4u;

    // 0x17c0f4: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    ctx->pc = 0x17c0f8u;
}
