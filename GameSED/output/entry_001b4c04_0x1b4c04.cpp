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

// Function: entry_001b4c04
// Address: 0x1b4c04 - 0x1b4c20
void entry_001b4c04_0x1b4c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4c04_0x1b4c04");
#endif

    ctx->pc = 0x1b4c04u;

    // 0x1b4c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c08: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4c0c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4C0Cu;
    {
        const bool branch_taken_0x1b4c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C0Cu;
        // 0x1b4c10: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c0c) {
            ctx->pc = 0x1B4C4Cu;
            return;
        }
    }
    ctx->pc = 0x1B4C14u;
    // 0x1b4c14: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1b4c14u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b4c18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b4c1c: 0x0  nop
    ctx->pc = 0x1b4c1cu;
    // NOP
    ctx->pc = 0x1b4c20u;
}
