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

// Function: entry_00198df4
// Address: 0x198df4 - 0x198df8
void entry_00198df4_0x198df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198df4_0x198df4");
#endif

    ctx->pc = 0x198df4u;

    // 0x198df4: 0x269601b4  addiu       $s6, $s4, 0x1B4
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 436));
    ctx->pc = 0x198df8u;
}
