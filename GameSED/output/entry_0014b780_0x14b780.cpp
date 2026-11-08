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

// Function: entry_0014b780
// Address: 0x14b780 - 0x14b784
void entry_0014b780_0x14b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b780_0x14b780");
#endif

    ctx->pc = 0x14b780u;

    // 0x14b780: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    ctx->pc = 0x14b784u;
}
