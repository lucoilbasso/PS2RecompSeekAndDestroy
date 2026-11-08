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

// Function: entry_001cc170
// Address: 0x1cc170 - 0x1cc188
void entry_001cc170_0x1cc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc170_0x1cc170");
#endif

    ctx->pc = 0x1cc170u;

    // 0x1cc170: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cc174: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC174u;
    {
        const bool branch_taken_0x1cc174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc174) {
            ctx->pc = 0x1CC178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC174u;
            // 0x1cc178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC1BCu;
            return;
        }
    }
    ctx->pc = 0x1CC17Cu;
    // 0x1cc17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc180: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CC180u;
    {
        const bool branch_taken_0x1cc180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC180u;
        // 0x1cc184: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc180) {
            ctx->pc = 0x1CC128u;
            return;
        }
    }
    ctx->pc = 0x1CC188u;
}
