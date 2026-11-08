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

// Function: entry_001bd254
// Address: 0x1bd254 - 0x1bd268
void entry_001bd254_0x1bd254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd254_0x1bd254");
#endif

    ctx->pc = 0x1bd254u;

    // 0x1bd254: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD254u;
    {
        const bool branch_taken_0x1bd254 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD254u;
        // 0x1bd258: 0x3be1021  addu        $v0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd254) {
            ctx->pc = 0x1BD268u;
            return;
        }
    }
    ctx->pc = 0x1BD25Cu;
    // 0x1bd25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd260: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD260u;
    SET_GPR_U32(ctx, 31, 0x1BD268u);
    ctx->pc = 0x1BD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD260u;
    // 0x1bd264: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD260u, 0x1BD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD268u;
}
