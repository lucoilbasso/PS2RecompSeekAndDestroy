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

// Function: entry_0016749c
// Address: 0x16749c - 0x1674c0
void entry_0016749c_0x16749c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016749c_0x16749c");
#endif

    ctx->pc = 0x16749cu;

    // 0x16749c: 0x50600054  beql        $v1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x16749Cu;
    {
        const bool branch_taken_0x16749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16749c) {
            ctx->pc = 0x1674A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16749Cu;
            // 0x1674a0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1675F0u;
            return;
        }
    }
    ctx->pc = 0x1674A4u;
    // 0x1674a4: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674A4u;
        // 0x1674a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x1674C0u;
            return;
        }
    }
    ctx->pc = 0x1674ACu;
    // 0x1674ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1674acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1674b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1674B0u;
    {
        const bool branch_taken_0x1674b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1674B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B0u;
        // 0x1674b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674b0) {
            ctx->pc = 0x1674D0u;
            return;
        }
    }
    ctx->pc = 0x1674B8u;
    // 0x1674b8: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1674B8u;
    {
        const bool branch_taken_0x1674b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B8u;
        // 0x1674bc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674b8) {
            ctx->pc = 0x167958u;
            return;
        }
    }
    ctx->pc = 0x1674C0u;
}
