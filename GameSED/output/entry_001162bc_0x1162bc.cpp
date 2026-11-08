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

// Function: entry_001162bc
// Address: 0x1162bc - 0x1162c4
void entry_001162bc_0x1162bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162bc_0x1162bc");
#endif

    ctx->pc = 0x1162bcu;

    // 0x1162bc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1162bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1162c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1162c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x1162c4u;
}
