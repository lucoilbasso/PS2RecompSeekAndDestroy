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

// Function: entry_0010fb48
// Address: 0x10fb48 - 0x10fb60
void entry_0010fb48_0x10fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb48_0x10fb48");
#endif

    ctx->pc = 0x10fb48u;

    // 0x10fb48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FB48u;
    {
        const bool branch_taken_0x10fb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB48u;
        // 0x10fb4c: 0x2c826000  sltiu       $v0, $a0, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb48) {
            ctx->pc = 0x10FB60u;
            return;
        }
    }
    ctx->pc = 0x10FB50u;
    // 0x10fb50: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x10fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x10fb54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FB54u;
    {
        const bool branch_taken_0x10fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB54u;
        // 0x10fb58: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb54) {
            ctx->pc = 0x10FB70u;
            return;
        }
    }
    ctx->pc = 0x10FB5Cu;
    // 0x10fb5c: 0x0  nop
    ctx->pc = 0x10fb5cu;
    // NOP
    ctx->pc = 0x10fb60u;
}
