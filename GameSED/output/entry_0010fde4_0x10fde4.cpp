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

// Function: entry_0010fde4
// Address: 0x10fde4 - 0x10fe0c
void entry_0010fde4_0x10fde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fde4_0x10fde4");
#endif

    switch (ctx->pc) {
        case 0x10fe08u: goto label_10fe08;
        default: break;
    }

    ctx->pc = 0x10fde4u;

    // 0x10fde4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fde8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fdec: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x10fdecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x10fdf0: 0xe6410154  swc1        $f1, 0x154($s2)
    ctx->pc = 0x10fdf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
    // 0x10fdf4: 0x0  nop
    ctx->pc = 0x10fdf4u;
    // NOP
    // 0x10fdf8: 0x0  nop
    ctx->pc = 0x10fdf8u;
    // NOP
    // 0x10fdfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10fdfcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10fe00: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x10FE00u;
    SET_GPR_U32(ctx, 31, 0x10FE08u);
    ctx->pc = 0x10FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE00u;
    // 0x10fe04: 0xe640015c  swc1        $f0, 0x15C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x10FE00u, 0x10FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE08u;
label_10fe08:
    // 0x10fe08: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x10fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
    ctx->pc = 0x10fe0cu;
}
