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

// Function: entry_0011d874
// Address: 0x11d874 - 0x11d87c
void entry_0011d874_0x11d874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d874_0x11d874");
#endif

    ctx->pc = 0x11d874u;

    // 0x11d874: 0x3411c034  ori         $s1, $zero, 0xC034
    ctx->pc = 0x11d874u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x11d878: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x11d878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->pc = 0x11d87cu;
}
