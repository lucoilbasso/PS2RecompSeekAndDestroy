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

// Function: entry_001da4c8
// Address: 0x1da4c8 - 0x1da524
void entry_001da4c8_0x1da4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da4c8_0x1da4c8");
#endif

    ctx->pc = 0x1da4c8u;

    // 0x1da4c8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DA4C8u;
    {
        const bool branch_taken_0x1da4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4c8) {
            ctx->pc = 0x1DA524u;
            return;
        }
    }
    ctx->pc = 0x1DA4D0u;
    // 0x1da4d0: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA4D0u;
    {
        const bool branch_taken_0x1da4d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4D0u;
        // 0x1da4d4: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4d0) {
            ctx->pc = 0x1DA524u;
            return;
        }
    }
    ctx->pc = 0x1DA4D8u;
    // 0x1da4d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1da4dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1da4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1da4e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da4e4: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1da4e8: 0x8ca30204  lw          $v1, 0x204($a1)
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 516)));
    // 0x1da4ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da4f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1da4f4: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1da4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1da4f8: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1da4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1da4fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1da4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1da500: 0x8ca20204  lw          $v0, 0x204($a1)
    ctx->pc = 0x1da500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 516)));
    // 0x1da504: 0x8ca40200  lw          $a0, 0x200($a1)
    ctx->pc = 0x1da504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x1da508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da50c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1da50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1da510: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1da510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da514: 0xaca20204  sw          $v0, 0x204($a1)
    ctx->pc = 0x1da514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 2));
    // 0x1da518: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA518u;
    {
        const bool branch_taken_0x1da518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA518u;
        // 0x1da51c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da518) {
            ctx->pc = 0x1DA524u;
            return;
        }
    }
    ctx->pc = 0x1DA520u;
    // 0x1da520: 0xaca30200  sw          $v1, 0x200($a1)
    ctx->pc = 0x1da520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 3));
    ctx->pc = 0x1da524u;
}
