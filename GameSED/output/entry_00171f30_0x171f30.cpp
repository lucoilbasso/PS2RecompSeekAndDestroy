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

// Function: entry_00171f30
// Address: 0x171f30 - 0x171f38
void entry_00171f30_0x171f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f30_0x171f30");
#endif

    ctx->pc = 0x171f30u;

    // 0x171f30: 0x34a59000  ori         $a1, $a1, 0x9000
    ctx->pc = 0x171f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x171f34: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    ctx->pc = 0x171f38u;
}
