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

// Function: entry_001037e8
// Address: 0x1037e8 - 0x103804
void entry_001037e8_0x1037e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001037e8_0x1037e8");
#endif

    ctx->pc = 0x1037e8u;

    // 0x1037e8: 0x52550006  beql        $s2, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1037E8u;
    {
        const bool branch_taken_0x1037e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        if (branch_taken_0x1037e8) {
            ctx->pc = 0x1037ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037E8u;
            // 0x1037ec: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103804u;
            return;
        }
    }
    ctx->pc = 0x1037F0u;
    // 0x1037f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1037f4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1037f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1037f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1037F8u;
    {
        const bool branch_taken_0x1037f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1037f8) {
            ctx->pc = 0x1037FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1037F8u;
            // 0x1037fc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10382Cu;
            return;
        }
    }
    ctx->pc = 0x103800u;
    // 0x103800: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x103800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->pc = 0x103804u;
}
