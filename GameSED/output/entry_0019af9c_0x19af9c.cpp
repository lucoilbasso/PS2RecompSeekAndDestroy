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

// Function: entry_0019af9c
// Address: 0x19af9c - 0x19afb8
void entry_0019af9c_0x19af9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af9c_0x19af9c");
#endif

    ctx->pc = 0x19af9cu;

    // 0x19af9c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x19afa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x19AFA4u;
    {
        const bool branch_taken_0x19afa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA4u;
        // 0x19afa8: 0x11d2023  subu        $a0, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa4) {
            ctx->pc = 0x19B020u;
            return;
        }
    }
    ctx->pc = 0x19AFACu;
    // 0x19afac: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19afb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19AFB0u;
    {
        const bool branch_taken_0x19afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFB0u;
        // 0x19afb4: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afb0) {
            ctx->pc = 0x19B024u;
            return;
        }
    }
    ctx->pc = 0x19AFB8u;
}
