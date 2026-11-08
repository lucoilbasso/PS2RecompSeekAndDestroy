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

// Function: entry_0011c5a8
// Address: 0x11c5a8 - 0x11c5b8
void entry_0011c5a8_0x11c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c5a8_0x11c5a8");
#endif

    ctx->pc = 0x11c5a8u;

    // 0x11c5a8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c5ac: 0x264349c0  addiu       $v1, $s2, 0x49C0
    ctx->pc = 0x11c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 18880));
    // 0x11c5b0: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11c5b4: 0x26444600  addiu       $a0, $s2, 0x4600
    ctx->pc = 0x11c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
    ctx->pc = 0x11c5b8u;
}
