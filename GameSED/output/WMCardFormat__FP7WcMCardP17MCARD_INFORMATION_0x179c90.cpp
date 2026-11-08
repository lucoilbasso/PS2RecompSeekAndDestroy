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

// Function: WMCardFormat__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179c90 - 0x179d24
void WMCardFormat__FP7WcMCardP17MCARD_INFORMATION_0x179c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardFormat__FP7WcMCardP17MCARD_INFORMATION_0x179c90");
#endif

    switch (ctx->pc) {
        case 0x179cc0u: goto label_179cc0;
        case 0x179cc8u: goto label_179cc8;
        case 0x179ce0u: goto label_179ce0;
        default: break;
    }

    ctx->pc = 0x179c90u;

    // 0x179c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179c98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179c9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ca0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179ca4: 0x24914030  addiu       $s1, $a0, 0x4030
    ctx->pc = 0x179ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x179ca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179cac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x179cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x179cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x179cb4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x179cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179cb8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x179cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x179cbc: 0x0  nop
    ctx->pc = 0x179cbcu;
    // NOP
label_179cc0:
    // 0x179cc0: 0xc071794  jal         func_1C5E50
    ctx->pc = 0x179CC0u;
    SET_GPR_U32(ctx, 31, 0x179CC8u);
    ctx->pc = 0x179CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CC0u;
    // 0x179cc4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5E50u, 0x179CC0u, 0x179CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CC8u;
label_179cc8:
    // 0x179cc8: 0x5440fffd  bnel        $v0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179CC8u;
    {
        const bool branch_taken_0x179cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179cc8) {
            ctx->pc = 0x179CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CC8u;
            // 0x179ccc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179CD0u;
    // 0x179cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cd8: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179CD8u;
    SET_GPR_U32(ctx, 31, 0x179CE0u);
    ctx->pc = 0x179CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CD8u;
    // 0x179cdc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179CD8u, 0x179CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CE0u;
label_179ce0:
    // 0x179ce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179ce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179CE4u;
    {
        const bool branch_taken_0x179ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE4u;
        // 0x179ce8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ce4) {
            ctx->pc = 0x179CF8u;
            goto label_179cf8;
        }
    }
    ctx->pc = 0x179CECu;
    // 0x179cec: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x179cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x179cf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179CF0u;
    {
        const bool branch_taken_0x179cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CF0u;
        // 0x179cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cf0) {
            ctx->pc = 0x179D08u;
            goto label_179d08;
        }
    }
    ctx->pc = 0x179CF8u;
label_179cf8:
    // 0x179cf8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x179cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x179cfc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x179CFCu;
    {
        const bool branch_taken_0x179cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179cfc) {
            ctx->pc = 0x179D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CFCu;
            // 0x179d00: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179D04u;
    // 0x179d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179d08:
    // 0x179d08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179d14: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x179d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x179D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D1Cu;
        // 0x179d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D24u;
}
