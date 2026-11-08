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

// Function: entry_00156ac8
// Address: 0x156ac8 - 0x156ad4
void entry_00156ac8_0x156ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ac8_0x156ac8");
#endif

    ctx->pc = 0x156ac8u;

    // 0x156ac8: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x156acc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x156accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x156ad0: 0xac820180  sw          $v0, 0x180($a0)
    ctx->pc = 0x156ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
    ctx->pc = 0x156ad4u;
}
