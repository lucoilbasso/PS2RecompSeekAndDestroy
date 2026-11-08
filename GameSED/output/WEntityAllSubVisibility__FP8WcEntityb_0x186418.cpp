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

// Function: WEntityAllSubVisibility__FP8WcEntityb
// Address: 0x186418 - 0x186480
void WEntityAllSubVisibility__FP8WcEntityb_0x186418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityAllSubVisibility__FP8WcEntityb_0x186418");
#endif

    switch (ctx->pc) {
        case 0x186418u: goto label_186418;
        case 0x18641cu: goto label_18641c;
        case 0x186420u: goto label_186420;
        case 0x186424u: goto label_186424;
        case 0x186428u: goto label_186428;
        case 0x18642cu: goto label_18642c;
        case 0x186430u: goto label_186430;
        case 0x186434u: goto label_186434;
        case 0x186438u: goto label_186438;
        case 0x18643cu: goto label_18643c;
        case 0x186440u: goto label_186440;
        case 0x186444u: goto label_186444;
        case 0x186448u: goto label_186448;
        case 0x18644cu: goto label_18644c;
        case 0x186450u: goto label_186450;
        case 0x186454u: goto label_186454;
        case 0x186458u: goto label_186458;
        case 0x18645cu: goto label_18645c;
        case 0x186460u: goto label_186460;
        case 0x186464u: goto label_186464;
        case 0x186468u: goto label_186468;
        case 0x18646cu: goto label_18646c;
        case 0x186470u: goto label_186470;
        case 0x186474u: goto label_186474;
        case 0x186478u: goto label_186478;
        case 0x18647cu: goto label_18647c;
        default: break;
    }

    ctx->pc = 0x186418u;

label_186418:
    // 0x186418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18641c:
    // 0x18641c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186420:
    // 0x186420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186424:
    // 0x186424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186428:
    // 0x186428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18642c:
    // 0x18642c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_186430:
    // 0x186430: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x186430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_186434:
    // 0x186434: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x186434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_186438:
    // 0x186438: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18643c:
    // 0x18643c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186440:
    // 0x186440: 0x60f809  jalr        $v1
label_186444:
    if (ctx->pc == 0x186444u) {
        ctx->pc = 0x186444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186440u;
        // 0x186444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186448u;
        goto label_186448;
    }
    ctx->pc = 0x186440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186448u);
        ctx->pc = 0x186444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186440u;
        // 0x186444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186440u, 0x186448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186448u;
label_186448:
    // 0x186448: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_18644c:
    // 0x18644c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_186450:
    if (ctx->pc == 0x186450u) {
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18644Cu;
        // 0x186450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186454u;
        goto label_186454;
    }
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x186450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18644Cu;
        // 0x186450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18644c) {
            ctx->pc = 0x18646Cu;
            goto label_18646c;
        }
    }
    ctx->pc = 0x186454u;
label_186454:
    // 0x186454: 0x0  nop
    ctx->pc = 0x186454u;
    // NOP
label_186458:
    // 0x186458: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_18645c:
    // 0x18645c: 0xc061906  jal         func_186418
label_186460:
    if (ctx->pc == 0x186460u) {
        ctx->pc = 0x186460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18645Cu;
        // 0x186460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186464u;
        goto label_186464;
    }
    ctx->pc = 0x18645Cu;
    SET_GPR_U32(ctx, 31, 0x186464u);
    ctx->pc = 0x186460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18645Cu;
    // 0x186460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    goto label_186418;
    ctx->pc = 0x186464u;
label_186464:
    // 0x186464: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
label_186468:
    if (ctx->pc == 0x186468u) {
        ctx->pc = 0x186468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186464u;
        // 0x186468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18646Cu;
        goto label_18646c;
    }
    ctx->pc = 0x186464u;
    {
        const bool branch_taken_0x186464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x186468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186464u;
        // 0x186468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186464) {
            ctx->pc = 0x186458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186458;
        }
    }
    ctx->pc = 0x18646Cu;
label_18646c:
    // 0x18646c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18646cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186470:
    // 0x186470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186474:
    // 0x186474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186478:
    // 0x186478: 0x3e00008  jr          $ra
label_18647c:
    if (ctx->pc == 0x18647Cu) {
        ctx->pc = 0x18647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186478u;
        // 0x18647c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186480u;
        goto label_fallthrough_0x186478;
    }
    ctx->pc = 0x186478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186478u;
        // 0x18647c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186478:
    ctx->pc = 0x186480u;
}
