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

// Function: entry_00135ce0
// Address: 0x135ce0 - 0x135d08
void entry_00135ce0_0x135ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ce0_0x135ce0");
#endif

    switch (ctx->pc) {
        case 0x135d00u: goto label_135d00;
        default: break;
    }

    ctx->pc = 0x135ce0u;

    // 0x135ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135ce8: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x135ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x135cec: 0x0  nop
    ctx->pc = 0x135cecu;
    // NOP
    // 0x135cf0: 0x0  nop
    ctx->pc = 0x135cf0u;
    // NOP
    // 0x135cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x135cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x135cf8: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x135CF8u;
    SET_GPR_U32(ctx, 31, 0x135D00u);
    ctx->pc = 0x135CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CF8u;
    // 0x135cfc: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x135CF8u, 0x135D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D00u;
label_135d00:
    // 0x135d00: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x135D00u;
    {
        const bool branch_taken_0x135d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D00u;
        // 0x135d04: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d00) {
            ctx->pc = 0x135E4Cu;
            return;
        }
    }
    ctx->pc = 0x135D08u;
}
