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

// Function: ApRsc3DSelectImageClass__FP8ApcRsc3Di
// Address: 0x145e58 - 0x145ed0
void ApRsc3DSelectImageClass__FP8ApcRsc3Di_0x145e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSelectImageClass__FP8ApcRsc3Di_0x145e58");
#endif

    switch (ctx->pc) {
        case 0x145ebcu: goto label_145ebc;
        default: break;
    }

    ctx->pc = 0x145e58u;

    // 0x145e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145e64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x145e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e68: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x145E68u;
    {
        const bool branch_taken_0x145e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x145E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E68u;
        // 0x145e6c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e68) {
            ctx->pc = 0x145EA8u;
            goto label_145ea8;
        }
    }
    ctx->pc = 0x145E70u;
    // 0x145e70: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x145e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145e74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x145E74u;
    {
        const bool branch_taken_0x145e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e74) {
            ctx->pc = 0x145E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145E74u;
            // 0x145e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145E90u;
            goto label_145e90;
        }
    }
    ctx->pc = 0x145E7Cu;
    // 0x145e7c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x145E7Cu;
    {
        const bool branch_taken_0x145e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E7Cu;
        // 0x145e80: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e7c) {
            ctx->pc = 0x145EA0u;
            goto label_145ea0;
        }
    }
    ctx->pc = 0x145E84u;
    // 0x145e84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145E84u;
    {
        const bool branch_taken_0x145e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E84u;
        // 0x145e88: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e84) {
            ctx->pc = 0x145EB0u;
            goto label_145eb0;
        }
    }
    ctx->pc = 0x145E8Cu;
    // 0x145e8c: 0x0  nop
    ctx->pc = 0x145e8cu;
    // NOP
label_145e90:
    // 0x145e90: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145E90u;
    {
        const bool branch_taken_0x145e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x145e90) {
            ctx->pc = 0x145E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145E90u;
            // 0x145e94: 0x8c90005c  lw          $s0, 0x5C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145EBCu;
            goto label_145ebc;
        }
    }
    ctx->pc = 0x145E98u;
    // 0x145e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145E98u;
    {
        const bool branch_taken_0x145e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E98u;
        // 0x145e9c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e98) {
            ctx->pc = 0x145EB0u;
            goto label_145eb0;
        }
    }
    ctx->pc = 0x145EA0u;
label_145ea0:
    // 0x145ea0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145EA0u;
    {
        const bool branch_taken_0x145ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EA0u;
        // 0x145ea4: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ea0) {
            ctx->pc = 0x145EBCu;
            goto label_145ebc;
        }
    }
    ctx->pc = 0x145EA8u;
label_145ea8:
    // 0x145ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145EA8u;
    {
        const bool branch_taken_0x145ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EA8u;
        // 0x145eac: 0x8c900024  lw          $s0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ea8) {
            ctx->pc = 0x145EBCu;
            goto label_145ebc;
        }
    }
    ctx->pc = 0x145EB0u;
label_145eb0:
    // 0x145eb0: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x145eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x145eb4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145EB4u;
    SET_GPR_U32(ctx, 31, 0x145EBCu);
    ctx->pc = 0x145EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EB4u;
    // 0x145eb8: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145EB4u, 0x145EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EBCu;
label_145ebc:
    // 0x145ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x145ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ec4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x145EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EC8u;
        // 0x145ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145ED0u;
}
