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

// Function: entry_00118188
// Address: 0x118188 - 0x118198
void entry_00118188_0x118188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118188_0x118188");
#endif

    ctx->pc = 0x118188u;

    // 0x118188: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x118188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x11818c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x11818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x118190: 0x24a211d6  addiu       $v0, $a1, 0x11D6
    ctx->pc = 0x118190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4566));
    // 0x118194: 0x0  nop
    ctx->pc = 0x118194u;
    // NOP
    ctx->pc = 0x118198u;
}
