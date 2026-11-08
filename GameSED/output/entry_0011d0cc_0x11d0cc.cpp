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

// Function: entry_0011d0cc
// Address: 0x11d0cc - 0x11d0d8
void entry_0011d0cc_0x11d0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0cc_0x11d0cc");
#endif

    ctx->pc = 0x11d0ccu;

    // 0x11d0cc: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11d0d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d0d4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x11d0d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    ctx->pc = 0x11d0d8u;
}
