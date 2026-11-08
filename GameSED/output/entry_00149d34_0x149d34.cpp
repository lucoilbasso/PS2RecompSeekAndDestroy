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

// Function: entry_00149d34
// Address: 0x149d34 - 0x149d38
void entry_00149d34_0x149d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149d34_0x149d34");
#endif

    ctx->pc = 0x149d34u;

    // 0x149d34: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x149d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x149d38u;
}
