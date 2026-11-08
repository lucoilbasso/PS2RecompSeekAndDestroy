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

// Function: entry_0017c1c8
// Address: 0x17c1c8 - 0x17c1cc
void entry_0017c1c8_0x17c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1c8_0x17c1c8");
#endif

    ctx->pc = 0x17c1c8u;

    // 0x17c1c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17c1ccu;
}
