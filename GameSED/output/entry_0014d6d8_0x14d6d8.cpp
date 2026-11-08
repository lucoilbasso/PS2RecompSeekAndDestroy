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

// Function: entry_0014d6d8
// Address: 0x14d6d8 - 0x14d6e0
void entry_0014d6d8_0x14d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6d8_0x14d6d8");
#endif

    ctx->pc = 0x14d6d8u;

    // 0x14d6d8: 0x3484eb85  ori         $a0, $a0, 0xEB85
    ctx->pc = 0x14d6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)60293);
    // 0x14d6dc: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x14d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->pc = 0x14d6e0u;
}
