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

// Function: caseD_1f
// Address: 0x165f90 - 0x165fd8
void caseD_1f_0x165f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x165f90");
#endif

    switch (ctx->pc) {
        case 0x165fd0u: goto label_165fd0;
        default: break;
    }

    ctx->pc = 0x165f90u;

    // 0x165f90: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x165f94: 0xc782836c  lwc1        $f2, -0x7C94($gp)
    ctx->pc = 0x165f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x165f98: 0xc441d3b8  lwc1        $f1, -0x2C48($v0)
    ctx->pc = 0x165f98u;
    { uint32_t bits = FAST_READ32(0x25D3B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165f9c: 0xc7808370  lwc1        $f0, -0x7C90($gp)
    ctx->pc = 0x165f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165fa0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x165fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x165fa4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x165fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x165fa8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x165fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x165fac: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x165fb0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x165fb0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x165fb4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x165fb4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x165fb8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x165fb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x165fbc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x165fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x165fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fc4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x165fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fc8: 0xc059478  jal         func_1651E0
    ctx->pc = 0x165FC8u;
    SET_GPR_U32(ctx, 31, 0x165FD0u);
    ctx->pc = 0x165FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FC8u;
    // 0x165fcc: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x165FC8u, 0x165FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FD0u;
label_165fd0:
    // 0x165fd0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x165FD0u;
    {
        const bool branch_taken_0x165fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FD0u;
        // 0x165fd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fd0) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x165FD8u;
}
