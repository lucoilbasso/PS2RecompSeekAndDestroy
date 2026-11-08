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

// Function: entry_001cd050
// Address: 0x1cd050 - 0x1cd058
void entry_001cd050_0x1cd050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd050_0x1cd050");
#endif

    ctx->pc = 0x1cd050u;

    // 0x1cd050: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cd054: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1cd054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    ctx->pc = 0x1cd058u;
}
