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

// Function: Finish__9ApcSCDEnt
// Address: 0x105930 - 0x105988
void Finish__9ApcSCDEnt_0x105930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcSCDEnt_0x105930");
#endif

    switch (ctx->pc) {
        case 0x105930u: goto label_105930;
        case 0x105934u: goto label_105934;
        case 0x105938u: goto label_105938;
        case 0x10593cu: goto label_10593c;
        case 0x105940u: goto label_105940;
        case 0x105944u: goto label_105944;
        case 0x105948u: goto label_105948;
        case 0x10594cu: goto label_10594c;
        case 0x105950u: goto label_105950;
        case 0x105954u: goto label_105954;
        case 0x105958u: goto label_105958;
        case 0x10595cu: goto label_10595c;
        case 0x105960u: goto label_105960;
        case 0x105964u: goto label_105964;
        case 0x105968u: goto label_105968;
        case 0x10596cu: goto label_10596c;
        case 0x105970u: goto label_105970;
        case 0x105974u: goto label_105974;
        case 0x105978u: goto label_105978;
        case 0x10597cu: goto label_10597c;
        case 0x105980u: goto label_105980;
        case 0x105984u: goto label_105984;
        default: break;
    }

    ctx->pc = 0x105930u;

label_105930:
    // 0x105930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_105934:
    // 0x105934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_105938:
    // 0x105938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10593c:
    // 0x10593c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_105940:
    // 0x105940: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x105940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_105944:
    // 0x105944: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_105948:
    // 0x105948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10594c:
    // 0x10594c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_105950:
    if (ctx->pc == 0x105950u) {
        ctx->pc = 0x105950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10594Cu;
        // 0x105950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105954u;
        goto label_105954;
    }
    ctx->pc = 0x10594Cu;
    {
        const bool branch_taken_0x10594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10594Cu;
        // 0x105950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10594c) {
            ctx->pc = 0x105970u;
            goto label_105970;
        }
    }
    ctx->pc = 0x105954u;
label_105954:
    // 0x105954: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x105954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_105958:
    // 0x105958: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_10595c:
    // 0x10595c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_105960:
    // 0x105960: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x105960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_105964:
    // 0x105964: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x105964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_105968:
    // 0x105968: 0x60f809  jalr        $v1
label_10596c:
    if (ctx->pc == 0x10596Cu) {
        ctx->pc = 0x10596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105968u;
        // 0x10596c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105970u;
        goto label_105970;
    }
    ctx->pc = 0x105968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105970u);
        ctx->pc = 0x10596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105968u;
        // 0x10596c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105968u, 0x105970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105970u;
label_105970:
    // 0x105970: 0xc060e0e  jal         func_183838
label_105974:
    if (ctx->pc == 0x105974u) {
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105970u;
        // 0x105974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105978u;
        goto label_105978;
    }
    ctx->pc = 0x105970u;
    SET_GPR_U32(ctx, 31, 0x105978u);
    ctx->pc = 0x105974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105970u;
    // 0x105974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183838u, 0x105970u, 0x105978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105978u;
label_105978:
    // 0x105978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10597c:
    // 0x10597c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_105980:
    // 0x105980: 0x3e00008  jr          $ra
label_105984:
    if (ctx->pc == 0x105984u) {
        ctx->pc = 0x105984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105980u;
        // 0x105984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105988u;
        goto label_fallthrough_0x105980;
    }
    ctx->pc = 0x105980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105980u;
        // 0x105984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x105980:
    ctx->pc = 0x105988u;
}
