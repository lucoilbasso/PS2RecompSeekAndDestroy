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

// Function: DataBankInfoInit__9ApcObjRsci
// Address: 0x1d6ca0 - 0x1d6d24
void DataBankInfoInit__9ApcObjRsci_0x1d6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataBankInfoInit__9ApcObjRsci_0x1d6ca0");
#endif

    switch (ctx->pc) {
        case 0x1d6cccu: goto label_1d6ccc;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6cf8u: goto label_1d6cf8;
        default: break;
    }

    ctx->pc = 0x1d6ca0u;

    // 0x1d6ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cb4: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1d6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1d6cb8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6CB8u;
    {
        const bool branch_taken_0x1d6cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CB8u;
        // 0x1d6cbc: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6cb8) {
            ctx->pc = 0x1D6CC4u;
            goto label_1d6cc4;
        }
    }
    ctx->pc = 0x1D6CC0u;
    // 0x1d6cc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6cc4:
    // 0x1d6cc4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6CC4u;
    SET_GPR_U32(ctx, 31, 0x1D6CCCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6CC4u, 0x1D6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CCCu;
label_1d6ccc:
    // 0x1d6ccc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6CCCu;
    {
        const bool branch_taken_0x1d6ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6CCCu;
        // 0x1d6cd0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ccc) {
            ctx->pc = 0x1D6CE8u;
            goto label_1d6ce8;
        }
    }
    ctx->pc = 0x1D6CD4u;
    // 0x1d6cd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cdc: 0x24a51950  addiu       $a1, $a1, 0x1950
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6480));
    // 0x1d6ce0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6CE0u;
    // 0x1d6ce4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6CE0u, 0x1D6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CE8u;
label_1d6ce8:
    // 0x1d6ce8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d6cec: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6CECu;
    {
        const bool branch_taken_0x1d6cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6cec) {
            ctx->pc = 0x1D6CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6CECu;
            // 0x1d6cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6D18u;
            goto label_1d6d18;
        }
    }
    ctx->pc = 0x1D6CF4u;
    // 0x1d6cf4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6cf8:
    // 0x1d6cf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6cfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d6d00: 0x0  nop
    ctx->pc = 0x1d6d00u;
    // NOP
    // 0x1d6d04: 0x0  nop
    ctx->pc = 0x1d6d04u;
    // NOP
    // 0x1d6d08: 0x0  nop
    ctx->pc = 0x1d6d08u;
    // NOP
    // 0x1d6d0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D6D0Cu;
    {
        const bool branch_taken_0x1d6d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D0Cu;
        // 0x1d6d10: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d0c) {
            ctx->pc = 0x1D6CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6cf8;
        }
    }
    ctx->pc = 0x1D6D14u;
    // 0x1d6d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6d18:
    // 0x1d6d18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d6d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D1Cu;
        // 0x1d6d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D24u;
}
