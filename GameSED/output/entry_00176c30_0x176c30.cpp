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

// Function: entry_00176c30
// Address: 0x176c30 - 0x176c3c
void entry_00176c30_0x176c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176c30_0x176c30");
#endif

    ctx->pc = 0x176c30u;

    // 0x176c30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x176c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176c34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x176c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x176c3cu;
}
