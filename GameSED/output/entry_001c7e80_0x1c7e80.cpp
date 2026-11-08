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

// Function: entry_001c7e80
// Address: 0x1c7e80 - 0x1c7eb0
void entry_001c7e80_0x1c7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7e80_0x1c7e80");
#endif

    switch (ctx->pc) {
        case 0x1c7ea4u: goto label_1c7ea4;
        default: break;
    }

    ctx->pc = 0x1c7e80u;

    // 0x1c7e80: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x1c7e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x1c7e84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C7E84u;
    {
        const bool branch_taken_0x1c7e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E84u;
        // 0x1c7e88: 0x2462fbed  addiu       $v0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e84) {
            ctx->pc = 0x1C7EB0u;
            return;
        }
    }
    ctx->pc = 0x1C7E8Cu;
    // 0x1c7e8c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1c7e90: 0x16220033  bne         $s1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C7E90u;
    {
        const bool branch_taken_0x1c7e90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7e90) {
            ctx->pc = 0x1C7F60u;
            return;
        }
    }
    ctx->pc = 0x1C7E98u;
    // 0x1c7e98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7e9c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7EA4u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7E9Cu, 0x1C7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EA4u;
label_1c7ea4:
    // 0x1c7ea4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C7EA4u;
    {
        const bool branch_taken_0x1c7ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA4u;
        // 0x1c7ea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea4) {
            ctx->pc = 0x1C7F68u;
            return;
        }
    }
    ctx->pc = 0x1C7EACu;
    // 0x1c7eac: 0x0  nop
    ctx->pc = 0x1c7eacu;
    // NOP
    ctx->pc = 0x1c7eb0u;
}
