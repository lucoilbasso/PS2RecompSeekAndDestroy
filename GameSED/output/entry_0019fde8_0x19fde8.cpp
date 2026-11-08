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

// Function: entry_0019fde8
// Address: 0x19fde8 - 0x19fdf0
void entry_0019fde8_0x19fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fde8_0x19fde8");
#endif

    ctx->pc = 0x19fde8u;

    // 0x19fde8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19fdec: 0x2445d660  addiu       $a1, $v0, -0x29A0
    ctx->pc = 0x19fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
    ctx->pc = 0x19fdf0u;
}
