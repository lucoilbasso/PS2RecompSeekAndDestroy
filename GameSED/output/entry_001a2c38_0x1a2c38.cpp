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

// Function: entry_001a2c38
// Address: 0x1a2c38 - 0x1a2c58
void entry_001a2c38_0x1a2c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c38_0x1a2c38");
#endif

    switch (ctx->pc) {
        case 0x1a2c50u: goto label_1a2c50;
        default: break;
    }

    ctx->pc = 0x1a2c38u;

label_1a2c38:
    // 0x1a2c38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a2c3c:
    // 0x1a2c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2c40:
    // 0x1a2c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a2c44:
    if (ctx->pc == 0x1A2C44u) {
        ctx->pc = 0x1A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C40u;
        // 0x1a2c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C48u;
        goto label_1a2c48;
    }
    ctx->pc = 0x1A2C40u;
    {
        const bool branch_taken_0x1a2c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C40u;
        // 0x1a2c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c40) {
            ctx->pc = 0x1A2C58u;
            return;
        }
    }
    ctx->pc = 0x1A2C48u;
label_1a2c48:
    // 0x1a2c48: 0x40f809  jalr        $v0
label_1a2c4c:
    if (ctx->pc == 0x1A2C4Cu) {
        ctx->pc = 0x1A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C48u;
        // 0x1a2c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C50u;
        goto label_1a2c50;
    }
    ctx->pc = 0x1A2C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2C50u);
        ctx->pc = 0x1A2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C48u;
        // 0x1a2c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C48u, 0x1A2C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C50u;
label_1a2c50:
    // 0x1a2c50: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_fallthrough_0x1a2c50;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C88u;
            return;
        }
    }
label_fallthrough_0x1a2c50:
    ctx->pc = 0x1A2C58u;
}
