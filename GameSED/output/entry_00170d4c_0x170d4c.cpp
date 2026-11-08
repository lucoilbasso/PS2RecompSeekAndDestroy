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

// Function: entry_00170d4c
// Address: 0x170d4c - 0x170d58
void entry_00170d4c_0x170d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170d4c_0x170d4c");
#endif

    ctx->pc = 0x170d4cu;

    // 0x170d4c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170d50: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170d54: 0xac280004  sw          $t0, 0x4($at)
    ctx->pc = 0x170d54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 8));
    ctx->pc = 0x170d58u;
}
