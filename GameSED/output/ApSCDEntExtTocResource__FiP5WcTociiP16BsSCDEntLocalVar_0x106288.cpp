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

// Function: ApSCDEntExtTocResource__FiP5WcTociiP16BsSCDEntLocalVar
// Address: 0x106288 - 0x106330
void ApSCDEntExtTocResource__FiP5WcTociiP16BsSCDEntLocalVar_0x106288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntExtTocResource__FiP5WcTociiP16BsSCDEntLocalVar_0x106288");
#endif

    switch (ctx->pc) {
        case 0x1062e8u: goto label_1062e8;
        case 0x1062fcu: goto label_1062fc;
        default: break;
    }

    ctx->pc = 0x106288u;

    // 0x106288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10628c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x10628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x106290: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x106290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x106294: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x106294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106298: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x106298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10629c: 0x2c840020  sltiu       $a0, $a0, 0x20
    ctx->pc = 0x10629cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1062a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1062a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1062a4: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x1062a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x1062a8: 0x2631ed80  addiu       $s1, $s1, -0x1280
    ctx->pc = 0x1062a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962560));
    // 0x1062ac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1062acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1062b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1062b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1062b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1062b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1062b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1062bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1062bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1062c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1062c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1062c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1062c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1062cc: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1062CCu;
    {
        const bool branch_taken_0x1062cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062CCu;
        // 0x1062d0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062cc) {
            ctx->pc = 0x1062FCu;
            goto label_1062fc;
        }
    }
    ctx->pc = 0x1062D4u;
    // 0x1062d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1062d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1062dc: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x1062dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x1062e0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1062E0u;
    SET_GPR_U32(ctx, 31, 0x1062E8u);
    ctx->pc = 0x1062E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062E0u;
    // 0x1062e4: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1062E0u, 0x1062E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062E8u;
label_1062e8:
    // 0x1062e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1062ec: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x1062ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1062f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1062f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1062F4u;
    SET_GPR_U32(ctx, 31, 0x1062FCu);
    ctx->pc = 0x1062F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062F4u;
    // 0x1062f8: 0x24a53878  addiu       $a1, $a1, 0x3878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1062F4u, 0x1062FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062FCu;
label_1062fc:
    // 0x1062fc: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1062fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x106300: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x106300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x106304: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x106304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x106308: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x106308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x10630c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10630cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x106318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10631c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106320: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x106320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x106324: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106328: 0x3e00008  jr          $ra
    ctx->pc = 0x106328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106328u;
        // 0x10632c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106330u;
}
