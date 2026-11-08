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

// Function: entry_0014c338
// Address: 0x14c338 - 0x14c374
void entry_0014c338_0x14c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c338_0x14c338");
#endif

    switch (ctx->pc) {
        case 0x14c370u: goto label_14c370;
        default: break;
    }

    ctx->pc = 0x14c338u;

    // 0x14c338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c33c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C33Cu;
    {
        const bool branch_taken_0x14c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c33c) {
            ctx->pc = 0x14C340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C33Cu;
            // 0x14c340: 0x920201ab  lbu         $v0, 0x1AB($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C374u;
            return;
        }
    }
    ctx->pc = 0x14C344u;
    // 0x14c344: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x14c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c348: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x14c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x14c34c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14c34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14c350: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14c354: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14c354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14c358: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x14c358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c35c: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x14c35cu;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c360: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x14c360u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x14c364: 0x8e060258  lw          $a2, 0x258($s0)
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x14c368: 0xc0567f0  jal         func_159FC0
    ctx->pc = 0x14C368u;
    SET_GPR_U32(ctx, 31, 0x14C370u);
    ctx->pc = 0x14C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C368u;
    // 0x14c36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC0u, 0x14C368u, 0x14C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C370u;
label_14c370:
    // 0x14c370: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14c370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    ctx->pc = 0x14c374u;
}
