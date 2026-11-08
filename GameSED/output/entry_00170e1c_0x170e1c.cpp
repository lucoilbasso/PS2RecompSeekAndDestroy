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

// Function: entry_00170e1c
// Address: 0x170e1c - 0x170e80
void entry_00170e1c_0x170e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e1c_0x170e1c");
#endif

    switch (ctx->pc) {
        case 0x170e50u: goto label_170e50;
        case 0x170e64u: goto label_170e64;
        default: break;
    }

    ctx->pc = 0x170e1cu;

    // 0x170e1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170e20: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x170e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x170e24: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x170e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x170e28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x170e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x170e2c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x170e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x170e30: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x170e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x170e34: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x170e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x170e38: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x170e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x170e3c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x170e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x170e40: 0xae070048  sw          $a3, 0x48($s0)
    ctx->pc = 0x170e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 7));
    // 0x170e44: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x170e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x170e48: 0xc06d5b2  jal         func_1B56C8
    ctx->pc = 0x170E48u;
    SET_GPR_U32(ctx, 31, 0x170E50u);
    ctx->pc = 0x170E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E48u;
    // 0x170e4c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B56C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56C8u, 0x170E48u, 0x170E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E50u;
label_170e50:
    // 0x170e50: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x170e54: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x170E54u;
    {
        const bool branch_taken_0x170e54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x170E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E54u;
        // 0x170e58: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e54) {
            ctx->pc = 0x170E80u;
            return;
        }
    }
    ctx->pc = 0x170E5Cu;
    // 0x170e5c: 0xc06d5b2  jal         func_1B56C8
    ctx->pc = 0x170E5Cu;
    SET_GPR_U32(ctx, 31, 0x170E64u);
    ctx->pc = 0x1B56C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56C8u, 0x170E5Cu, 0x170E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E64u;
label_170e64:
    // 0x170e64: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x170e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x170e68: 0x2471bc40  addiu       $s1, $v1, -0x43C0
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949952));
    // 0x170e6c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x170e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x170e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e74: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x170e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x170e78: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170E78u;
    {
        const bool branch_taken_0x170e78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x170E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E78u;
        // 0x170e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e78) {
            ctx->pc = 0x170E98u;
            return;
        }
    }
    ctx->pc = 0x170E80u;
}
