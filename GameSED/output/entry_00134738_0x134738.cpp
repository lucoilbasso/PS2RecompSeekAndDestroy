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

// Function: entry_00134738
// Address: 0x134738 - 0x13473c
void entry_00134738_0x134738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134738_0x134738");
#endif

    ctx->pc = 0x134738u;

    // 0x134738: 0xae510230  sw          $s1, 0x230($s2)
    ctx->pc = 0x134738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 17));
    ctx->pc = 0x13473cu;
}
