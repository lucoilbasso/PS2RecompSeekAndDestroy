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

// Function: WMCardCommandUnFormatProgram__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x1796e0 - 0x17975c
void WMCardCommandUnFormatProgram__FP7WcMCardP17MCARD_INFORMATION_0x1796e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandUnFormatProgram__FP7WcMCardP17MCARD_INFORMATION_0x1796e0");
#endif

    switch (ctx->pc) {
        case 0x179728u: goto label_179728;
        default: break;
    }

    ctx->pc = 0x1796e0u;

    // 0x1796e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1796e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1796e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1796e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1796e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1796e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1796ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1796f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1796f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1796f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1796f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1796f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1796fc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1796FCu;
    {
        const bool branch_taken_0x1796fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796FCu;
        // 0x179700: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796fc) {
            ctx->pc = 0x179718u;
            goto label_179718;
        }
    }
    ctx->pc = 0x179704u;
    // 0x179704: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x179704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x179708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17970c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179710: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179714: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_179718:
    // 0x179718: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x179718u;
    {
        const bool branch_taken_0x179718 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x179718) {
            ctx->pc = 0x179738u;
            goto label_179738;
        }
    }
    ctx->pc = 0x179720u;
    // 0x179720: 0xc05e74a  jal         func_179D28
    ctx->pc = 0x179720u;
    SET_GPR_U32(ctx, 31, 0x179728u);
    ctx->pc = 0x179D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D28u, 0x179720u, 0x179728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179728u;
label_179728:
    // 0x179728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17972c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17972Cu;
    {
        const bool branch_taken_0x17972c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17972Cu;
        // 0x179730: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17972c) {
            ctx->pc = 0x179738u;
            goto label_179738;
        }
    }
    ctx->pc = 0x179734u;
    // 0x179734: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x179734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_179738:
    // 0x179738: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17973c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179744: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x179744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179748: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x179748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17974c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179754: 0x3e00008  jr          $ra
    ctx->pc = 0x179754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179754u;
        // 0x179758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17975Cu;
}
