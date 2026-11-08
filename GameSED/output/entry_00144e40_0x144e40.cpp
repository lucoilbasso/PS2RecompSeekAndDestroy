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

// Function: entry_00144e40
// Address: 0x144e40 - 0x144ef4
void entry_00144e40_0x144e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e40_0x144e40");
#endif

    switch (ctx->pc) {
        case 0x144e50u: goto label_144e50;
        case 0x144e64u: goto label_144e64;
        case 0x144e78u: goto label_144e78;
        case 0x144e8cu: goto label_144e8c;
        case 0x144ea0u: goto label_144ea0;
        default: break;
    }

    ctx->pc = 0x144e40u;

    // 0x144e40: 0x14820091  bne         $a0, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x144E40u;
    {
        const bool branch_taken_0x144e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x144e40) {
            ctx->pc = 0x145088u;
            return;
        }
    }
    ctx->pc = 0x144E48u;
    // 0x144e48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E48u;
    SET_GPR_U32(ctx, 31, 0x144E50u);
    ctx->pc = 0x144E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E48u;
    // 0x144e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E48u, 0x144E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E50u;
label_144e50:
    // 0x144e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e5c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E5Cu;
    SET_GPR_U32(ctx, 31, 0x144E64u);
    ctx->pc = 0x144E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E5Cu;
    // 0x144e60: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E5Cu, 0x144E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E64u;
label_144e64:
    // 0x144e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e70: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E70u;
    SET_GPR_U32(ctx, 31, 0x144E78u);
    ctx->pc = 0x144E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E70u;
    // 0x144e74: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E70u, 0x144E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E78u;
label_144e78:
    // 0x144e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E84u;
    SET_GPR_U32(ctx, 31, 0x144E8Cu);
    ctx->pc = 0x144E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E84u;
    // 0x144e88: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E84u, 0x144E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E8Cu;
label_144e8c:
    // 0x144e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e98: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144E98u;
    SET_GPR_U32(ctx, 31, 0x144EA0u);
    ctx->pc = 0x144E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E98u;
    // 0x144e9c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144E98u, 0x144EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EA0u;
label_144ea0:
    // 0x144ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ea4: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144ea8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x144eac: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x144eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144eb8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x144eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x144ebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144ec0: 0xe4544004  swc1        $f20, 0x4004($v0)
    ctx->pc = 0x144ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16388), bits); }
    // 0x144ec4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x144ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144ecc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x144eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144ed0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144ed4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144ed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144ed8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x144ED8u;
    {
        const bool branch_taken_0x144ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144ed8) {
            ctx->pc = 0x144EF4u;
            return;
        }
    }
    ctx->pc = 0x144EE0u;
    // 0x144ee0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x144ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x144ee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x144ee8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144eec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x144eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144ef0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x144ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x144ef4u;
}
