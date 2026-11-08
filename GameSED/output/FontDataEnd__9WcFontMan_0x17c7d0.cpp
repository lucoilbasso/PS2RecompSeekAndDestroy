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

// Function: FontDataEnd__9WcFontMan
// Address: 0x17c7d0 - 0x17c830
void FontDataEnd__9WcFontMan_0x17c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDataEnd__9WcFontMan_0x17c7d0");
#endif

    switch (ctx->pc) {
        case 0x17c7d0u: goto label_17c7d0;
        case 0x17c7d4u: goto label_17c7d4;
        case 0x17c7d8u: goto label_17c7d8;
        case 0x17c7dcu: goto label_17c7dc;
        case 0x17c7e0u: goto label_17c7e0;
        case 0x17c7e4u: goto label_17c7e4;
        case 0x17c7e8u: goto label_17c7e8;
        case 0x17c7ecu: goto label_17c7ec;
        case 0x17c7f0u: goto label_17c7f0;
        case 0x17c7f4u: goto label_17c7f4;
        case 0x17c7f8u: goto label_17c7f8;
        case 0x17c7fcu: goto label_17c7fc;
        case 0x17c800u: goto label_17c800;
        case 0x17c804u: goto label_17c804;
        case 0x17c808u: goto label_17c808;
        case 0x17c80cu: goto label_17c80c;
        case 0x17c810u: goto label_17c810;
        case 0x17c814u: goto label_17c814;
        case 0x17c818u: goto label_17c818;
        case 0x17c81cu: goto label_17c81c;
        case 0x17c820u: goto label_17c820;
        case 0x17c824u: goto label_17c824;
        case 0x17c828u: goto label_17c828;
        case 0x17c82cu: goto label_17c82c;
        default: break;
    }

    ctx->pc = 0x17c7d0u;

label_17c7d0:
    // 0x17c7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17c7d4:
    // 0x17c7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17c7d8:
    // 0x17c7d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c7dc:
    // 0x17c7dc: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_17c7e0:
    // 0x17c7e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17c7e4:
    // 0x17c7e4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17c7e8:
    // 0x17c7e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c7ec:
    // 0x17c7ec: 0x0  nop
    ctx->pc = 0x17c7ecu;
    // NOP
label_17c7f0:
    // 0x17c7f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_17c7f4:
    if (ctx->pc == 0x17C7F4u) {
        ctx->pc = 0x17C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F0u;
        // 0x17c7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7F8u;
        goto label_17c7f8;
    }
    ctx->pc = 0x17C7F0u;
    {
        const bool branch_taken_0x17c7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F0u;
        // 0x17c7f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7f0) {
            ctx->pc = 0x17C810u;
            goto label_17c810;
        }
    }
    ctx->pc = 0x17C7F8u;
label_17c7f8:
    // 0x17c7f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17c7fc:
    // 0x17c7fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17c800:
    // 0x17c800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x17c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_17c804:
    // 0x17c804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17c808:
    // 0x17c808: 0x60f809  jalr        $v1
label_17c80c:
    if (ctx->pc == 0x17C80Cu) {
        ctx->pc = 0x17C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C808u;
        // 0x17c80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C810u;
        goto label_17c810;
    }
    ctx->pc = 0x17C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C810u);
        ctx->pc = 0x17C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C808u;
        // 0x17c80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C808u, 0x17C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C810u;
label_17c810:
    // 0x17c810: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17c810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17c814:
    // 0x17c814: 0x623fff6  bgezl       $s1, . + 4 + (-0xA << 2)
label_17c818:
    if (ctx->pc == 0x17C818u) {
        ctx->pc = 0x17C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C814u;
        // 0x17c818: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C81Cu;
        goto label_17c81c;
    }
    ctx->pc = 0x17C814u;
    {
        const bool branch_taken_0x17c814 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17c814) {
            ctx->pc = 0x17C818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C814u;
            // 0x17c818: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c7f0;
        }
    }
    ctx->pc = 0x17C81Cu;
label_17c81c:
    // 0x17c81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c820:
    // 0x17c820: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17c824:
    // 0x17c824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c828:
    // 0x17c828: 0x3e00008  jr          $ra
label_17c82c:
    if (ctx->pc == 0x17C82Cu) {
        ctx->pc = 0x17C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C828u;
        // 0x17c82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C830u;
        goto label_fallthrough_0x17c828;
    }
    ctx->pc = 0x17C828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C828u;
        // 0x17c82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c828:
    ctx->pc = 0x17C830u;
}
