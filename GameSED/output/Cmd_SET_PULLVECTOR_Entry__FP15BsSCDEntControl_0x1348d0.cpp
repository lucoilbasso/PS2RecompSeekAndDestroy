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

// Function: Cmd_SET_PULLVECTOR_Entry__FP15BsSCDEntControl
// Address: 0x1348d0 - 0x134960
void Cmd_SET_PULLVECTOR_Entry__FP15BsSCDEntControl_0x1348d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_PULLVECTOR_Entry__FP15BsSCDEntControl_0x1348d0");
#endif

    switch (ctx->pc) {
        case 0x1348e8u: goto label_1348e8;
        case 0x134904u: goto label_134904;
        default: break;
    }

    ctx->pc = 0x1348d0u;

    // 0x1348d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1348d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1348d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1348d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1348d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1348dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1348e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1348E0u;
    SET_GPR_U32(ctx, 31, 0x1348E8u);
    ctx->pc = 0x1348E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348E0u;
    // 0x1348e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1348E0u, 0x1348E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348E8u;
label_1348e8:
    // 0x1348e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1348e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1348ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1348f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1348f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1348f4: 0x6200012  bltz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1348F4u;
    {
        const bool branch_taken_0x1348f4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1348F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348F4u;
        // 0x1348f8: 0x2442ef50  addiu       $v0, $v0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348f4) {
            ctx->pc = 0x134940u;
            goto label_134940;
        }
    }
    ctx->pc = 0x1348FCu;
    // 0x1348fc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1348FCu;
    SET_GPR_U32(ctx, 31, 0x134904u);
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1348FCu, 0x134904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134904u;
label_134904:
    // 0x134904: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x134908: 0x2484a430  addiu       $a0, $a0, -0x5BD0
    ctx->pc = 0x134908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943792));
    // 0x13490c: 0x8c831400  lw          $v1, 0x1400($a0)
    ctx->pc = 0x13490cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134910: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134914: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x134918: 0x8c851400  lw          $a1, 0x1400($a0)
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x13491c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x134920: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x134924: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x134924u;
    {
        const bool branch_taken_0x134924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134924u;
        // 0x134928: 0x2444ef50  addiu       $a0, $v0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134924) {
            ctx->pc = 0x13494Cu;
            goto label_13494c;
        }
    }
    ctx->pc = 0x13492Cu;
    // 0x13492c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x13492cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134930: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x134930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x134934: 0xaf918d90  sw          $s1, -0x7270($gp)
    ctx->pc = 0x134934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 17));
    // 0x134938: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134938u;
    {
        const bool branch_taken_0x134938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134938u;
        // 0x13493c: 0xe7808d94  swc1        $f0, -0x726C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134938) {
            ctx->pc = 0x13494Cu;
            goto label_13494c;
        }
    }
    ctx->pc = 0x134940u;
label_134940:
    // 0x134940: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x134940u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134944: 0xaf808d90  sw          $zero, -0x7270($gp)
    ctx->pc = 0x134944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 0));
    // 0x134948: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x134948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
label_13494c:
    // 0x13494c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13494cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134950: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x134950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134958: 0x3e00008  jr          $ra
    ctx->pc = 0x134958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134958u;
        // 0x13495c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134960u;
}
