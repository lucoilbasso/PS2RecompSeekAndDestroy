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

// Function: ReleaseAll__5BcObj
// Address: 0x1a0e58 - 0x1a0ec4
void ReleaseAll__5BcObj_0x1a0e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseAll__5BcObj_0x1a0e58");
#endif

    switch (ctx->pc) {
        case 0x1a0e58u: goto label_1a0e58;
        case 0x1a0e5cu: goto label_1a0e5c;
        case 0x1a0e60u: goto label_1a0e60;
        case 0x1a0e64u: goto label_1a0e64;
        case 0x1a0e68u: goto label_1a0e68;
        case 0x1a0e6cu: goto label_1a0e6c;
        case 0x1a0e70u: goto label_1a0e70;
        case 0x1a0e74u: goto label_1a0e74;
        case 0x1a0e78u: goto label_1a0e78;
        case 0x1a0e7cu: goto label_1a0e7c;
        case 0x1a0e80u: goto label_1a0e80;
        case 0x1a0e84u: goto label_1a0e84;
        case 0x1a0e88u: goto label_1a0e88;
        case 0x1a0e8cu: goto label_1a0e8c;
        case 0x1a0e90u: goto label_1a0e90;
        case 0x1a0e94u: goto label_1a0e94;
        case 0x1a0e98u: goto label_1a0e98;
        case 0x1a0e9cu: goto label_1a0e9c;
        case 0x1a0ea0u: goto label_1a0ea0;
        case 0x1a0ea4u: goto label_1a0ea4;
        case 0x1a0ea8u: goto label_1a0ea8;
        case 0x1a0eacu: goto label_1a0eac;
        case 0x1a0eb0u: goto label_1a0eb0;
        case 0x1a0eb4u: goto label_1a0eb4;
        case 0x1a0eb8u: goto label_1a0eb8;
        case 0x1a0ebcu: goto label_1a0ebc;
        case 0x1a0ec0u: goto label_1a0ec0;
        default: break;
    }

    ctx->pc = 0x1a0e58u;

label_1a0e58:
    // 0x1a0e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0e5c:
    // 0x1a0e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a0e60:
    // 0x1a0e60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e64:
    // 0x1a0e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0e68:
    // 0x1a0e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0e6c:
    // 0x1a0e6c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1a0e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a0e70:
    // 0x1a0e70: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1a0e74:
    if (ctx->pc == 0x1A0E74u) {
        ctx->pc = 0x1A0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E70u;
        // 0x1a0e74: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E78u;
        goto label_1a0e78;
    }
    ctx->pc = 0x1A0E70u;
    {
        const bool branch_taken_0x1a0e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e70) {
            ctx->pc = 0x1A0E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0E70u;
            // 0x1a0e74: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0EB0u;
            goto label_1a0eb0;
        }
    }
    ctx->pc = 0x1A0E78u;
label_1a0e78:
    // 0x1a0e78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e7c:
    // 0x1a0e7c: 0x0  nop
    ctx->pc = 0x1a0e7cu;
    // NOP
label_1a0e80:
    // 0x1a0e80: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0e84:
    // 0x1a0e84: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0e88:
    // 0x1a0e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0e8c:
    // 0x1a0e8c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a0e90:
    // 0x1a0e90: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1a0e94:
    // 0x1a0e94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1a0e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0e98:
    // 0x1a0e98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0e9c:
    // 0x1a0e9c: 0x60f809  jalr        $v1
label_1a0ea0:
    if (ctx->pc == 0x1A0EA0u) {
        ctx->pc = 0x1A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E9Cu;
        // 0x1a0ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EA4u;
        goto label_1a0ea4;
    }
    ctx->pc = 0x1A0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0EA4u);
        ctx->pc = 0x1A0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E9Cu;
        // 0x1a0ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E9Cu, 0x1A0EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0EA4u;
label_1a0ea4:
    // 0x1a0ea4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_1a0ea8:
    if (ctx->pc == 0x1A0EA8u) {
        ctx->pc = 0x1A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EA4u;
        // 0x1a0ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EACu;
        goto label_1a0eac;
    }
    ctx->pc = 0x1A0EA4u;
    {
        const bool branch_taken_0x1a0ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EA4u;
        // 0x1a0ea8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ea4) {
            ctx->pc = 0x1A0E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e80;
        }
    }
    ctx->pc = 0x1A0EACu;
label_1a0eac:
    // 0x1a0eac: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a0eb0:
    // 0x1a0eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0eb4:
    // 0x1a0eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a0eb8:
    // 0x1a0eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0ebc:
    // 0x1a0ebc: 0x3e00008  jr          $ra
label_1a0ec0:
    if (ctx->pc == 0x1A0EC0u) {
        ctx->pc = 0x1A0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EBCu;
        // 0x1a0ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EC4u;
        goto label_fallthrough_0x1a0ebc;
    }
    ctx->pc = 0x1A0EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EBCu;
        // 0x1a0ec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a0ebc:
    ctx->pc = 0x1A0EC4u;
}
