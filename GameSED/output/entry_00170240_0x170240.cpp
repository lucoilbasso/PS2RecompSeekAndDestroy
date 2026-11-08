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

// Function: entry_00170240
// Address: 0x170240 - 0x170248
void entry_00170240_0x170240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170240_0x170240");
#endif

    ctx->pc = 0x170240u;

    // 0x170240: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x170244: 0x62b80b  movn        $s7, $v1, $v0
    ctx->pc = 0x170244u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    ctx->pc = 0x170248u;
}
