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

// Function: entry_00169180
// Address: 0x169180 - 0x169188
void entry_00169180_0x169180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169180_0x169180");
#endif

    ctx->pc = 0x169180u;

    // 0x169180: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x169184: 0x0  nop
    ctx->pc = 0x169184u;
    // NOP
    ctx->pc = 0x169188u;
}
