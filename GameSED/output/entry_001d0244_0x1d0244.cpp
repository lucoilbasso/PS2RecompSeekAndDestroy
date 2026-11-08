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

// Function: entry_001d0244
// Address: 0x1d0244 - 0x1d0250
void entry_001d0244_0x1d0244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0244_0x1d0244");
#endif

    ctx->pc = 0x1d0244u;

    // 0x1d0244: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d0244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d0248: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d0248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d024c: 0xaca3e610  sw          $v1, -0x19F0($a1)
    ctx->pc = 0x1d024cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x24E610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24E610u, _value); } while (0);
    ctx->pc = 0x1d0250u;
}
