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

// Function: entry_001c80e8
// Address: 0x1c80e8 - 0x1c80f0
void entry_001c80e8_0x1c80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c80e8_0x1c80e8");
#endif

    ctx->pc = 0x1c80e8u;

    // 0x1c80e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c80e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80ec: 0xdc50bbd0  ld          $s0, -0x4430($v0)
    ctx->pc = 0x1c80ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294949840)));
    ctx->pc = 0x1c80f0u;
}
