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

// Function: entry_0018b9d4
// Address: 0x18b9d4 - 0x18b9d8
void entry_0018b9d4_0x18b9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b9d4_0x18b9d4");
#endif

    ctx->pc = 0x18b9d4u;

    // 0x18b9d4: 0x269201c0  addiu       $s2, $s4, 0x1C0
    ctx->pc = 0x18b9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    ctx->pc = 0x18b9d8u;
}
