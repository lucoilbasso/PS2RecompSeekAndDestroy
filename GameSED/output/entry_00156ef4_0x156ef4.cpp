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

// Function: entry_00156ef4
// Address: 0x156ef4 - 0x156ef8
void entry_00156ef4_0x156ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ef4_0x156ef4");
#endif

    ctx->pc = 0x156ef4u;

    // 0x156ef4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x156ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    ctx->pc = 0x156ef8u;
}
