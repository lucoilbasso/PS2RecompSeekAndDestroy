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

// Function: entry_001d5018
// Address: 0x1d5018 - 0x1d5028
void entry_001d5018_0x1d5018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5018_0x1d5018");
#endif

    ctx->pc = 0x1d5018u;

    // 0x1d5018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d5018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d501c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d501cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5020: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5020u;
    {
        const bool branch_taken_0x1d5020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5020u;
        // 0x1d5024: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5020) {
            ctx->pc = 0x1D506Cu;
            return;
        }
    }
    ctx->pc = 0x1D5028u;
}
