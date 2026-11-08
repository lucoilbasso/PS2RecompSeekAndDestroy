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

// Function: WHitpolySearchPBDThrough__FP15WHitpolyPackageP19_BarrierHitScanWork
// Address: 0x182fd8 - 0x183044
void WHitpolySearchPBDThrough__FP15WHitpolyPackageP19_BarrierHitScanWork_0x182fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPBDThrough__FP15WHitpolyPackageP19_BarrierHitScanWork_0x182fd8");
#endif

    switch (ctx->pc) {
        case 0x18301cu: goto label_18301c;
        default: break;
    }

    ctx->pc = 0x182fd8u;

    // 0x182fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182fdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x182fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x182fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fe4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x182fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x182fe8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x182fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x182fec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x182fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x182ff0: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x182ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182ff4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x182ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182ff8: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x182ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x182ffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182FFCu;
    {
        const bool branch_taken_0x182ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FFCu;
        // 0x183000: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ffc) {
            ctx->pc = 0x183014u;
            goto label_183014;
        }
    }
    ctx->pc = 0x183004u;
    // 0x183004: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x183004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x183008: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x183008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x18300c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x183010: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x183010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_183014:
    // 0x183014: 0xc060300  jal         func_180C00
    ctx->pc = 0x183014u;
    SET_GPR_U32(ctx, 31, 0x18301Cu);
    ctx->pc = 0x183018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183014u;
    // 0x183018: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x183014u, 0x18301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18301Cu;
label_18301c:
    // 0x18301c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18301Cu;
    {
        const bool branch_taken_0x18301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18301Cu;
        // 0x183020: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18301c) {
            ctx->pc = 0x183034u;
            goto label_183034;
        }
    }
    ctx->pc = 0x183024u;
    // 0x183024: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x183028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18302c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x18302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x183030: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x183030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_183034:
    // 0x183034: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x183034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x183038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18303c: 0x3e00008  jr          $ra
    ctx->pc = 0x18303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18303Cu;
        // 0x183040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183044u;
}
