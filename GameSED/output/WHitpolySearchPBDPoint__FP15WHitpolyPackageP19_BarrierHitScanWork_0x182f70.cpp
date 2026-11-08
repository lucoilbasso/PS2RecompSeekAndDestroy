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

// Function: WHitpolySearchPBDPoint__FP15WHitpolyPackageP19_BarrierHitScanWork
// Address: 0x182f70 - 0x182fd8
void WHitpolySearchPBDPoint__FP15WHitpolyPackageP19_BarrierHitScanWork_0x182f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolySearchPBDPoint__FP15WHitpolyPackageP19_BarrierHitScanWork_0x182f70");
#endif

    switch (ctx->pc) {
        case 0x182facu: goto label_182fac;
        default: break;
    }

    ctx->pc = 0x182f70u;

    // 0x182f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182f7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x182f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x182f84: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x182f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182f88: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182f8c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x182f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182f90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182F90u;
    {
        const bool branch_taken_0x182f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F90u;
        // 0x182f94: 0x8e080028  lw          $t0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f90) {
            ctx->pc = 0x182FA4u;
            goto label_182fa4;
        }
    }
    ctx->pc = 0x182F98u;
    // 0x182f98: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x182f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x182f9c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x182f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x182fa0: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x182fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_182fa4:
    // 0x182fa4: 0xc060216  jal         func_180858
    ctx->pc = 0x182FA4u;
    SET_GPR_U32(ctx, 31, 0x182FACu);
    ctx->pc = 0x182FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FA4u;
    // 0x182fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180858u, 0x182FA4u, 0x182FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FACu;
label_182fac:
    // 0x182fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182FACu;
    {
        const bool branch_taken_0x182fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FACu;
        // 0x182fb0: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fac) {
            ctx->pc = 0x182FC8u;
            goto label_182fc8;
        }
    }
    ctx->pc = 0x182FB4u;
    // 0x182fb4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182fbc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x182fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x182fc0: 0x8c83dc08  lw          $v1, -0x23F8($a0)
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958088)));
    // 0x182fc4: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x182fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_182fc8:
    // 0x182fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x182fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x182FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FD0u;
        // 0x182fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182FD8u;
}
