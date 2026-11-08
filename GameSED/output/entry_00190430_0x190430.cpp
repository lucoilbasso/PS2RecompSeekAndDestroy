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

// Function: entry_00190430
// Address: 0x190430 - 0x190440
void entry_00190430_0x190430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190430_0x190430");
#endif

    ctx->pc = 0x190430u;

    // 0x190430: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x190434: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x190434u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19043c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x19043cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x190440u;
}
