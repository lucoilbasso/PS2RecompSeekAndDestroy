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

// Function: entry_00116d28
// Address: 0x116d28 - 0x116d38
void entry_00116d28_0x116d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d28_0x116d28");
#endif

    ctx->pc = 0x116d28u;

    // 0x116d28: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x116d2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x116d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x116d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116d34: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x116d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    ctx->pc = 0x116d38u;
}
