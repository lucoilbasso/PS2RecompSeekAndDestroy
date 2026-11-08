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

// Function: entry_001cc87c
// Address: 0x1cc87c - 0x1cc890
void entry_001cc87c_0x1cc87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc87c_0x1cc87c");
#endif

    ctx->pc = 0x1cc87cu;

    // 0x1cc87c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc880: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC880u;
    {
        const bool branch_taken_0x1cc880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC880u;
        // 0x1cc884: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc880) {
            ctx->pc = 0x1CC8B0u;
            return;
        }
    }
    ctx->pc = 0x1CC888u;
    // 0x1cc888: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC888u;
        // 0x1cc88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC8D0u;
            return;
        }
    }
    ctx->pc = 0x1CC890u;
}
