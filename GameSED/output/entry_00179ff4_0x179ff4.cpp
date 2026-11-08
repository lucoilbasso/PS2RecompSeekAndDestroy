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

// Function: entry_00179ff4
// Address: 0x179ff4 - 0x179ff8
void entry_00179ff4_0x179ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ff4_0x179ff4");
#endif

    ctx->pc = 0x179ff4u;

    // 0x179ff4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x179ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x179ff8u;
}
