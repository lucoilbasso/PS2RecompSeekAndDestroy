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

// Function: entry_0014251c
// Address: 0x14251c - 0x142548
void entry_0014251c_0x14251c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014251c_0x14251c");
#endif

    ctx->pc = 0x14251cu;

    // 0x14251c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x14251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142520: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x142520u;
    {
        const bool branch_taken_0x142520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x142524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142520u;
        // 0x142524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142520) {
            ctx->pc = 0x142560u;
            return;
        }
    }
    ctx->pc = 0x142528u;
    // 0x142528: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x142528u;
    {
        const bool branch_taken_0x142528 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142528u;
        // 0x14252c: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142528) {
            ctx->pc = 0x142548u;
            return;
        }
    }
    ctx->pc = 0x142530u;
    // 0x142530: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142534: 0xe4940164  swc1        $f20, 0x164($a0)
    ctx->pc = 0x142534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x142538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14253c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14253Cu;
    {
        const bool branch_taken_0x14253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14253Cu;
        // 0x142540: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14253c) {
            ctx->pc = 0x142560u;
            return;
        }
    }
    ctx->pc = 0x142544u;
    // 0x142544: 0x0  nop
    ctx->pc = 0x142544u;
    // NOP
    ctx->pc = 0x142548u;
}
