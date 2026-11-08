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

// Function: entry_00111d88
// Address: 0x111d88 - 0x111d8c
void entry_00111d88_0x111d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d88_0x111d88");
#endif

    ctx->pc = 0x111d88u;

    // 0x111d88: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x111d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    ctx->pc = 0x111d8cu;
}
