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

// Function: entry_0017ada4
// Address: 0x17ada4 - 0x17ada8
void entry_0017ada4_0x17ada4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ada4_0x17ada4");
#endif

    ctx->pc = 0x17ada4u;

    // 0x17ada4: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x17ada4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    ctx->pc = 0x17ada8u;
}
