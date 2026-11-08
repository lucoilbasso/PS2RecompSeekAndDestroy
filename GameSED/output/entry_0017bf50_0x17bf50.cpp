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

// Function: entry_0017bf50
// Address: 0x17bf50 - 0x17bf68
void entry_0017bf50_0x17bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf50_0x17bf50");
#endif

    ctx->pc = 0x17bf50u;

    // 0x17bf50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17bf54: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17bf58: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x17bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
    // 0x17bf5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17bf60: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17bf64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x17bf68u;
}
