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

// Function: WMCardCommandFormatProgram__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179638 - 0x1796bc
void WMCardCommandFormatProgram__FP7WcMCardP17MCARD_INFORMATION_0x179638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardCommandFormatProgram__FP7WcMCardP17MCARD_INFORMATION_0x179638");
#endif

    switch (ctx->pc) {
        case 0x179680u: goto label_179680;
        default: break;
    }

    ctx->pc = 0x179638u;

    // 0x179638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17963c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179640: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x179644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x179648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x179648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17964c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179650: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179654: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179654u;
    {
        const bool branch_taken_0x179654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179654u;
        // 0x179658: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179654) {
            ctx->pc = 0x179670u;
            goto label_179670;
        }
    }
    ctx->pc = 0x17965Cu;
    // 0x17965c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x17965cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x179660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179664: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x179664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179668: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17966c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_179670:
    // 0x179670: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x179670u;
    {
        const bool branch_taken_0x179670 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x179674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179670u;
        // 0x179674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179670) {
            ctx->pc = 0x179694u;
            goto label_179694;
        }
    }
    ctx->pc = 0x179678u;
    // 0x179678: 0xc05e724  jal         func_179C90
    ctx->pc = 0x179678u;
    SET_GPR_U32(ctx, 31, 0x179680u);
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x179678u, 0x179680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179680u;
label_179680:
    // 0x179680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179684: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179684u;
    {
        const bool branch_taken_0x179684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179684u;
        // 0x179688: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179684) {
            ctx->pc = 0x179690u;
            goto label_179690;
        }
    }
    ctx->pc = 0x17968Cu;
    // 0x17968c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x17968cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_179690:
    // 0x179690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179694:
    // 0x179694: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x179694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x179698: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x179698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17969c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1796a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1796a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1796a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1796a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1796a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1796a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1796ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1796acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1796b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1796b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1796b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1796B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1796B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796B4u;
        // 0x1796b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1796B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1796BCu;
}
