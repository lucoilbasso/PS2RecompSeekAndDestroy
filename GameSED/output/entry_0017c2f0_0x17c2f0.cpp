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

// Function: entry_0017c2f0
// Address: 0x17c2f0 - 0x17c2fc
void entry_0017c2f0_0x17c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2f0_0x17c2f0");
#endif

    ctx->pc = 0x17c2f0u;

    // 0x17c2f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c2f4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17c2f8: 0xac26c05c  sw          $a2, -0x3FA4($at)
    ctx->pc = 0x17c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951004), GPR_U32(ctx, 6));
    ctx->pc = 0x17c2fcu;
}
