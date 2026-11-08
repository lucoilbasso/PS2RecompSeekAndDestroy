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

// Function: MemoryBankInfoInit__9ApcObjRscii
// Address: 0x1d6dc0 - 0x1d6eb8
void MemoryBankInfoInit__9ApcObjRscii_0x1d6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MemoryBankInfoInit__9ApcObjRscii_0x1d6dc0");
#endif

    switch (ctx->pc) {
        case 0x1d6e04u: goto label_1d6e04;
        case 0x1d6e20u: goto label_1d6e20;
        case 0x1d6e40u: goto label_1d6e40;
        case 0x1d6e68u: goto label_1d6e68;
        case 0x1d6e84u: goto label_1d6e84;
        default: break;
    }

    ctx->pc = 0x1d6dc0u;

    // 0x1d6dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6dd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d6dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d6dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d6dd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ddc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d6ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d6de0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d6de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d6de4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d6de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d6de8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d6de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d6dec: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x1d6decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x1d6df0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6DF0u;
    {
        const bool branch_taken_0x1d6df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF0u;
        // 0x1d6df4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6df0) {
            ctx->pc = 0x1D6DFCu;
            goto label_1d6dfc;
        }
    }
    ctx->pc = 0x1D6DF8u;
    // 0x1d6df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6dfc:
    // 0x1d6dfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6DFCu;
    SET_GPR_U32(ctx, 31, 0x1D6E04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6DFCu, 0x1D6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E04u;
label_1d6e04:
    // 0x1d6e04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6E04u;
    {
        const bool branch_taken_0x1d6e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E04u;
        // 0x1d6e08: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e04) {
            ctx->pc = 0x1D6E20u;
            goto label_1d6e20;
        }
    }
    ctx->pc = 0x1D6E0Cu;
    // 0x1d6e0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e14: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x1d6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
    // 0x1d6e18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6E18u;
    SET_GPR_U32(ctx, 31, 0x1D6E20u);
    ctx->pc = 0x1D6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E18u;
    // 0x1d6e1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6E18u, 0x1D6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E20u;
label_1d6e20:
    // 0x1d6e20: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d6e24: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6E24u;
    {
        const bool branch_taken_0x1d6e24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E24u;
        // 0x1d6e28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e24) {
            ctx->pc = 0x1D6E94u;
            goto label_1d6e94;
        }
    }
    ctx->pc = 0x1D6E2Cu;
    // 0x1d6e2c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1d6e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e30: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1d6e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e34: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1d6e38: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1d6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d6e3c: 0x0  nop
    ctx->pc = 0x1d6e3cu;
    // NOP
label_1d6e40:
    // 0x1d6e40: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d6e44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e54: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6E54u;
    {
        const bool branch_taken_0x1d6e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E54u;
        // 0x1d6e58: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e54) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E5Cu;
    // 0x1d6e5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6e60:
    // 0x1d6e60: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6E60u;
    SET_GPR_U32(ctx, 31, 0x1D6E68u);
    ctx->pc = 0x1D6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E60u;
    // 0x1d6e64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6E60u, 0x1D6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E68u;
label_1d6e68:
    // 0x1d6e68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e6c: 0x26a51998  addiu       $a1, $s5, 0x1998
    ctx->pc = 0x1d6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x1d6e70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6E74u;
    {
        const bool branch_taken_0x1d6e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E74u;
        // 0x1d6e78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e74) {
            ctx->pc = 0x1D6E84u;
            goto label_1d6e84;
        }
    }
    ctx->pc = 0x1D6E7Cu;
    // 0x1d6e7c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E84u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6E7Cu, 0x1D6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E84u;
label_1d6e84:
    // 0x1d6e84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d6e88: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d6e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6e8c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D6E8Cu;
    {
        const bool branch_taken_0x1d6e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e8c) {
            ctx->pc = 0x1D6E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6E8Cu;
            // 0x1d6e90: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6e40;
        }
    }
    ctx->pc = 0x1D6E94u;
label_1d6e94:
    // 0x1d6e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6e9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6ea0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d6ea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6ea4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6ea8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d6ea8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d6eac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d6eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EB0u;
        // 0x1d6eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6EB8u;
}
