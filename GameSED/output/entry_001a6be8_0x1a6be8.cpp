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

// Function: entry_001a6be8
// Address: 0x1a6be8 - 0x1a6c18
void entry_001a6be8_0x1a6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6be8_0x1a6be8");
#endif

    switch (ctx->pc) {
        case 0x1a6c0cu: goto label_1a6c0c;
        default: break;
    }

    ctx->pc = 0x1a6be8u;

    // 0x1a6be8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6bec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6bf0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6bf4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6bf8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6BFCu;
    {
        const bool branch_taken_0x1a6bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BFCu;
        // 0x1a6c00: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bfc) {
            ctx->pc = 0x1A6C18u;
            return;
        }
    }
    ctx->pc = 0x1A6C04u;
    // 0x1a6c04: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6C04u;
    SET_GPR_U32(ctx, 31, 0x1A6C0Cu);
    ctx->pc = 0x1A6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C04u;
    // 0x1a6c08: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6C04u, 0x1A6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C0Cu;
label_1a6c0c:
    // 0x1a6c0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C0Cu;
    {
        const bool branch_taken_0x1a6c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C0Cu;
        // 0x1a6c10: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c0c) {
            ctx->pc = 0x1A6C1Cu;
            return;
        }
    }
    ctx->pc = 0x1A6C14u;
    // 0x1a6c14: 0x0  nop
    ctx->pc = 0x1a6c14u;
    // NOP
    ctx->pc = 0x1a6c18u;
}
