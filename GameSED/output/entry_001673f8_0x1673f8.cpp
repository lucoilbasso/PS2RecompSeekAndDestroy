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

// Function: entry_001673f8
// Address: 0x1673f8 - 0x1673fc
void entry_001673f8_0x1673f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001673f8_0x1673f8");
#endif

    ctx->pc = 0x1673f8u;

    // 0x1673f8: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x1673f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1673fcu;
}
