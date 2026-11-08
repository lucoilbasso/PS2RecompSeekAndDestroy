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

// Function: entry_001787b8
// Address: 0x1787b8 - 0x1787bc
void entry_001787b8_0x1787b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001787b8_0x1787b8");
#endif

    ctx->pc = 0x1787b8u;

    // 0x1787b8: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x1787b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
    ctx->pc = 0x1787bcu;
}
