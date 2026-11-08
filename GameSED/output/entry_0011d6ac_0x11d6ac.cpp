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

// Function: entry_0011d6ac
// Address: 0x11d6ac - 0x11d6b4
void entry_0011d6ac_0x11d6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6ac_0x11d6ac");
#endif

    ctx->pc = 0x11d6acu;

    // 0x11d6ac: 0x3411c010  ori         $s1, $zero, 0xC010
    ctx->pc = 0x11d6acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x11d6b0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x11d6b4u;
}
