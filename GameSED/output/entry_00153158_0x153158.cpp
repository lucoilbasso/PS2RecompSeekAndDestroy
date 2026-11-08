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

// Function: entry_00153158
// Address: 0x153158 - 0x15315c
void entry_00153158_0x153158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153158_0x153158");
#endif

    ctx->pc = 0x153158u;

    // 0x153158: 0xae320370  sw          $s2, 0x370($s1)
    ctx->pc = 0x153158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 18));
    ctx->pc = 0x15315cu;
}
