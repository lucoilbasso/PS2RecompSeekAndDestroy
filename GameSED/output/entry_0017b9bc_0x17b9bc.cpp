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

// Function: entry_0017b9bc
// Address: 0x17b9bc - 0x17b9c0
void entry_0017b9bc_0x17b9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9bc_0x17b9bc");
#endif

    ctx->pc = 0x17b9bcu;

    // 0x17b9bc: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x17b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x17b9c0u;
}
