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

// Function: entry_001294f8
// Address: 0x1294f8 - 0x1294fc
void entry_001294f8_0x1294f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001294f8_0x1294f8");
#endif

    ctx->pc = 0x1294f8u;

    // 0x1294f8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1294f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    ctx->pc = 0x1294fcu;
}
