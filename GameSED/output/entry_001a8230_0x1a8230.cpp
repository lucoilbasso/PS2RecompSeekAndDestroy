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

// Function: entry_001a8230
// Address: 0x1a8230 - 0x1a8244
void entry_001a8230_0x1a8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8230_0x1a8230");
#endif

    switch (ctx->pc) {
        case 0x1a8240u: goto label_1a8240;
        default: break;
    }

    ctx->pc = 0x1a8230u;

    // 0x1a8230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a8234: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a8234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a8238: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8238u;
    SET_GPR_U32(ctx, 31, 0x1A8240u);
    ctx->pc = 0x1A823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8238u;
    // 0x1a823c: 0x2664d910  addiu       $a0, $s3, -0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8238u, 0x1A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8240u;
label_1a8240:
    // 0x1a8240: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1a8244u;
}
