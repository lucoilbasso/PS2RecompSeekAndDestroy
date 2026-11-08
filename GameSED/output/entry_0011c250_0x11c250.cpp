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

// Function: entry_0011c250
// Address: 0x11c250 - 0x11c258
void entry_0011c250_0x11c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c250_0x11c250");
#endif

    ctx->pc = 0x11c250u;

    // 0x11c250: 0x24e511c0  addiu       $a1, $a3, 0x11C0
    ctx->pc = 0x11c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4544));
    // 0x11c254: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x11c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x11c258u;
}
