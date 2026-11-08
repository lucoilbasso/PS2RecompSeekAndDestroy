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

// Function: entry_00101c08
// Address: 0x101c08 - 0x101c24
void entry_00101c08_0x101c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101c08_0x101c08");
#endif

    ctx->pc = 0x101c08u;

    // 0x101c08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101C08u;
    {
        const bool branch_taken_0x101c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C08u;
        // 0x101c0c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c08) {
            ctx->pc = 0x101C24u;
            return;
        }
    }
    ctx->pc = 0x101C10u;
    // 0x101c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c14: 0x24a519c8  addiu       $a1, $a1, 0x19C8
    ctx->pc = 0x101c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    // 0x101c18: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101c1c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x101C1Cu;
    SET_GPR_U32(ctx, 31, 0x101C24u);
    ctx->pc = 0x101C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C1Cu;
    // 0x101c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x101C1Cu, 0x101C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C24u;
}
