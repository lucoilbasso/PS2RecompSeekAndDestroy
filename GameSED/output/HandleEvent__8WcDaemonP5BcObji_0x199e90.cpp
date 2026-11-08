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

// Function: HandleEvent__8WcDaemonP5BcObji
// Address: 0x199e90 - 0x199f2c
void HandleEvent__8WcDaemonP5BcObji_0x199e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__8WcDaemonP5BcObji_0x199e90");
#endif

    switch (ctx->pc) {
        case 0x199eb4u: goto label_199eb4;
        case 0x199ef0u: goto label_199ef0;
        default: break;
    }

    ctx->pc = 0x199e90u;

    // 0x199e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199e98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x199e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ea4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x199ea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x199ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x199eac: 0xc06851a  jal         func_1A1468
    ctx->pc = 0x199EACu;
    SET_GPR_U32(ctx, 31, 0x199EB4u);
    ctx->pc = 0x199EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EACu;
    // 0x199eb0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1468u, 0x199EACu, 0x199EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EB4u;
label_199eb4:
    // 0x199eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199eb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x199eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199ebc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x199ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x199ec0: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x199EC0u;
    {
        const bool branch_taken_0x199ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199ec0) {
            ctx->pc = 0x199EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199EC0u;
            // 0x199ec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EC8u;
    // 0x199ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199ecc: 0x56420012  bnel        $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x199ECCu;
    {
        const bool branch_taken_0x199ecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x199ecc) {
            ctx->pc = 0x199ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199ECCu;
            // 0x199ed0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199ED4u;
    // 0x199ed4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x199ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x199ed8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x199ED8u;
    {
        const bool branch_taken_0x199ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ed8) {
            ctx->pc = 0x199EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199ED8u;
            // 0x199edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EE0u;
    // 0x199ee0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x199ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x199ee4: 0x5880000c  blezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x199EE4u;
    {
        const bool branch_taken_0x199ee4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x199ee4) {
            ctx->pc = 0x199EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199EE4u;
            // 0x199ee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199F18u;
            goto label_199f18;
        }
    }
    ctx->pc = 0x199EECu;
    // 0x199eec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x199eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199ef0:
    // 0x199ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199ef4: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x199EF4u;
    {
        const bool branch_taken_0x199ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x199ef4) {
            ctx->pc = 0x199EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199EF4u;
            // 0x199ef8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199EFCu;
            goto label_199efc;
        }
    }
    ctx->pc = 0x199EFCu;
label_199efc:
    // 0x199efc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x199f00: 0x0  nop
    ctx->pc = 0x199f00u;
    // NOP
    // 0x199f04: 0x0  nop
    ctx->pc = 0x199f04u;
    // NOP
    // 0x199f08: 0x0  nop
    ctx->pc = 0x199f08u;
    // NOP
    // 0x199f0c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199F0Cu;
    {
        const bool branch_taken_0x199f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F0Cu;
        // 0x199f10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f0c) {
            ctx->pc = 0x199EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ef0;
        }
    }
    ctx->pc = 0x199F14u;
    // 0x199f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199f18:
    // 0x199f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199f20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x199f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199f24: 0x3e00008  jr          $ra
    ctx->pc = 0x199F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F24u;
        // 0x199f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F2Cu;
}
