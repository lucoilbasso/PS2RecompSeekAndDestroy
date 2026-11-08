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

// Function: entry_0017cefc
// Address: 0x17cefc - 0x17cf00
void entry_0017cefc_0x17cefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cefc_0x17cefc");
#endif

    ctx->pc = 0x17cefcu;

    // 0x17cefc: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x17cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    ctx->pc = 0x17cf00u;
}
