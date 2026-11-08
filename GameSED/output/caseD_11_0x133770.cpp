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

// Function: caseD_11
// Address: 0x133770 - 0x1337cc
void caseD_11_0x133770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x133770");
#endif

    switch (ctx->pc) {
        case 0x133778u: goto label_133778;
        case 0x133780u: goto label_133780;
        case 0x133798u: goto label_133798;
        case 0x1337acu: goto label_1337ac;
        default: break;
    }

    ctx->pc = 0x133770u;

    // 0x133770: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133770u;
    SET_GPR_U32(ctx, 31, 0x133778u);
    ctx->pc = 0x133774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133770u;
    // 0x133774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133770u, 0x133778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133778u;
label_133778:
    // 0x133778: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x133778u;
    SET_GPR_U32(ctx, 31, 0x133780u);
    ctx->pc = 0x13377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133778u;
    // 0x13377c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133778u, 0x133780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133780u;
label_133780:
    // 0x133780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133784: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x133784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13378c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13378cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133790: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x133790u;
    SET_GPR_U32(ctx, 31, 0x133798u);
    ctx->pc = 0x133794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133790u;
    // 0x133794: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x133790u, 0x133798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133798u;
label_133798:
    // 0x133798: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x133798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13379c: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x13379cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1337a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1337a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337a4: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1337A4u;
    SET_GPR_U32(ctx, 31, 0x1337ACu);
    ctx->pc = 0x1337A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337A4u;
    // 0x1337a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1337A4u, 0x1337ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337ACu;
label_1337ac:
    // 0x1337ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1337acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1337b0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1337b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1337b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1337b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1337b8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1337B8u;
    {
        const bool branch_taken_0x1337b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1337b8) {
            ctx->pc = 0x1337BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1337B8u;
            // 0x1337bc: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1337CCu;
            return;
        }
    }
    ctx->pc = 0x1337C0u;
    // 0x1337c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1337c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1337c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1337c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1337c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1337c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1337ccu;
}
