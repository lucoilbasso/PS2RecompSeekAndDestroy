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

// Function: _updateTempTackData
// Address: 0x1c2748 - 0x1c27bc
void _updateTempTackData_0x1c2748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateTempTackData_0x1c2748");
#endif

    ctx->pc = 0x1c2748u;

    // 0x1c2748: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c2748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c274c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c274cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2750: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x1c2750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x1c2754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2758: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2758u;
    {
        const bool branch_taken_0x1c2758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2758u;
        // 0x1c275c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2758) {
            ctx->pc = 0x1C2780u;
            goto label_1c2780;
        }
    }
    ctx->pc = 0x1C2760u;
    // 0x1c2760: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2760u;
    {
        const bool branch_taken_0x1c2760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2760) {
            ctx->pc = 0x1C2764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2760u;
            // 0x1c2764: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2784u;
            goto label_1c2784;
        }
    }
    ctx->pc = 0x1C2768u;
    // 0x1c2768: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2768u;
    {
        const bool branch_taken_0x1c2768 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1c2768) {
            ctx->pc = 0x1C276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2768u;
            // 0x1c276c: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2770u;
    // 0x1c2770: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x1c2770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
    // 0x1c2774: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x1c2774u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c2778: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x1c2778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_1c277c:
    // 0x1c277c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c2780:
    // 0x1c2780: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x1c2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_1c2784:
    // 0x1c2784: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c2788: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2788u;
    {
        const bool branch_taken_0x1c2788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2788u;
        // 0x1c278c: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2788) {
            ctx->pc = 0x1C27A4u;
            goto label_1c27a4;
        }
    }
    ctx->pc = 0x1C2790u;
    // 0x1c2790: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1c2790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c2794: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2794u;
    {
        const bool branch_taken_0x1c2794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2794) {
            ctx->pc = 0x1C2798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2794u;
            // 0x1c2798: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C27A8u;
            goto label_1c27a8;
        }
    }
    ctx->pc = 0x1C279Cu;
    // 0x1c279c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1c27a0: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x1c27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_1c27a4:
    // 0x1c27a4: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x1c27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_1c27a8:
    // 0x1c27a8: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x1c27ac: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1c27acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c27b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1c27b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c27b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B4u;
        // 0x1c27b8: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27BCu;
}
