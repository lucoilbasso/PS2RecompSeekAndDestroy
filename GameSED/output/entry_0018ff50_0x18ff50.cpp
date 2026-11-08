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

// Function: entry_0018ff50
// Address: 0x18ff50 - 0x18ff54
void entry_0018ff50_0x18ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff50_0x18ff50");
#endif

    ctx->pc = 0x18ff50u;

    // 0x18ff50: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    ctx->pc = 0x18ff54u;
}
