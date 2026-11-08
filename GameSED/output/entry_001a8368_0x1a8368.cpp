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

// Function: entry_001a8368
// Address: 0x1a8368 - 0x1a83a0
void entry_001a8368_0x1a8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8368_0x1a8368");
#endif

    switch (ctx->pc) {
        case 0x1a8388u: goto label_1a8388;
        case 0x1a8394u: goto label_1a8394;
        default: break;
    }

    ctx->pc = 0x1a8368u;

    // 0x1a8368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a836c: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A836Cu;
    {
        const bool branch_taken_0x1a836c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a836c) {
            ctx->pc = 0x1A83A0u;
            return;
        }
    }
    ctx->pc = 0x1A8374u;
    // 0x1a8374: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a8374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a837c: 0xc78c8654  lwc1        $f12, -0x79AC($gp)
    ctx->pc = 0x1a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a8380: 0xc072738  jal         func_1C9CE0
    ctx->pc = 0x1A8380u;
    SET_GPR_U32(ctx, 31, 0x1A8388u);
    ctx->pc = 0x1A8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8380u;
    // 0x1a8384: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x1A8380u, 0x1A8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8388u;
label_1a8388:
    // 0x1a8388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a838c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A838Cu;
    SET_GPR_U32(ctx, 31, 0x1A8394u);
    ctx->pc = 0x1A8390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A838Cu;
    // 0x1a8390: 0x26a4d918  addiu       $a0, $s5, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A838Cu, 0x1A8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8394u;
label_1a8394:
    // 0x1a8394: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A8394u;
    {
        const bool branch_taken_0x1a8394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8394u;
        // 0x1a8398: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8394) {
            ctx->pc = 0x1A83C4u;
            return;
        }
    }
    ctx->pc = 0x1A839Cu;
    // 0x1a839c: 0x0  nop
    ctx->pc = 0x1a839cu;
    // NOP
    ctx->pc = 0x1a83a0u;
}
