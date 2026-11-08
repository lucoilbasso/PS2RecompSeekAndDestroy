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

// Function: entry_001cb980
// Address: 0x1cb980 - 0x1cb9c8
void entry_001cb980_0x1cb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb980_0x1cb980");
#endif

    switch (ctx->pc) {
        case 0x1cb9bcu: goto label_1cb9bc;
        default: break;
    }

    ctx->pc = 0x1cb980u;

label_1cb980:
    // 0x1cb980: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb984: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1cb984u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cb988: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1cb988u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cb98c: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1cb98cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cb990: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x1cb990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x1cb994: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1cb994u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1cb998: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x1cb998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x1cb99c: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x1cb99cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x1cb9a0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1cb9a4: 0x0  nop
    ctx->pc = 0x1cb9a4u;
    // NOP
    // 0x1cb9a8: 0x0  nop
    ctx->pc = 0x1cb9a8u;
    // NOP
    // 0x1cb9ac: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB9ACu;
    {
        const bool branch_taken_0x1cb9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9ac) {
            ctx->pc = 0x1CB980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb980;
        }
    }
    ctx->pc = 0x1CB9B4u;
    // 0x1cb9b4: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CB9B4u;
    SET_GPR_U32(ctx, 31, 0x1CB9BCu);
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CB9B4u, 0x1CB9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9BCu;
label_1cb9bc:
    // 0x1cb9bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1CB9BCu;
    {
        const bool branch_taken_0x1cb9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9BCu;
        // 0x1cb9c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9bc) {
            ctx->pc = 0x1CBA94u;
            return;
        }
    }
    ctx->pc = 0x1CB9C4u;
    // 0x1cb9c4: 0x0  nop
    ctx->pc = 0x1cb9c4u;
    // NOP
    ctx->pc = 0x1cb9c8u;
}
