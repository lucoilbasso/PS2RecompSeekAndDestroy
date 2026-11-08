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

// Function: entry_0014ab30
// Address: 0x14ab30 - 0x14ab50
void entry_0014ab30_0x14ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab30_0x14ab30");
#endif

    ctx->pc = 0x14ab30u;

    // 0x14ab30: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x14ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x14ab34: 0x1a200016  blez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14AB34u;
    {
        const bool branch_taken_0x14ab34 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB34u;
        // 0x14ab38: 0xa21101a9  sb          $s1, 0x1A9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 425), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab34) {
            ctx->pc = 0x14AB90u;
            return;
        }
    }
    ctx->pc = 0x14AB3Cu;
    // 0x14ab3c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ab40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab44: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AB44u;
    {
        const bool branch_taken_0x14ab44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB44u;
        // 0x14ab48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab44) {
            ctx->pc = 0x14AB50u;
            return;
        }
    }
    ctx->pc = 0x14AB4Cu;
    // 0x14ab4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x14ab50u;
}
