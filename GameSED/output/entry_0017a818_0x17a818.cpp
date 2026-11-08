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

// Function: entry_0017a818
// Address: 0x17a818 - 0x17a81c
void entry_0017a818_0x17a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a818_0x17a818");
#endif

    ctx->pc = 0x17a818u;

    // 0x17a818: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x17a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    ctx->pc = 0x17a81cu;
}
