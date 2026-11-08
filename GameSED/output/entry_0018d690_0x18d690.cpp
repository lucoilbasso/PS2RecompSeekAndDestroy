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

// Function: entry_0018d690
// Address: 0x18d690 - 0x18d694
void entry_0018d690_0x18d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d690_0x18d690");
#endif

    ctx->pc = 0x18d690u;

    // 0x18d690: 0x96220244  lhu         $v0, 0x244($s1)
    ctx->pc = 0x18d690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    ctx->pc = 0x18d694u;
}
