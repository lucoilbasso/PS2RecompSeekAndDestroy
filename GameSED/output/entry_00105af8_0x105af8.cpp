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

// Function: entry_00105af8
// Address: 0x105af8 - 0x105b00
void entry_00105af8_0x105af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105af8_0x105af8");
#endif

    ctx->pc = 0x105af8u;

    // 0x105af8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x105af8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x105afc: 0x2610f1c0  addiu       $s0, $s0, -0xE40
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963648));
    ctx->pc = 0x105b00u;
}
