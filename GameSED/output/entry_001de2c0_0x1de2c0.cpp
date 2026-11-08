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

// Function: entry_001de2c0
// Address: 0x1de2c0 - 0x1de30c
void entry_001de2c0_0x1de2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de2c0_0x1de2c0");
#endif

    switch (ctx->pc) {
        case 0x1de2f4u: goto label_1de2f4;
        default: break;
    }

    ctx->pc = 0x1de2c0u;

label_1de2c0:
    // 0x1de2c0: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x1de2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1de2c4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1de2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1de2c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1de2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1de2cc: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x1de2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1de2d0: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1de2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de2d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1de2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1de2d8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DE2D8u;
    {
        const bool branch_taken_0x1de2d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1DE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2D8u;
        // 0x1de2dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2d8) {
            ctx->pc = 0x1DE2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de2c0;
        }
    }
    ctx->pc = 0x1DE2E0u;
    // 0x1de2e0: 0x24e20090  addiu       $v0, $a3, 0x90
    ctx->pc = 0x1de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x1de2e4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1de2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2ec: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DE2ECu;
    SET_GPR_U32(ctx, 31, 0x1DE2F4u);
    ctx->pc = 0x1DE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE2ECu;
    // 0x1de2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DE2ECu, 0x1DE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE2F4u;
label_1de2f4:
    // 0x1de2f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de2fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de304: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE304u;
        // 0x1de308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE30Cu;
}
