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

// Function: entry_0011d4f4
// Address: 0x11d4f4 - 0x11d4fc
void entry_0011d4f4_0x11d4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d4f4_0x11d4f4");
#endif

    ctx->pc = 0x11d4f4u;

    // 0x11d4f4: 0x3410c034  ori         $s0, $zero, 0xC034
    ctx->pc = 0x11d4f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x11d4f8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x11d4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->pc = 0x11d4fcu;
}
