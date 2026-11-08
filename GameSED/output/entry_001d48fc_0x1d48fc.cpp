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

// Function: entry_001d48fc
// Address: 0x1d48fc - 0x1d4900
void entry_001d48fc_0x1d48fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48fc_0x1d48fc");
#endif

    ctx->pc = 0x1d48fcu;

    // 0x1d48fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x1d4900u;
}
