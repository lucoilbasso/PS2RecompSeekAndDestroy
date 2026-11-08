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

// Function: audioDecCreate
// Address: 0x170e08 - 0x170ed0
void audioDecCreate_0x170e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecCreate_0x170e08");
#endif

    switch (ctx->pc) {
        case 0x170e50u: goto label_170e50;
        case 0x170e64u: goto label_170e64;
        case 0x170e8cu: goto label_170e8c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb8u: goto label_170eb8;
        default: break;
    }

    ctx->pc = 0x170e08u;

    // 0x170e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170e18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x170e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
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
            goto label_170e80;
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
            goto label_170e98;
        }
    }
    ctx->pc = 0x170E80u;
label_170e80:
    // 0x170e80: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x170e84: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x170E84u;
    SET_GPR_U32(ctx, 31, 0x170E8Cu);
    ctx->pc = 0x170E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E84u;
    // 0x170e88: 0x248476b8  addiu       $a0, $a0, 0x76B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x170E84u, 0x170E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E8Cu;
label_170e8c:
    // 0x170e8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x170E8Cu;
    {
        const bool branch_taken_0x170e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E8Cu;
        // 0x170e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e8c) {
            ctx->pc = 0x170EBCu;
            goto label_170ebc;
        }
    }
    ctx->pc = 0x170E94u;
    // 0x170e94: 0x0  nop
    ctx->pc = 0x170e94u;
    // NOP
label_170e98:
    // 0x170e98: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x170E98u;
    SET_GPR_U32(ctx, 31, 0x170EA0u);
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x170E98u, 0x170EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EA0u;
label_170ea0:
    // 0x170ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ea4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x170ea8: 0xc05c560  jal         func_171580
    ctx->pc = 0x170EA8u;
    SET_GPR_U32(ctx, 31, 0x170EB0u);
    ctx->pc = 0x170EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EA8u;
    // 0x170eac: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x170EA8u, 0x170EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB0u;
label_170eb0:
    // 0x170eb0: 0xc05c57c  jal         func_1715F0
    ctx->pc = 0x170EB0u;
    SET_GPR_U32(ctx, 31, 0x170EB8u);
    ctx->pc = 0x170EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EB0u;
    // 0x170eb4: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F0u, 0x170EB0u, 0x170EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB8u;
label_170eb8:
    // 0x170eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ebc:
    // 0x170ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x170EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC8u;
        // 0x170ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170ED0u;
}
