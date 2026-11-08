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

// Function: entry_001507c4
// Address: 0x1507c4 - 0x1507f0
void entry_001507c4_0x1507c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001507c4_0x1507c4");
#endif

    ctx->pc = 0x1507c4u;

    // 0x1507c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1507c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1507c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1507C8u;
    {
        const bool branch_taken_0x1507c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507C8u;
        // 0x1507cc: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507c8) {
            ctx->pc = 0x1507F0u;
            return;
        }
    }
    ctx->pc = 0x1507D0u;
    // 0x1507d0: 0xc6410860  lwc1        $f1, 0x860($s2)
    ctx->pc = 0x1507d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1507d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1507d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1507dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1507e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1507E0u;
    {
        const bool branch_taken_0x1507e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1507e0) {
            ctx->pc = 0x1507F0u;
            return;
        }
    }
    ctx->pc = 0x1507E8u;
    // 0x1507e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1507E8u;
    {
        const bool branch_taken_0x1507e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1507ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507E8u;
        // 0x1507ec: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507e8) {
            ctx->pc = 0x1507F8u;
            return;
        }
    }
    ctx->pc = 0x1507F0u;
}
