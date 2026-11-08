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

// Function: entry_001a7dfc
// Address: 0x1a7dfc - 0x1a7e00
void entry_001a7dfc_0x1a7dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7dfc_0x1a7dfc");
#endif

    ctx->pc = 0x1a7dfcu;

    // 0x1a7dfc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1a7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1a7e00u;
}
