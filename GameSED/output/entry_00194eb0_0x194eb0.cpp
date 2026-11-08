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

// Function: entry_00194eb0
// Address: 0x194eb0 - 0x194eb8
void entry_00194eb0_0x194eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194eb0_0x194eb0");
#endif

    ctx->pc = 0x194eb0u;

    // 0x194eb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x194eb4: 0x48380b  movn        $a3, $v0, $t0
    ctx->pc = 0x194eb4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->pc = 0x194eb8u;
}
