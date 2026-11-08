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

// Function: entry_00132018
// Address: 0x132018 - 0x13201c
void entry_00132018_0x132018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132018_0x132018");
#endif

    ctx->pc = 0x132018u;

    // 0x132018: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x132018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    ctx->pc = 0x13201cu;
}
