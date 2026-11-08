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

// Function: entry_00170ca0
// Address: 0x170ca0 - 0x170cac
void entry_00170ca0_0x170ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ca0_0x170ca0");
#endif

    ctx->pc = 0x170ca0u;

    // 0x170ca0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170ca4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170ca8: 0xac220008  sw          $v0, 0x8($at)
    ctx->pc = 0x170ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x170cacu;
}
