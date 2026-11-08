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

// Function: entry_00109968
// Address: 0x109968 - 0x1099ac
void entry_00109968_0x109968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109968_0x109968");
#endif

    switch (ctx->pc) {
        case 0x109970u: goto label_109970;
        case 0x109984u: goto label_109984;
        case 0x1099a4u: goto label_1099a4;
        default: break;
    }

    ctx->pc = 0x109968u;

    // 0x109968: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109968u;
    SET_GPR_U32(ctx, 31, 0x109970u);
    ctx->pc = 0x10996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109968u;
    // 0x10996c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109968u, 0x109970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109970u;
label_109970:
    // 0x109970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10997c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10997Cu;
    SET_GPR_U32(ctx, 31, 0x109984u);
    ctx->pc = 0x109980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10997Cu;
    // 0x109980: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10997Cu, 0x109984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109984u;
label_109984:
    // 0x109984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10998c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109994: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10999c: 0xc0640ca  jal         func_190328
    ctx->pc = 0x10999Cu;
    SET_GPR_U32(ctx, 31, 0x1099A4u);
    ctx->pc = 0x1099A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10999Cu;
    // 0x1099a0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x10999Cu, 0x1099A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1099A4u;
label_1099a4:
    // 0x1099a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1099a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1099a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1099a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1099acu;
}
