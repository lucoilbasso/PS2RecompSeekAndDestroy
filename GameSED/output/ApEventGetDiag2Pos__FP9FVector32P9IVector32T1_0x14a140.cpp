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

// Function: ApEventGetDiag2Pos__FP9FVector32P9IVector32T1
// Address: 0x14a140 - 0x14a214
void ApEventGetDiag2Pos__FP9FVector32P9IVector32T1_0x14a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventGetDiag2Pos__FP9FVector32P9IVector32T1_0x14a140");
#endif

    ctx->pc = 0x14a140u;

    // 0x14a140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a144: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A144u;
    {
        const bool branch_taken_0x14a144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A144u;
        // 0x14a148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a144) {
            ctx->pc = 0x14A150u;
            goto label_14a150;
        }
    }
    ctx->pc = 0x14A14Cu;
    // 0x14a14c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14a150:
    // 0x14a150: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14a154: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a158: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x14a158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a15c: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a15cu;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a160: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14a164: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x14a164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a168: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a16c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14a170: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x14a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14a174: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14a17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a184: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14a184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a188: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14a18c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a190: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A190u;
    {
        const bool branch_taken_0x14a190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A190u;
        // 0x14a194: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a190) {
            ctx->pc = 0x14A19Cu;
            goto label_14a19c;
        }
    }
    ctx->pc = 0x14A198u;
    // 0x14a198: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x14a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_14a19c:
    // 0x14a19c: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x14a19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a1a0: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a1a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a1a4: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a1a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14a1a8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x14a1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a1ac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14a1b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a1b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a1b8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x14a1bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14a1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14a1d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a1d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14a1d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14a1d8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A1D8u;
    {
        const bool branch_taken_0x14a1d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1D8u;
        // 0x14a1dc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1d8) {
            ctx->pc = 0x14A1E4u;
            goto label_14a1e4;
        }
    }
    ctx->pc = 0x14A1E0u;
    // 0x14a1e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_14a1e4:
    // 0x14a1e4: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x14a1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a1e8: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a1e8u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a1ec: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14a1f0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a1f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a1fc: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x14a200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a208: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A20Cu;
        // 0x14a210: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A214u;
}
