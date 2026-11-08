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

// Function: entry_001cbedc
// Address: 0x1cbedc - 0x1cbeec
void entry_001cbedc_0x1cbedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbedc_0x1cbedc");
#endif

    ctx->pc = 0x1cbedcu;

    // 0x1cbedc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbee0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cbee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1cbee4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1cbee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x1cbee8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1cbee8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1cbeecu;
}
