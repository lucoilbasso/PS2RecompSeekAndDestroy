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

// Function: entry_00119360
// Address: 0x119360 - 0x119368
void entry_00119360_0x119360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119360_0x119360");
#endif

    ctx->pc = 0x119360u;

    // 0x119360: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x119360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x119364: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x119364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    ctx->pc = 0x119368u;
}
