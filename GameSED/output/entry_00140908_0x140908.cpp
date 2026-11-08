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

// Function: entry_00140908
// Address: 0x140908 - 0x140924
void entry_00140908_0x140908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140908_0x140908");
#endif

    ctx->pc = 0x140908u;

    // 0x140908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14090c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14090cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x140910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x140914: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140918: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x140918u;
    {
        const bool branch_taken_0x140918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140918) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x140920u;
    // 0x140920: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x140920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x140924u;
}
