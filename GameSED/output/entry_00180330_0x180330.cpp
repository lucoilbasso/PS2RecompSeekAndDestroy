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

// Function: entry_00180330
// Address: 0x180330 - 0x180334
void entry_00180330_0x180330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180330_0x180330");
#endif

    ctx->pc = 0x180330u;

    // 0x180330: 0x94a40026  lhu         $a0, 0x26($a1)
    ctx->pc = 0x180330u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    ctx->pc = 0x180334u;
}
