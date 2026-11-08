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

// Function: entry_00132438
// Address: 0x132438 - 0x132440
void entry_00132438_0x132438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132438_0x132438");
#endif

    ctx->pc = 0x132438u;

    // 0x132438: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x132438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13243c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13243cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x132440u;
}
