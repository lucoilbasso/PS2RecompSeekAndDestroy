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

// Function: _GetRevWeight__7WcActor
// Address: 0x1e1250 - 0x1e129c
void ps2__GetRevWeight__7WcActor_0x1e1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GetRevWeight__7WcActor_0x1e1250");
#endif

    ctx->pc = 0x1e1250u;

    // 0x1e1250: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1e1250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1e1254: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1258: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E1258u;
    {
        const bool branch_taken_0x1e1258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1258) {
            ctx->pc = 0x1E1294u;
            goto label_1e1294;
        }
    }
    ctx->pc = 0x1E1260u;
    // 0x1e1260: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x1e1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1268: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e1268u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e126c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E126Cu;
    {
        const bool branch_taken_0x1e126c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E126Cu;
        // 0x1e1270: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e126c) {
            ctx->pc = 0x1E1288u;
            goto label_1e1288;
        }
    }
    ctx->pc = 0x1E1274u;
    // 0x1e1274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e127c: 0x0  nop
    ctx->pc = 0x1e127cu;
    // NOP
    // 0x1e1280: 0x0  nop
    ctx->pc = 0x1e1280u;
    // NOP
    // 0x1e1284: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e1284u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e1288:
    // 0x1e1288: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x1e1288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1e128c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e1290: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x1e1290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_1e1294:
    // 0x1e1294: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1294u;
        // 0x1e1298: 0xc4800094  lwc1        $f0, 0x94($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E129Cu;
}
