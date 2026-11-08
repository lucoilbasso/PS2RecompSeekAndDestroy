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

// Function: entry_00148864
// Address: 0x148864 - 0x148870
void entry_00148864_0x148864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148864_0x148864");
#endif

    ctx->pc = 0x148864u;

    // 0x148864: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x148868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x148868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14886c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x148870u;
}
