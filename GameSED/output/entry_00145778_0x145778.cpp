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

// Function: entry_00145778
// Address: 0x145778 - 0x14577c
void entry_00145778_0x145778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145778_0x145778");
#endif

    ctx->pc = 0x145778u;

    // 0x145778: 0xc6900b  movn        $s2, $a2, $a2
    ctx->pc = 0x145778u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
    ctx->pc = 0x14577cu;
}
