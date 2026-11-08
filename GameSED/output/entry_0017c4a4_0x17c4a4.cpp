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

// Function: entry_0017c4a4
// Address: 0x17c4a4 - 0x17c4a8
void entry_0017c4a4_0x17c4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c4a4_0x17c4a4");
#endif

    ctx->pc = 0x17c4a4u;

    // 0x17c4a4: 0x2452d1c0  addiu       $s2, $v0, -0x2E40
    ctx->pc = 0x17c4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    ctx->pc = 0x17c4a8u;
}
