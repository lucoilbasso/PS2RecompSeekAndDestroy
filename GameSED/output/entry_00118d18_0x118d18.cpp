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

// Function: entry_00118d18
// Address: 0x118d18 - 0x118d1c
void entry_00118d18_0x118d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d18_0x118d18");
#endif

    ctx->pc = 0x118d18u;

    // 0x118d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    ctx->pc = 0x118d1cu;
}
