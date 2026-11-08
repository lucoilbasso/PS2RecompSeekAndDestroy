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

// Function: entry_001393ac
// Address: 0x1393ac - 0x1393b8
void entry_001393ac_0x1393ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001393ac_0x1393ac");
#endif

    ctx->pc = 0x1393acu;

    // 0x1393ac: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1393b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1393b4: 0x8c42a3e0  lw          $v0, -0x5C20($v0)
    ctx->pc = 0x1393b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943712)));
    ctx->pc = 0x1393b8u;
}
