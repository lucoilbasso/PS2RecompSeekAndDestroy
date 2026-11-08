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

// Function: entry_001c3300
// Address: 0x1c3300 - 0x1c3330
void entry_001c3300_0x1c3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3300_0x1c3300");
#endif

    ctx->pc = 0x1c3300u;

    // 0x1c3300: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1c3304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3308: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3308u;
    {
        const bool branch_taken_0x1c3308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3308) {
            ctx->pc = 0x1C330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3308u;
            // 0x1c330c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3330u;
            return;
        }
    }
    ctx->pc = 0x1C3310u;
    // 0x1c3310: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x1c3310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1c3314: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3314u;
    {
        const bool branch_taken_0x1c3314 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3314) {
            ctx->pc = 0x1C3318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3314u;
            // 0x1c3318: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3330u;
            return;
        }
    }
    ctx->pc = 0x1C331Cu;
    // 0x1c331c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1c331cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1c3320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3324: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x1c3324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x1c3328: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x1c3328u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x1c332c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1c332cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->pc = 0x1c3330u;
}
