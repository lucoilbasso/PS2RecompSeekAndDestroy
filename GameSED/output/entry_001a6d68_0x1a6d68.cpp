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

// Function: entry_001a6d68
// Address: 0x1a6d68 - 0x1a6d98
void entry_001a6d68_0x1a6d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6d68_0x1a6d68");
#endif

    switch (ctx->pc) {
        case 0x1a6d8cu: goto label_1a6d8c;
        default: break;
    }

    ctx->pc = 0x1a6d68u;

    // 0x1a6d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a6d70: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a6d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6d74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6d78: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a6d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a6d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6D7Cu;
    {
        const bool branch_taken_0x1a6d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D7Cu;
        // 0x1a6d80: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d7c) {
            ctx->pc = 0x1A6D98u;
            return;
        }
    }
    ctx->pc = 0x1A6D84u;
    // 0x1a6d84: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6D84u;
    SET_GPR_U32(ctx, 31, 0x1A6D8Cu);
    ctx->pc = 0x1A6D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D84u;
    // 0x1a6d88: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6D84u, 0x1A6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D8Cu;
label_1a6d8c:
    // 0x1a6d8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D8Cu;
    {
        const bool branch_taken_0x1a6d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D8Cu;
        // 0x1a6d90: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d8c) {
            ctx->pc = 0x1A6D9Cu;
            return;
        }
    }
    ctx->pc = 0x1A6D94u;
    // 0x1a6d94: 0x0  nop
    ctx->pc = 0x1a6d94u;
    // NOP
    ctx->pc = 0x1a6d98u;
}
