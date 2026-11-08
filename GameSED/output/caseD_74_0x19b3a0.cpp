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

// Function: caseD_74
// Address: 0x19b3a0 - 0x19b3c8
void caseD_74_0x19b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_74_0x19b3a0");
#endif

    switch (ctx->pc) {
        case 0x19b3b4u: goto label_19b3b4;
        default: break;
    }

    ctx->pc = 0x19b3a0u;

    // 0x19b3a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3a4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19b3a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b3ac: 0xc066d74  jal         func_19B5D0
    ctx->pc = 0x19B3ACu;
    SET_GPR_U32(ctx, 31, 0x19B3B4u);
    ctx->pc = 0x19B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3ACu;
    // 0x19b3b0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5D0u, 0x19B3ACu, 0x19B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x19b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x19b3b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b3bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B3BCu;
    {
        const bool branch_taken_0x19b3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3BCu;
        // 0x19b3c0: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3bc) {
            ctx->pc = 0x19B3ECu;
            return;
        }
    }
    ctx->pc = 0x19B3C4u;
    // 0x19b3c4: 0x0  nop
    ctx->pc = 0x19b3c4u;
    // NOP
    ctx->pc = 0x19b3c8u;
}
