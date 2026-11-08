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

// Function: entry_00187e80
// Address: 0x187e80 - 0x187e8c
void entry_00187e80_0x187e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e80_0x187e80");
#endif

    ctx->pc = 0x187e80u;

    // 0x187e80: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x187e84: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x187e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x187e88: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x187e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    ctx->pc = 0x187e8cu;
}
