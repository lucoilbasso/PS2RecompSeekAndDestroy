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

// Function: entry_001c3c18
// Address: 0x1c3c18 - 0x1c3c48
void entry_001c3c18_0x1c3c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3c18_0x1c3c18");
#endif

    ctx->pc = 0x1c3c18u;

label_1c3c18:
    // 0x1c3c18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3c1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c3c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3c20: 0x0  nop
    ctx->pc = 0x1c3c20u;
    // NOP
    // 0x1c3c24: 0x0  nop
    ctx->pc = 0x1c3c24u;
    // NOP
    // 0x1c3c28: 0x0  nop
    ctx->pc = 0x1c3c28u;
    // NOP
    // 0x1c3c2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3C2Cu;
    {
        const bool branch_taken_0x1c3c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c2c) {
            ctx->pc = 0x1C3C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c18;
        }
    }
    ctx->pc = 0x1C3C34u;
    // 0x1c3c34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3C34u;
    {
        const bool branch_taken_0x1c3c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C34u;
        // 0x1c3c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c34) {
            ctx->pc = 0x1C3C48u;
            return;
        }
    }
    ctx->pc = 0x1C3C3Cu;
    // 0x1c3c3c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c3c40: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C3C40u;
    SET_GPR_U32(ctx, 31, 0x1C3C48u);
    ctx->pc = 0x1C3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C40u;
    // 0x1c3c44: 0x24a5b718  addiu       $a1, $a1, -0x48E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C3C40u, 0x1C3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C48u;
}
