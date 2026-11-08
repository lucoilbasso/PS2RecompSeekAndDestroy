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

// Function: entry_00104ea0
// Address: 0x104ea0 - 0x104ea8
void entry_00104ea0_0x104ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ea0_0x104ea0");
#endif

    ctx->pc = 0x104ea0u;

    // 0x104ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x104ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x104ea8u;
}
