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

// Function: entry_00147e30
// Address: 0x147e30 - 0x147e40
void entry_00147e30_0x147e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147e30_0x147e30");
#endif

    ctx->pc = 0x147e30u;

    // 0x147e30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x147e34: 0x360821  addu        $at, $at, $s6
    ctx->pc = 0x147e34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 22)));
    // 0x147e38: 0xac350208  sw          $s5, 0x208($at)
    ctx->pc = 0x147e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 520), GPR_U32(ctx, 21));
    // 0x147e3c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x147e40u;
}
