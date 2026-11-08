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

// Function: entry_0017b59c
// Address: 0x17b59c - 0x17b5bc
void entry_0017b59c_0x17b59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b59c_0x17b59c");
#endif

    ctx->pc = 0x17b59cu;

    // 0x17b59c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17b5a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17b5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B5A4u;
    {
        const bool branch_taken_0x17b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5A4u;
        // 0x17b5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5a4) {
            ctx->pc = 0x17B5BCu;
            return;
        }
    }
    ctx->pc = 0x17B5ACu;
    // 0x17b5ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5b4: 0xc05ef08  jal         func_17BC20
    ctx->pc = 0x17B5B4u;
    SET_GPR_U32(ctx, 31, 0x17B5BCu);
    ctx->pc = 0x17B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5B4u;
    // 0x17b5b8: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC20u, 0x17B5B4u, 0x17B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5BCu;
}
