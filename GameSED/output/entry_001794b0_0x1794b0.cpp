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

// Function: entry_001794b0
// Address: 0x1794b0 - 0x1794c8
void entry_001794b0_0x1794b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001794b0_0x1794b0");
#endif

    ctx->pc = 0x1794b0u;

    // 0x1794b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1794b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1794b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1794b8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1794bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1794c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1794c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1794c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1794c8u;
}
