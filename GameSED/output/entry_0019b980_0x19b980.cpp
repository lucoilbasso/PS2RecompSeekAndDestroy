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

// Function: entry_0019b980
// Address: 0x19b980 - 0x19b9a0
void entry_0019b980_0x19b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b980_0x19b980");
#endif

    ctx->pc = 0x19b980u;

    // 0x19b980: 0x0  nop
    ctx->pc = 0x19b980u;
    // NOP
    // 0x19b984: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B984u;
    {
        const bool branch_taken_0x19b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B984u;
        // 0x19b988: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b984) {
            ctx->pc = 0x19B970u;
            return;
        }
    }
    ctx->pc = 0x19B98Cu;
    // 0x19b98c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x19b98cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b990: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b994: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b998: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B998u;
    {
        const bool branch_taken_0x19b998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B998u;
        // 0x19b99c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b998) {
            ctx->pc = 0x19B9BCu;
            return;
        }
    }
    ctx->pc = 0x19B9A0u;
}
