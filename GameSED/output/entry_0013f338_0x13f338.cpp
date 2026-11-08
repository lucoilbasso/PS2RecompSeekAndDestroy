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

// Function: entry_0013f338
// Address: 0x13f338 - 0x13f368
void entry_0013f338_0x13f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f338_0x13f338");
#endif

    switch (ctx->pc) {
        case 0x13f360u: goto label_13f360;
        default: break;
    }

    ctx->pc = 0x13f338u;

    // 0x13f338: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x13f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f344: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x13f344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x13f348: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13f348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x13f34c: 0x0  nop
    ctx->pc = 0x13f34cu;
    // NOP
    // 0x13f350: 0x0  nop
    ctx->pc = 0x13f350u;
    // NOP
    // 0x13f354: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13f354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13f358: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x13F358u;
    SET_GPR_U32(ctx, 31, 0x13F360u);
    ctx->pc = 0x13F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F358u;
    // 0x13f35c: 0xe621015c  swc1        $f1, 0x15C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x13F358u, 0x13F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F360u;
label_13f360:
    // 0x13f360: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x13f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x13f364: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x13f364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
    ctx->pc = 0x13f368u;
}
