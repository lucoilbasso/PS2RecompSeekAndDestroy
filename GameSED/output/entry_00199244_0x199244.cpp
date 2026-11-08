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

// Function: entry_00199244
// Address: 0x199244 - 0x199254
void entry_00199244_0x199244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199244_0x199244");
#endif

    ctx->pc = 0x199244u;

    // 0x199244: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x199244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x199248: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x19924c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x19924cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x199250: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x199254u;
}
