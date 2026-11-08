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

// Function: entry_0012b428
// Address: 0x12b428 - 0x12b42c
void entry_0012b428_0x12b428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b428_0x12b428");
#endif

    ctx->pc = 0x12b428u;

    // 0x12b428: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x12b428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    ctx->pc = 0x12b42cu;
}
