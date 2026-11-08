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

// Function: _setlocale_r
// Address: 0x1d4ec8 - 0x1d4f54
void _setlocale_r_0x1d4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setlocale_r_0x1d4ec8");
#endif

    switch (ctx->pc) {
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f18u: goto label_1d4f18;
        default: break;
    }

    ctx->pc = 0x1d4ec8u;

    // 0x1d4ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4ed0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d4ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4edc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d4ee0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d4ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ee4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d4ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4eec: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4EECu;
    {
        const bool branch_taken_0x1d4eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EECu;
        // 0x1d4ef0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4eec) {
            ctx->pc = 0x1D4F30u;
            goto label_1d4f30;
        }
    }
    ctx->pc = 0x1D4EF4u;
    // 0x1d4ef4: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1d4ef8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1D4EF8u;
    SET_GPR_U32(ctx, 31, 0x1D4F00u);
    ctx->pc = 0x1D4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EF8u;
    // 0x1d4efc: 0x2665c668  addiu       $a1, $s3, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1D4EF8u, 0x1D4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d4f04: 0x24a5c658  addiu       $a1, $a1, -0x39A8
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
    // 0x1d4f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4F08u;
    {
        const bool branch_taken_0x1d4f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F08u;
        // 0x1d4f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f08) {
            ctx->pc = 0x1D4F20u;
            goto label_1d4f20;
        }
    }
    ctx->pc = 0x1D4F10u;
    // 0x1d4f10: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1D4F10u, 0x1D4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4F18u;
    {
        const bool branch_taken_0x1d4f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f18) {
            ctx->pc = 0x1D4F38u;
            goto label_1d4f38;
        }
    }
    ctx->pc = 0x1D4F20u;
label_1d4f20:
    // 0x1d4f20: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1d4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1d4f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F24u;
    {
        const bool branch_taken_0x1d4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F24u;
        // 0x1d4f28: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f24) {
            ctx->pc = 0x1D4F34u;
            goto label_1d4f34;
        }
    }
    ctx->pc = 0x1D4F2Cu;
    // 0x1d4f2c: 0x0  nop
    ctx->pc = 0x1d4f2cu;
    // NOP
label_1d4f30:
    // 0x1d4f30: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
label_1d4f34:
    // 0x1d4f34: 0x2662c668  addiu       $v0, $s3, -0x3998
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952552));
label_1d4f38:
    // 0x1d4f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4f44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4f48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F4Cu;
        // 0x1d4f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4F54u;
}
