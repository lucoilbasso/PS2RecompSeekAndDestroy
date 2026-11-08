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

// Function: _fwalk
// Address: 0x1d4e30 - 0x1d4ec4
void _fwalk_0x1d4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fwalk_0x1d4e30");
#endif

    switch (ctx->pc) {
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e34u: goto label_1d4e34;
        case 0x1d4e38u: goto label_1d4e38;
        case 0x1d4e3cu: goto label_1d4e3c;
        case 0x1d4e40u: goto label_1d4e40;
        case 0x1d4e44u: goto label_1d4e44;
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4e4cu: goto label_1d4e4c;
        case 0x1d4e50u: goto label_1d4e50;
        case 0x1d4e54u: goto label_1d4e54;
        case 0x1d4e58u: goto label_1d4e58;
        case 0x1d4e5cu: goto label_1d4e5c;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e64u: goto label_1d4e64;
        case 0x1d4e68u: goto label_1d4e68;
        case 0x1d4e6cu: goto label_1d4e6c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4e78u: goto label_1d4e78;
        case 0x1d4e7cu: goto label_1d4e7c;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e84u: goto label_1d4e84;
        case 0x1d4e88u: goto label_1d4e88;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        default: break;
    }

    ctx->pc = 0x1d4e30u;

label_1d4e30:
    // 0x1d4e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d4e34:
    // 0x1d4e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d4e38:
    // 0x1d4e38: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_1d4e3c:
    // 0x1d4e3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d4e40:
    // 0x1d4e40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d4e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e44:
    // 0x1d4e44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d4e48:
    // 0x1d4e48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d4e48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e4c:
    // 0x1d4e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d4e50:
    // 0x1d4e50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d4e54:
    // 0x1d4e54: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_1d4e58:
    if (ctx->pc == 0x1D4E58u) {
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E54u;
        // 0x1d4e58: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E5Cu;
        goto label_1d4e5c;
    }
    ctx->pc = 0x1D4E54u;
    {
        const bool branch_taken_0x1d4e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E54u;
        // 0x1d4e58: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e54) {
            ctx->pc = 0x1D4EA0u;
            goto label_1d4ea0;
        }
    }
    ctx->pc = 0x1D4E5Cu;
label_1d4e5c:
    // 0x1d4e5c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1d4e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d4e60:
    // 0x1d4e60: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d4e64:
    // 0x1d4e64: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_1d4e68:
    if (ctx->pc == 0x1D4E68u) {
        ctx->pc = 0x1D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E64u;
        // 0x1d4e68: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E6Cu;
        goto label_1d4e6c;
    }
    ctx->pc = 0x1D4E64u;
    {
        const bool branch_taken_0x1d4e64 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E64u;
        // 0x1d4e68: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e64) {
            ctx->pc = 0x1D4E94u;
            goto label_1d4e94;
        }
    }
    ctx->pc = 0x1D4E6Cu;
label_1d4e6c:
    // 0x1d4e6c: 0x0  nop
    ctx->pc = 0x1d4e6cu;
    // NOP
label_1d4e70:
    // 0x1d4e70: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4e74:
    // 0x1d4e74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1d4e78:
    if (ctx->pc == 0x1D4E78u) {
        ctx->pc = 0x1D4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E74u;
        // 0x1d4e78: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E7Cu;
        goto label_1d4e7c;
    }
    ctx->pc = 0x1D4E74u;
    {
        const bool branch_taken_0x1d4e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e74) {
            ctx->pc = 0x1D4E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E74u;
            // 0x1d4e78: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E8Cu;
            goto label_1d4e8c;
        }
    }
    ctx->pc = 0x1D4E7Cu;
label_1d4e7c:
    // 0x1d4e7c: 0x280f809  jalr        $s4
label_1d4e80:
    if (ctx->pc == 0x1D4E80u) {
        ctx->pc = 0x1D4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E7Cu;
        // 0x1d4e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E84u;
        goto label_1d4e84;
    }
    ctx->pc = 0x1D4E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1D4E84u);
        ctx->pc = 0x1D4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E7Cu;
        // 0x1d4e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4E7Cu, 0x1D4E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4E84u;
label_1d4e84:
    // 0x1d4e84: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d4e84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1d4e88:
    // 0x1d4e88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d4e8c:
    // 0x1d4e8c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_1d4e90:
    if (ctx->pc == 0x1D4E90u) {
        ctx->pc = 0x1D4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E8Cu;
        // 0x1d4e90: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E94u;
        goto label_1d4e94;
    }
    ctx->pc = 0x1D4E8Cu;
    {
        const bool branch_taken_0x1d4e8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E8Cu;
        // 0x1d4e90: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e8c) {
            ctx->pc = 0x1D4E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e70;
        }
    }
    ctx->pc = 0x1D4E94u;
label_1d4e94:
    // 0x1d4e94: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d4e98:
    // 0x1d4e98: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_1d4e9c:
    if (ctx->pc == 0x1D4E9Cu) {
        ctx->pc = 0x1D4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E98u;
        // 0x1d4e9c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EA0u;
        goto label_1d4ea0;
    }
    ctx->pc = 0x1D4E98u;
    {
        const bool branch_taken_0x1d4e98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e98) {
            ctx->pc = 0x1D4E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E98u;
            // 0x1d4e9c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e60;
        }
    }
    ctx->pc = 0x1D4EA0u;
label_1d4ea0:
    // 0x1d4ea0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1d4ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ea4:
    // 0x1d4ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4ea8:
    // 0x1d4ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d4eac:
    // 0x1d4eac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4eb0:
    // 0x1d4eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d4eb4:
    // 0x1d4eb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d4eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4eb8:
    // 0x1d4eb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d4eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d4ebc:
    // 0x1d4ebc: 0x3e00008  jr          $ra
label_1d4ec0:
    if (ctx->pc == 0x1D4EC0u) {
        ctx->pc = 0x1D4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EBCu;
        // 0x1d4ec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EC4u;
        goto label_fallthrough_0x1d4ebc;
    }
    ctx->pc = 0x1D4EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EBCu;
        // 0x1d4ec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4ebc:
    ctx->pc = 0x1D4EC4u;
}
