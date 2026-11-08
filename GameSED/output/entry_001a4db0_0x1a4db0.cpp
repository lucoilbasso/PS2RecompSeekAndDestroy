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

// Function: entry_001a4db0
// Address: 0x1a4db0 - 0x1a4dd8
void entry_001a4db0_0x1a4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4db0_0x1a4db0");
#endif

    switch (ctx->pc) {
        case 0x1a4dccu: goto label_1a4dcc;
        default: break;
    }

    ctx->pc = 0x1a4db0u;

label_1a4db0:
    // 0x1a4db0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4db4:
    // 0x1a4db4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4db8:
    if (ctx->pc == 0x1A4DB8u) {
        ctx->pc = 0x1A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DB4u;
        // 0x1a4db8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DBCu;
        goto label_1a4dbc;
    }
    ctx->pc = 0x1A4DB4u;
    {
        const bool branch_taken_0x1a4db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DB4u;
        // 0x1a4db8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4db4) {
            ctx->pc = 0x1A4DD8u;
            return;
        }
    }
    ctx->pc = 0x1A4DBCu;
label_1a4dbc:
    // 0x1a4dbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4dc0:
    // 0x1a4dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dc4:
    // 0x1a4dc4: 0x40f809  jalr        $v0
label_1a4dc8:
    if (ctx->pc == 0x1A4DC8u) {
        ctx->pc = 0x1A4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC4u;
        // 0x1a4dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DCCu;
        goto label_1a4dcc;
    }
    ctx->pc = 0x1A4DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4DCCu);
        ctx->pc = 0x1A4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DC4u;
        // 0x1a4dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DC4u, 0x1A4DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4DCCu;
label_1a4dcc:
    // 0x1a4dcc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a4dd0:
    if (ctx->pc == 0x1A4DD0u) {
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DD4u;
        goto label_1a4dd4;
    }
    ctx->pc = 0x1A4DCCu;
    {
        const bool branch_taken_0x1a4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dcc) {
            ctx->pc = 0x1A4E04u;
            return;
        }
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x0  nop
    ctx->pc = 0x1a4dd4u;
    // NOP
    ctx->pc = 0x1a4dd8u;
}
