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

// Function: entry_0013b238
// Address: 0x13b238 - 0x13b278
void entry_0013b238_0x13b238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b238_0x13b238");
#endif

    switch (ctx->pc) {
        case 0x13b264u: goto label_13b264;
        default: break;
    }

    ctx->pc = 0x13b238u;

    // 0x13b238: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x13B238u;
    {
        const bool branch_taken_0x13b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B238u;
        // 0x13b23c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b238) {
            ctx->pc = 0x13B384u;
            return;
        }
    }
    ctx->pc = 0x13B240u;
    // 0x13b240: 0xc6150170  lwc1        $f21, 0x170($s0)
    ctx->pc = 0x13b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13b244: 0xc60c01fc  lwc1        $f12, 0x1FC($s0)
    ctx->pc = 0x13b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b248: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13b248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13b24c: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x13b24cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    // 0x13b250: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x13b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x13b254: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13b254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x13b258: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x13b258u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x13b25c: 0xc067bea  jal         func_19EFA8
    ctx->pc = 0x13B25Cu;
    SET_GPR_U32(ctx, 31, 0x13B264u);
    ctx->pc = 0x13B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B25Cu;
    // 0x13b260: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EFA8u, 0x13B25Cu, 0x13B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B264u;
label_13b264:
    // 0x13b264: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x13b264u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b268: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B268u;
    {
        const bool branch_taken_0x13b268 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B268u;
        // 0x13b26c: 0xc6140174  lwc1        $f20, 0x174($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b268) {
            ctx->pc = 0x13B278u;
            return;
        }
    }
    ctx->pc = 0x13B270u;
    // 0x13b270: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x13b270u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x13b274: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13b278u;
}
