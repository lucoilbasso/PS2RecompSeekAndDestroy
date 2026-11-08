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

// Function: entry_0016c0a0
// Address: 0x16c0a0 - 0x16c0e0
void entry_0016c0a0_0x16c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c0a0_0x16c0a0");
#endif

    switch (ctx->pc) {
        case 0x16c0c8u: goto label_16c0c8;
        default: break;
    }

    ctx->pc = 0x16c0a0u;

    // 0x16c0a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x16c0a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c0a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16c0a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c0ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c0b0: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x16c0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
    // 0x16c0b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16C0B4u;
    {
        const bool branch_taken_0x16c0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B4u;
        // 0x16c0b8: 0xe641020c  swc1        $f1, 0x20C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0b4) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16C0BCu;
    // 0x16c0bc: 0x0  nop
    ctx->pc = 0x16c0bcu;
    // NOP
    // 0x16c0c0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16C0C0u;
    SET_GPR_U32(ctx, 31, 0x16C0C8u);
    ctx->pc = 0x16C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0C0u;
    // 0x16c0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16C0C0u, 0x16C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0C8u;
label_16c0c8:
    // 0x16c0c8: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x16c0cc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x16c0d0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16c0d4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x16c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x16c0d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16c0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x16c0dc: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x16c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    ctx->pc = 0x16c0e0u;
}
