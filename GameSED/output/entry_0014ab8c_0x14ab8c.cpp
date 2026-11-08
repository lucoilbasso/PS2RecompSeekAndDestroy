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

// Function: entry_0014ab8c
// Address: 0x14ab8c - 0x14ab90
void entry_0014ab8c_0x14ab8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab8c_0x14ab8c");
#endif

    ctx->pc = 0x14ab8cu;

    // 0x14ab8c: 0xae1101b4  sw          $s1, 0x1B4($s0)
    ctx->pc = 0x14ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 17));
    ctx->pc = 0x14ab90u;
}
