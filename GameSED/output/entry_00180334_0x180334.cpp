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

// Function: entry_00180334
// Address: 0x180334 - 0x18033c
void entry_00180334_0x180334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180334_0x180334");
#endif

    ctx->pc = 0x180334u;

    // 0x180334: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180338: 0x94a50024  lhu         $a1, 0x24($a1)
    ctx->pc = 0x180338u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->pc = 0x18033cu;
}
