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

// Function: CleanUp__9ApcCqpart
// Address: 0x1dae58 - 0x1daecc
void CleanUp__9ApcCqpart_0x1dae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CleanUp__9ApcCqpart_0x1dae58");
#endif

    switch (ctx->pc) {
        case 0x1dae58u: goto label_1dae58;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae60u: goto label_1dae60;
        case 0x1dae64u: goto label_1dae64;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae70u: goto label_1dae70;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae78u: goto label_1dae78;
        case 0x1dae7cu: goto label_1dae7c;
        case 0x1dae80u: goto label_1dae80;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae88u: goto label_1dae88;
        case 0x1dae8cu: goto label_1dae8c;
        case 0x1dae90u: goto label_1dae90;
        case 0x1dae94u: goto label_1dae94;
        case 0x1dae98u: goto label_1dae98;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daea8u: goto label_1daea8;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daeb0u: goto label_1daeb0;
        case 0x1daeb4u: goto label_1daeb4;
        case 0x1daeb8u: goto label_1daeb8;
        case 0x1daebcu: goto label_1daebc;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        default: break;
    }

    ctx->pc = 0x1dae58u;

label_1dae58:
    // 0x1dae58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1dae5c:
    // 0x1dae5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dae60:
    // 0x1dae60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dae64:
    // 0x1dae64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1dae68:
    // 0x1dae68: 0x8e061230  lw          $a2, 0x1230($s0)
    ctx->pc = 0x1dae68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4656)));
label_1dae6c:
    // 0x1dae6c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1dae70:
    if (ctx->pc == 0x1DAE70u) {
        ctx->pc = 0x1DAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE6Cu;
        // 0x1dae70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE74u;
        goto label_1dae74;
    }
    ctx->pc = 0x1DAE6Cu;
    {
        const bool branch_taken_0x1dae6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE6Cu;
        // 0x1dae70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae6c) {
            ctx->pc = 0x1DAE8Cu;
            goto label_1dae8c;
        }
    }
    ctx->pc = 0x1DAE74u;
label_1dae74:
    // 0x1dae74: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1dae78:
    // 0x1dae78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1dae7c:
    // 0x1dae7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dae7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dae80:
    // 0x1dae80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dae84:
    // 0x1dae84: 0x60f809  jalr        $v1
label_1dae88:
    if (ctx->pc == 0x1DAE88u) {
        ctx->pc = 0x1DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE84u;
        // 0x1dae88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE8Cu;
        goto label_1dae8c;
    }
    ctx->pc = 0x1DAE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DAE8Cu);
        ctx->pc = 0x1DAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE84u;
        // 0x1dae88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE84u, 0x1DAE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DAE8Cu;
label_1dae8c:
    // 0x1dae8c: 0x26041258  addiu       $a0, $s0, 0x1258
    ctx->pc = 0x1dae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4696));
label_1dae90:
    // 0x1dae90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dae94:
    // 0x1dae94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dae98:
    // 0x1dae98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dae9c:
    // 0x1dae9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1daea0:
    if (ctx->pc == 0x1DAEA0u) {
        ctx->pc = 0x1DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE9Cu;
        // 0x1daea0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEA4u;
        goto label_1daea4;
    }
    ctx->pc = 0x1DAE9Cu;
    {
        const bool branch_taken_0x1dae9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE9Cu;
        // 0x1daea0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae9c) {
            ctx->pc = 0x1DAEACu;
            goto label_1daeac;
        }
    }
    ctx->pc = 0x1DAEA4u;
label_1daea4:
    // 0x1daea4: 0xac450134  sw          $a1, 0x134($v0)
    ctx->pc = 0x1daea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 5));
label_1daea8:
    // 0x1daea8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1daea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1daeac:
    // 0x1daeac: 0x0  nop
    ctx->pc = 0x1daeacu;
    // NOP
label_1daeb0:
    // 0x1daeb0: 0x0  nop
    ctx->pc = 0x1daeb0u;
    // NOP
label_1daeb4:
    // 0x1daeb4: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
label_1daeb8:
    if (ctx->pc == 0x1DAEB8u) {
        ctx->pc = 0x1DAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEB4u;
        // 0x1daeb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEBCu;
        goto label_1daebc;
    }
    ctx->pc = 0x1DAEB4u;
    {
        const bool branch_taken_0x1daeb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEB4u;
        // 0x1daeb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daeb4) {
            ctx->pc = 0x1DAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dae98;
        }
    }
    ctx->pc = 0x1DAEBCu;
label_1daebc:
    // 0x1daebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1daebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1daec0:
    // 0x1daec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1daec4:
    // 0x1daec4: 0x3e00008  jr          $ra
label_1daec8:
    if (ctx->pc == 0x1DAEC8u) {
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAECCu;
        goto label_fallthrough_0x1daec4;
    }
    ctx->pc = 0x1DAEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1daec4:
    ctx->pc = 0x1DAECCu;
}
