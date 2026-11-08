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

// Function: entry_00192abc
// Address: 0x192abc - 0x192ac0
void entry_00192abc_0x192abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192abc_0x192abc");
#endif

    ctx->pc = 0x192abcu;

    // 0x192abc: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x192abcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x192ac0u;
}
