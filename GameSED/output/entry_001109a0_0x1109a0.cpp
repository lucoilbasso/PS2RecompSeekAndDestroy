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

// Function: entry_001109a0
// Address: 0x1109a0 - 0x1109ac
void entry_001109a0_0x1109a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109a0_0x1109a0");
#endif

    ctx->pc = 0x1109a0u;

    // 0x1109a0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1109a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1109a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1109a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109a8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1109a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    ctx->pc = 0x1109acu;
}
