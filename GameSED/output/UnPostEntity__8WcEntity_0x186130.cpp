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

// Function: UnPostEntity__8WcEntity
// Address: 0x186130 - 0x18617c
void UnPostEntity__8WcEntity_0x186130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnPostEntity__8WcEntity_0x186130");
#endif

    switch (ctx->pc) {
        case 0x186130u: goto label_186130;
        case 0x186134u: goto label_186134;
        case 0x186138u: goto label_186138;
        case 0x18613cu: goto label_18613c;
        case 0x186140u: goto label_186140;
        case 0x186144u: goto label_186144;
        case 0x186148u: goto label_186148;
        case 0x18614cu: goto label_18614c;
        case 0x186150u: goto label_186150;
        case 0x186154u: goto label_186154;
        case 0x186158u: goto label_186158;
        case 0x18615cu: goto label_18615c;
        case 0x186160u: goto label_186160;
        case 0x186164u: goto label_186164;
        case 0x186168u: goto label_186168;
        case 0x18616cu: goto label_18616c;
        case 0x186170u: goto label_186170;
        case 0x186174u: goto label_186174;
        case 0x186178u: goto label_186178;
        default: break;
    }

    ctx->pc = 0x186130u;

label_186130:
    // 0x186130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_186134:
    // 0x186134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186138:
    // 0x186138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18613c:
    // 0x18613c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_186140:
    // 0x186140: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_186144:
    // 0x186144: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_186148:
    if (ctx->pc == 0x186148u) {
        ctx->pc = 0x186148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186144u;
        // 0x186148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18614Cu;
        goto label_18614c;
    }
    ctx->pc = 0x186144u;
    {
        const bool branch_taken_0x186144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x186148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186144u;
        // 0x186148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186144) {
            ctx->pc = 0x18616Cu;
            goto label_18616c;
        }
    }
    ctx->pc = 0x18614Cu;
label_18614c:
    // 0x18614c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_186150:
    // 0x186150: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_186154:
    // 0x186154: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_186158:
    // 0x186158: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18615c:
    // 0x18615c: 0x60f809  jalr        $v1
label_186160:
    if (ctx->pc == 0x186160u) {
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186164u;
        goto label_186164;
    }
    ctx->pc = 0x18615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186164u);
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18615Cu, 0x186164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186164u;
label_186164:
    // 0x186164: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x186164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_186168:
    // 0x186168: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x186168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
label_18616c:
    // 0x18616c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18616cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186170:
    // 0x186170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186174:
    // 0x186174: 0x3e00008  jr          $ra
label_186178:
    if (ctx->pc == 0x186178u) {
        ctx->pc = 0x186178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186174u;
        // 0x186178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18617Cu;
        goto label_fallthrough_0x186174;
    }
    ctx->pc = 0x186174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186174u;
        // 0x186178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186174:
    ctx->pc = 0x18617Cu;
}
