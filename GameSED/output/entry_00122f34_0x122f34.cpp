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

// Function: entry_00122f34
// Address: 0x122f34 - 0x122f48
void entry_00122f34_0x122f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f34_0x122f34");
#endif

    ctx->pc = 0x122f34u;

    // 0x122f34: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x122f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x122f38: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122f3c: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
    // 0x122f40: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x122f40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x122f44: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x122f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    ctx->pc = 0x122f48u;
}
