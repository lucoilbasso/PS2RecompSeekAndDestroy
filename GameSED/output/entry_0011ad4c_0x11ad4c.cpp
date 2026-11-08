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

// Function: entry_0011ad4c
// Address: 0x11ad4c - 0x11ad54
void entry_0011ad4c_0x11ad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad4c_0x11ad4c");
#endif

    ctx->pc = 0x11ad4cu;

    // 0x11ad4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ad4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad50: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x11ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    ctx->pc = 0x11ad54u;
}
