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

// Function: caseD_7
// Address: 0x135098 - 0x1350d0
void caseD_7_0x135098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x135098");
#endif

    switch (ctx->pc) {
        case 0x1350a0u: goto label_1350a0;
        default: break;
    }

    ctx->pc = 0x135098u;

    // 0x135098: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135098u;
    SET_GPR_U32(ctx, 31, 0x1350A0u);
    ctx->pc = 0x13509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135098u;
    // 0x13509c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135098u, 0x1350A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350A0u;
label_1350a0:
    // 0x1350a0: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x1350a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x1350a4: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1350a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1350a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1350ac: 0x8cc5b830  lw          $a1, -0x47D0($a2)
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1350b0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1350b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1350b4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1350b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1350b8: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x1350b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    // 0x1350bc: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x1350bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1350c0: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1350c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1350c4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1350C4u;
    {
        const bool branch_taken_0x1350c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350C4u;
        // 0x1350c8: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350c4) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x1350CCu;
    // 0x1350cc: 0x0  nop
    ctx->pc = 0x1350ccu;
    // NOP
    ctx->pc = 0x1350d0u;
}
