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

// Function: entry_001628b8
// Address: 0x1628b8 - 0x1628d8
void entry_001628b8_0x1628b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628b8_0x1628b8");
#endif

    ctx->pc = 0x1628b8u;

    // 0x1628b8: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1628B8u;
    {
        const bool branch_taken_0x1628b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628b8) {
            ctx->pc = 0x1628BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1628B8u;
            // 0x1628bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16296Cu;
            return;
        }
    }
    ctx->pc = 0x1628C0u;
    // 0x1628c0: 0x8e220c18  lw          $v0, 0xC18($s1)
    ctx->pc = 0x1628c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3096)));
    // 0x1628c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1628C4u;
    {
        const bool branch_taken_0x1628c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1628C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628C4u;
        // 0x1628c8: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628c4) {
            ctx->pc = 0x1628D8u;
            return;
        }
    }
    ctx->pc = 0x1628CCu;
    // 0x1628cc: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1628d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1628D0u;
    {
        const bool branch_taken_0x1628d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D0u;
        // 0x1628d4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d0) {
            ctx->pc = 0x1628DCu;
            return;
        }
    }
    ctx->pc = 0x1628D8u;
}
