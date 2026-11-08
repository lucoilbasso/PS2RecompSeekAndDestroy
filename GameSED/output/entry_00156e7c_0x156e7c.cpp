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

// Function: entry_00156e7c
// Address: 0x156e7c - 0x156e8c
void entry_00156e7c_0x156e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e7c_0x156e7c");
#endif

    ctx->pc = 0x156e7cu;

    // 0x156e7c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x156e80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x156e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x156e84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x156e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x156e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x156e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x156e8cu;
}
