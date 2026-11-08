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

// Function: entry_001adff8
// Address: 0x1adff8 - 0x1ae008
void entry_001adff8_0x1adff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adff8_0x1adff8");
#endif

    ctx->pc = 0x1adff8u;

    // 0x1adff8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1adff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1adffc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADFFCu;
    {
        const bool branch_taken_0x1adffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFFCu;
        // 0x1ae000: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adffc) {
            ctx->pc = 0x1AE048u;
            return;
        }
    }
    ctx->pc = 0x1AE004u;
    // 0x1ae004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ae008u;
}
