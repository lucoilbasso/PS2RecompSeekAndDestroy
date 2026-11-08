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

// Function: entry_00105f90
// Address: 0x105f90 - 0x105fc4
void entry_00105f90_0x105f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f90_0x105f90");
#endif

    ctx->pc = 0x105f90u;

    // 0x105f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105f9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105fa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x105fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x105fa4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x105fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x105fa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x105fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x105fac: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x105facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x105fb0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FB0u;
    {
        const bool branch_taken_0x105fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x105fb0) {
            ctx->pc = 0x105FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FB0u;
            // 0x105fb4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105FC4u;
            return;
        }
    }
    ctx->pc = 0x105FB8u;
    // 0x105fb8: 0xaf808898  sw          $zero, -0x7768($gp)
    ctx->pc = 0x105fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 0));
    // 0x105fbc: 0xaf80889c  sw          $zero, -0x7764($gp)
    ctx->pc = 0x105fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 0));
    // 0x105fc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x105fc4u;
}
