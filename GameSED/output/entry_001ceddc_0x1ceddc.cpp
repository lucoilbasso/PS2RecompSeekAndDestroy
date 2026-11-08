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

// Function: entry_001ceddc
// Address: 0x1ceddc - 0x1cede4
void entry_001ceddc_0x1ceddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceddc_0x1ceddc");
#endif

    ctx->pc = 0x1ceddcu;

    // 0x1ceddc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ceddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1cede0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1cede0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x1cede4u;
}
