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

// Function: entry_00110110
// Address: 0x110110 - 0x110148
void entry_00110110_0x110110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110110_0x110110");
#endif

    switch (ctx->pc) {
        case 0x110120u: goto label_110120;
        case 0x11012cu: goto label_11012c;
        default: break;
    }

    ctx->pc = 0x110110u;

    // 0x110110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110114: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x110114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x110118: 0xc04110c  jal         func_104430
    ctx->pc = 0x110118u;
    SET_GPR_U32(ctx, 31, 0x110120u);
    ctx->pc = 0x11011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110118u;
    // 0x11011c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110118u, 0x110120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110120u;
label_110120:
    // 0x110120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110124: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x110124u;
    SET_GPR_U32(ctx, 31, 0x11012Cu);
    ctx->pc = 0x110128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110124u;
    // 0x110128: 0x8c510164  lw          $s1, 0x164($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x110124u, 0x11012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11012Cu;
label_11012c:
    // 0x11012c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x110130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x110134: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x110134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x110138: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x110138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x11013c: 0x0  nop
    ctx->pc = 0x11013cu;
    // NOP
    // 0x110140: 0x0  nop
    ctx->pc = 0x110140u;
    // NOP
    // 0x110144: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x110144u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    ctx->pc = 0x110148u;
}
