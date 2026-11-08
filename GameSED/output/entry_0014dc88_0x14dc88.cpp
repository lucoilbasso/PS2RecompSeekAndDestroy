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

// Function: entry_0014dc88
// Address: 0x14dc88 - 0x14dd10
void entry_0014dc88_0x14dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc88_0x14dc88");
#endif

    switch (ctx->pc) {
        case 0x14dca4u: goto label_14dca4;
        case 0x14dcb0u: goto label_14dcb0;
        case 0x14dcbcu: goto label_14dcbc;
        case 0x14dcc8u: goto label_14dcc8;
        case 0x14dcd4u: goto label_14dcd4;
        default: break;
    }

    ctx->pc = 0x14dc88u;

    // 0x14dc88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14dc8c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14dc90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14dc94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x14dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14dc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14dc9c: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DC9Cu;
    SET_GPR_U32(ctx, 31, 0x14DCA4u);
    ctx->pc = 0x14DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC9Cu;
    // 0x14dca0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DC9Cu, 0x14DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCA4u;
label_14dca4:
    // 0x14dca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dca8: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCA8u;
    SET_GPR_U32(ctx, 31, 0x14DCB0u);
    ctx->pc = 0x14DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCA8u;
    // 0x14dcac: 0x8c570010  lw          $s7, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCA8u, 0x14DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB0u;
label_14dcb0:
    // 0x14dcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcb4: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCB4u;
    SET_GPR_U32(ctx, 31, 0x14DCBCu);
    ctx->pc = 0x14DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCB4u;
    // 0x14dcb8: 0x8c560014  lw          $s6, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCB4u, 0x14DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCBCu;
label_14dcbc:
    // 0x14dcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcc0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCC0u;
    SET_GPR_U32(ctx, 31, 0x14DCC8u);
    ctx->pc = 0x14DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCC0u;
    // 0x14dcc4: 0x8c540018  lw          $s4, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCC0u, 0x14DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCC8u;
label_14dcc8:
    // 0x14dcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dccc: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14DCCCu;
    SET_GPR_U32(ctx, 31, 0x14DCD4u);
    ctx->pc = 0x14DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCCCu;
    // 0x14dcd0: 0x8c55001c  lw          $s5, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14DCCCu, 0x14DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCD4u;
label_14dcd4:
    // 0x14dcd4: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x14DCD4u;
    {
        const bool branch_taken_0x14dcd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCD4u;
        // 0x14dcd8: 0x8c520020  lw          $s2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcd4) {
            ctx->pc = 0x14DD10u;
            return;
        }
    }
    ctx->pc = 0x14DCDCu;
    // 0x14dcdc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14dcdcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14dce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14dce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14dce4: 0xc78181cc  lwc1        $f1, -0x7E34($gp)
    ctx->pc = 0x14dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14dcec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14dcf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14dcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14dcf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14dcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14dcf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dcf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14dcfc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14dcfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14dd00: 0x705310c8  pmaxw       $v0, $v0, $s3
    ctx->pc = 0x14dd00u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x14dd04: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14dd08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DD08u;
    {
        const bool branch_taken_0x14dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DD08u;
        // 0x14dd0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd08) {
            ctx->pc = 0x14DD18u;
            return;
        }
    }
    ctx->pc = 0x14DD10u;
}
