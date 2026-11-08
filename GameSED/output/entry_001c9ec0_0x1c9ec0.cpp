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

// Function: entry_001c9ec0
// Address: 0x1c9ec0 - 0x1c9ed0
void entry_001c9ec0_0x1c9ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9ec0_0x1c9ec0");
#endif

    ctx->pc = 0x1c9ec0u;

    // 0x1c9ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ec4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1c9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1c9ec8: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9ecc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9eccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x1c9ed0u;
}
