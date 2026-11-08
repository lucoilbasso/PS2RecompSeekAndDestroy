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

// Function: entry_00170864
// Address: 0x170864 - 0x170870
void entry_00170864_0x170864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170864_0x170864");
#endif

    ctx->pc = 0x170864u;

    // 0x170864: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x170864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x170868: 0x342196c0  ori         $at, $at, 0x96C0
    ctx->pc = 0x170868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38592);
    // 0x17086c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->pc = 0x170870u;
}
