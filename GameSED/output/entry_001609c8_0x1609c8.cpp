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

// Function: entry_001609c8
// Address: 0x1609c8 - 0x1609f0
void entry_001609c8_0x1609c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001609c8_0x1609c8");
#endif

    switch (ctx->pc) {
        case 0x1609d0u: goto label_1609d0;
        default: break;
    }

    ctx->pc = 0x1609c8u;

    // 0x1609c8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1609C8u;
    SET_GPR_U32(ctx, 31, 0x1609D0u);
    ctx->pc = 0x1609CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1609C8u;
    // 0x1609cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1609C8u, 0x1609D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1609d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1609d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1609d8: 0x0  nop
    ctx->pc = 0x1609d8u;
    // NOP
    // 0x1609dc: 0x0  nop
    ctx->pc = 0x1609dcu;
    // NOP
    // 0x1609e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1609e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1609e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1609E4u;
    {
        const bool branch_taken_0x1609e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609E4u;
        // 0x1609e8: 0xe6010fc4  swc1        $f1, 0xFC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609e4) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x1609ECu;
    // 0x1609ec: 0x0  nop
    ctx->pc = 0x1609ecu;
    // NOP
    ctx->pc = 0x1609f0u;
}
