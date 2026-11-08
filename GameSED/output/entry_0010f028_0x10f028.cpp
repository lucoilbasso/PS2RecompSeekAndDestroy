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

// Function: entry_0010f028
// Address: 0x10f028 - 0x10f034
void entry_0010f028_0x10f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f028_0x10f028");
#endif

    ctx->pc = 0x10f028u;

    // 0x10f028: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x10f02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f030: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x10f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    ctx->pc = 0x10f034u;
}
