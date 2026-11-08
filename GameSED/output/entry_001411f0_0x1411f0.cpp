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

// Function: entry_001411f0
// Address: 0x1411f0 - 0x141224
void entry_001411f0_0x1411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001411f0_0x1411f0");
#endif

    switch (ctx->pc) {
        case 0x141220u: goto label_141220;
        default: break;
    }

    ctx->pc = 0x1411f0u;

    // 0x1411f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1411f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1411f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1411f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1411f8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1411f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1411fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1411fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x141200: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x141200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x141204: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x141204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x141208: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x141208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14120c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14120Cu;
    {
        const bool branch_taken_0x14120c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x141210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14120Cu;
        // 0x141210: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14120c) {
            ctx->pc = 0x141224u;
            return;
        }
    }
    ctx->pc = 0x141214u;
    // 0x141214: 0x46140344  c1          0x140344
    ctx->pc = 0x141214u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x141218: 0xc067a02  jal         func_19E808
    ctx->pc = 0x141218u;
    SET_GPR_U32(ctx, 31, 0x141220u);
    ctx->pc = 0x14121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141218u;
    // 0x14121c: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x141218u, 0x141220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141220u;
label_141220:
    // 0x141220: 0x21023  negu        $v0, $v0
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x141224u;
}
