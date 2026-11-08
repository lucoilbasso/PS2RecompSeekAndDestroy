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

// Function: entry_001262b8
// Address: 0x1262b8 - 0x1262e8
void entry_001262b8_0x1262b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001262b8_0x1262b8");
#endif

    switch (ctx->pc) {
        case 0x1262c4u: goto label_1262c4;
        default: break;
    }

    ctx->pc = 0x1262b8u;

    // 0x1262b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1262b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1262bc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1262BCu;
    SET_GPR_U32(ctx, 31, 0x1262C4u);
    ctx->pc = 0x1262C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1262BCu;
    // 0x1262c0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1262BCu, 0x1262C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262C4u;
label_1262c4:
    // 0x1262c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1262c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262c8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1262c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1262cc: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1262ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1262d0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1262D0u;
    {
        const bool branch_taken_0x1262d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1262D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262D0u;
        // 0x1262d4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262d0) {
            ctx->pc = 0x1262E8u;
            return;
        }
    }
    ctx->pc = 0x1262D8u;
    // 0x1262d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1262d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1262dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1262E0u;
    {
        const bool branch_taken_0x1262e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262E0u;
        // 0x1262e4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262e0) {
            ctx->pc = 0x1262F8u;
            return;
        }
    }
    ctx->pc = 0x1262E8u;
}
