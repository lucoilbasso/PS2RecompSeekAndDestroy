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

// Function: entry_001438f0
// Address: 0x1438f0 - 0x14391c
void entry_001438f0_0x1438f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001438f0_0x1438f0");
#endif

    switch (ctx->pc) {
        case 0x143910u: goto label_143910;
        default: break;
    }

    ctx->pc = 0x1438f0u;

    // 0x1438f0: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x1438f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1438f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1438f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1438f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1438fc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1438FCu;
    {
        const bool branch_taken_0x1438fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1438fc) {
            ctx->pc = 0x143900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1438FCu;
            // 0x143900: 0x82c20001  lb          $v0, 0x1($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14391Cu;
            return;
        }
    }
    ctx->pc = 0x143904u;
    // 0x143904: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x143904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x143908: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x143908u;
    SET_GPR_U32(ctx, 31, 0x143910u);
    ctx->pc = 0x14390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143908u;
    // 0x14390c: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x143908u, 0x143910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143910u;
label_143910:
    // 0x143910: 0x21023  negu        $v0, $v0
    ctx->pc = 0x143910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x143914: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x143914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
    // 0x143918: 0x82c20001  lb          $v0, 0x1($s6)
    ctx->pc = 0x143918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    ctx->pc = 0x14391cu;
}
