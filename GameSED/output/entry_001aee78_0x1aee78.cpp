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

// Function: entry_001aee78
// Address: 0x1aee78 - 0x1aee98
void entry_001aee78_0x1aee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee78_0x1aee78");
#endif

    ctx->pc = 0x1aee78u;

    // 0x1aee78: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1aee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1aee7c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1aee7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aee84: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x1aee84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x1aee88: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1aee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1aee8c: 0x30a3000c  andi        $v1, $a1, 0xC
    ctx->pc = 0x1aee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1aee90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEE90u;
    {
        const bool branch_taken_0x1aee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE90u;
        // 0x1aee94: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee90) {
            ctx->pc = 0x1AEEB4u;
            return;
        }
    }
    ctx->pc = 0x1AEE98u;
}
