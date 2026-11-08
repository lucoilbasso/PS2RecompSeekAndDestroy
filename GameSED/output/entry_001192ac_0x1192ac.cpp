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

// Function: entry_001192ac
// Address: 0x1192ac - 0x1192b4
void entry_001192ac_0x1192ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192ac_0x1192ac");
#endif

    ctx->pc = 0x1192acu;

    // 0x1192ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1192acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1192b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1192b4u;
}
