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

// Function: entry_00118e08
// Address: 0x118e08 - 0x118e18
void entry_00118e08_0x118e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e08_0x118e08");
#endif

    ctx->pc = 0x118e08u;

    // 0x118e08: 0x2538021  addu        $s0, $s2, $s3
    ctx->pc = 0x118e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x118e0c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x118e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e14: 0x0  nop
    ctx->pc = 0x118e14u;
    // NOP
    ctx->pc = 0x118e18u;
}
