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

// Function: entry_001b9dec
// Address: 0x1b9dec - 0x1b9df4
void entry_001b9dec_0x1b9dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9dec_0x1b9dec");
#endif

    ctx->pc = 0x1b9decu;

    // 0x1b9dec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b9df0: 0xac40c0b0  sw          $zero, -0x3F50($v0)
    ctx->pc = 0x1b9df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
    ctx->pc = 0x1b9df4u;
}
