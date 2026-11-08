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

// Function: entry_00190e14
// Address: 0x190e14 - 0x190e20
void entry_00190e14_0x190e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e14_0x190e14");
#endif

    ctx->pc = 0x190e14u;

    // 0x190e14: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x190e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x190e18: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x190e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x190e1c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x190e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    ctx->pc = 0x190e20u;
}
