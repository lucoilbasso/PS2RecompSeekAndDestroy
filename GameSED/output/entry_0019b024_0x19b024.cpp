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

// Function: entry_0019b024
// Address: 0x19b024 - 0x19b038
void entry_0019b024_0x19b024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b024_0x19b024");
#endif

    ctx->pc = 0x19b024u;

    // 0x19b024: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B024u;
    {
        const bool branch_taken_0x19b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B024u;
        // 0x19b028: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b024) {
            ctx->pc = 0x19B064u;
            return;
        }
    }
    ctx->pc = 0x19B02Cu;
    // 0x19b02c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19b030: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b034: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x19b038u;
}
