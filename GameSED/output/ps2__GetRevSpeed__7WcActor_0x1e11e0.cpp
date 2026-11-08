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

// Function: _GetRevSpeed__7WcActor
// Address: 0x1e11e0 - 0x1e1230
void ps2__GetRevSpeed__7WcActor_0x1e11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GetRevSpeed__7WcActor_0x1e11e0");
#endif

    ctx->pc = 0x1e11e0u;

    // 0x1e11e0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1e11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1e11e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e11e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e11ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E11ECu;
    {
        const bool branch_taken_0x1e11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e11ec) {
            ctx->pc = 0x1E1228u;
            goto label_1e1228;
        }
    }
    ctx->pc = 0x1E11F4u;
    // 0x1e11f4: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x1e11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e11f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e11f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e11fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e11fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1200: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1200u;
    {
        const bool branch_taken_0x1e1200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1200u;
        // 0x1e1204: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1200) {
            ctx->pc = 0x1E121Cu;
            goto label_1e121c;
        }
    }
    ctx->pc = 0x1E1208u;
    // 0x1e1208: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e1208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e120c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e120cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1210: 0x0  nop
    ctx->pc = 0x1e1210u;
    // NOP
    // 0x1e1214: 0x0  nop
    ctx->pc = 0x1e1214u;
    // NOP
    // 0x1e1218: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e1218u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e121c:
    // 0x1e121c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1e121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1e1220: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e1224: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x1e1224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_1e1228:
    // 0x1e1228: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1228u;
        // 0x1e122c: 0xc4800090  lwc1        $f0, 0x90($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1230u;
}
