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

// Function: entry_00110ab0
// Address: 0x110ab0 - 0x110ab8
void entry_00110ab0_0x110ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ab0_0x110ab0");
#endif

    ctx->pc = 0x110ab0u;

    // 0x110ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110ab4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x110ab8u;
}
