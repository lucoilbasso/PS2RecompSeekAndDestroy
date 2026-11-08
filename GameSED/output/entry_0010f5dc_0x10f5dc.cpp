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

// Function: entry_0010f5dc
// Address: 0x10f5dc - 0x10f600
void entry_0010f5dc_0x10f5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f5dc_0x10f5dc");
#endif

    switch (ctx->pc) {
        case 0x10f5e4u: goto label_10f5e4;
        default: break;
    }

    ctx->pc = 0x10f5dcu;

    // 0x10f5dc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x10F5DCu;
    SET_GPR_U32(ctx, 31, 0x10F5E4u);
    ctx->pc = 0x10F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5DCu;
    // 0x10f5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x10F5DCu, 0x10F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5E4u;
label_10f5e4:
    // 0x10f5e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f5e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10f5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10f5ec: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x10f5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x10f5f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10f5f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10f5f4: 0x0  nop
    ctx->pc = 0x10f5f4u;
    // NOP
    // 0x10f5f8: 0x0  nop
    ctx->pc = 0x10f5f8u;
    // NOP
    // 0x10f5fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10f5fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    ctx->pc = 0x10f600u;
}
