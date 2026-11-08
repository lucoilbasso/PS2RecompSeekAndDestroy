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

// Function: entry_001b9398
// Address: 0x1b9398 - 0x1b93b0
void entry_001b9398_0x1b9398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9398_0x1b9398");
#endif

    ctx->pc = 0x1b9398u;

    // 0x1b9398: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9398u;
    {
        const bool branch_taken_0x1b9398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9398u;
        // 0x1b939c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9398) {
            ctx->pc = 0x1B93CCu;
            return;
        }
    }
    ctx->pc = 0x1B93A0u;
    // 0x1b93a0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B93A0u;
    {
        const bool branch_taken_0x1b93a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93A0u;
        // 0x1b93a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93a0) {
            ctx->pc = 0x1B93DCu;
            return;
        }
    }
    ctx->pc = 0x1B93A8u;
    // 0x1b93a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B93A8u;
    {
        const bool branch_taken_0x1b93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93A8u;
        // 0x1b93ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93a8) {
            ctx->pc = 0x1B93F4u;
            return;
        }
    }
    ctx->pc = 0x1B93B0u;
}
