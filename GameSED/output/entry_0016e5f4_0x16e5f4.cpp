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

// Function: entry_0016e5f4
// Address: 0x16e5f4 - 0x16e5f8
void entry_0016e5f4_0x16e5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5f4_0x16e5f4");
#endif

    ctx->pc = 0x16e5f4u;

    // 0x16e5f4: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x16e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    ctx->pc = 0x16e5f8u;
}
