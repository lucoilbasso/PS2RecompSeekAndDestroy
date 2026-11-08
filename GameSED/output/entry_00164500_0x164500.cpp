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

// Function: entry_00164500
// Address: 0x164500 - 0x164528
void entry_00164500_0x164500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164500_0x164500");
#endif

    ctx->pc = 0x164500u;

    // 0x164500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x164504: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164504u;
    {
        const bool branch_taken_0x164504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x164508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164504u;
        // 0x164508: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164504) {
            ctx->pc = 0x164528u;
            return;
        }
    }
    ctx->pc = 0x16450Cu;
    // 0x16450c: 0x0  nop
    ctx->pc = 0x16450cu;
    // NOP
    // 0x164510: 0x0  nop
    ctx->pc = 0x164510u;
    // NOP
    // 0x164514: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x164514u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x164518: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x164518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x16451c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x16451cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x164520: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x164520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x164524: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x164524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x164528u;
}
