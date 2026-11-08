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

// Function: entry_001b75fc
// Address: 0x1b75fc - 0x1b7600
void entry_001b75fc_0x1b75fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b75fc_0x1b75fc");
#endif

    ctx->pc = 0x1b75fcu;

    // 0x1b75fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b75fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b7600u;
}
