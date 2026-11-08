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

// Function: entry_0011ecec
// Address: 0x11ecec - 0x11ecf0
void entry_0011ecec_0x11ecec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ecec_0x11ecec");
#endif

    ctx->pc = 0x11ececu;

    // 0x11ecec: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x11ececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->pc = 0x11ecf0u;
}
