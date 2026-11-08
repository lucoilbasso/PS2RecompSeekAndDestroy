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

// Function: caseD_13
// Address: 0x1338e8 - 0x133940
void caseD_13_0x1338e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1338e8");
#endif

    switch (ctx->pc) {
        case 0x1338f0u: goto label_1338f0;
        case 0x1338f8u: goto label_1338f8;
        default: break;
    }

    ctx->pc = 0x1338e8u;

    // 0x1338e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1338E8u;
    SET_GPR_U32(ctx, 31, 0x1338F0u);
    ctx->pc = 0x1338ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338E8u;
    // 0x1338ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1338E8u, 0x1338F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338F0u;
label_1338f0:
    // 0x1338f0: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x1338F0u;
    SET_GPR_U32(ctx, 31, 0x1338F8u);
    ctx->pc = 0x1338F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338F0u;
    // 0x1338f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1338F0u, 0x1338F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x8ea50328  lw          $a1, 0x328($s5)
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x1338fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1338fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133900: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x133904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x133904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133908: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x133908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13390c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x133910: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x133910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133918: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x133918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13391c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13391cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x133920: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x133924: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x133924u;
    {
        const bool branch_taken_0x133924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133924u;
        // 0x133928: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133924) {
            ctx->pc = 0x133940u;
            return;
        }
    }
    ctx->pc = 0x13392Cu;
    // 0x13392c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13392cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x133930: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x133934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x133934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x133938: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x133938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13393c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x133940u;
}
