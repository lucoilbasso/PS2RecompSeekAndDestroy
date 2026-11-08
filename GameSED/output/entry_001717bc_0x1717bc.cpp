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

// Function: entry_001717bc
// Address: 0x1717bc - 0x1717c0
void entry_001717bc_0x1717bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001717bc_0x1717bc");
#endif

    ctx->pc = 0x1717bcu;

    // 0x1717bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1717bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    ctx->pc = 0x1717c0u;
}
