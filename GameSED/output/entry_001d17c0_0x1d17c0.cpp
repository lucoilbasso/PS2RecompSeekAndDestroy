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

// Function: entry_001d17c0
// Address: 0x1d17c0 - 0x1d17e4
void entry_001d17c0_0x1d17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d17c0_0x1d17c0");
#endif

    ctx->pc = 0x1d17c0u;

    // 0x1d17c0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D17C0u;
    {
        const bool branch_taken_0x1d17c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C0u;
        // 0x1d17c4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17c0) {
            ctx->pc = 0x1D17F0u;
            return;
        }
    }
    ctx->pc = 0x1D17C8u;
    // 0x1d17c8: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D17C8u;
    {
        const bool branch_taken_0x1d17c8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17C8u;
        // 0x1d17cc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17c8) {
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D17D0u;
    // 0x1d17d0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D17D0u;
    {
        const bool branch_taken_0x1d17d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17D0u;
        // 0x1d17d4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17d0) {
            ctx->pc = 0x1D17E4u;
            return;
        }
    }
    ctx->pc = 0x1D17D8u;
    // 0x1d17d8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d17dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D17DCu;
    {
        const bool branch_taken_0x1d17dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17DCu;
        // 0x1d17e0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17dc) {
            ctx->pc = 0x1D1824u;
            return;
        }
    }
    ctx->pc = 0x1D17E4u;
}
