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

// Function: entry_001c9f28
// Address: 0x1c9f28 - 0x1c9f3c
void entry_001c9f28_0x1c9f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9f28_0x1c9f28");
#endif

    ctx->pc = 0x1c9f28u;

    // 0x1c9f28: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1c9f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1c9f2c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1c9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1c9f30: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f38: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1c9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x1c9f3cu;
}
