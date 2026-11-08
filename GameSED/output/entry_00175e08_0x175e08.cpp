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

// Function: entry_00175e08
// Address: 0x175e08 - 0x175e14
void entry_00175e08_0x175e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175e08_0x175e08");
#endif

    ctx->pc = 0x175e08u;

    // 0x175e08: 0x2810  mfhi        $a1
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x175e0c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x175e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x175e10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175e14u;
}
