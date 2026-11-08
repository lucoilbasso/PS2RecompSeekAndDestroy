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

// Function: entry_0011fb1c
// Address: 0x11fb1c - 0x11fb30
void entry_0011fb1c_0x11fb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb1c_0x11fb1c");
#endif

    ctx->pc = 0x11fb1cu;

    // 0x11fb1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11fb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11fb20: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11fb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11fb24: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x11fb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x11fb28: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11FB28u;
    {
        const bool branch_taken_0x11fb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB28u;
        // 0x11fb2c: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb28) {
            ctx->pc = 0x11FAA8u;
            return;
        }
    }
    ctx->pc = 0x11FB30u;
}
