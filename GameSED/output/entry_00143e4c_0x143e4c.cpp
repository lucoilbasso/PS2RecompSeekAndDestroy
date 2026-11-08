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

// Function: entry_00143e4c
// Address: 0x143e4c - 0x143e7c
void entry_00143e4c_0x143e4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e4c_0x143e4c");
#endif

    ctx->pc = 0x143e4cu;

label_143e4c:
    // 0x143e4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_143e50:
    // 0x143e50: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
label_143e54:
    if (ctx->pc == 0x143E54u) {
        ctx->pc = 0x143E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E50u;
        // 0x143e54: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E58u;
        goto label_143e58;
    }
    ctx->pc = 0x143E50u;
    {
        const bool branch_taken_0x143e50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x143e50) {
            ctx->pc = 0x143E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E50u;
            // 0x143e54: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143E28u;
            return;
        }
    }
    ctx->pc = 0x143E58u;
label_143e58:
    // 0x143e58: 0x8e460058  lw          $a2, 0x58($s2)
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_143e5c:
    // 0x143e5c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143e60:
    if (ctx->pc == 0x143E60u) {
        ctx->pc = 0x143E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E5Cu;
        // 0x143e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E64u;
        goto label_143e64;
    }
    ctx->pc = 0x143E5Cu;
    {
        const bool branch_taken_0x143e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E5Cu;
        // 0x143e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e5c) {
            ctx->pc = 0x143E7Cu;
            return;
        }
    }
    ctx->pc = 0x143E64u;
label_143e64:
    // 0x143e64: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143e68:
    // 0x143e68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143e6c:
    // 0x143e6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143e70:
    // 0x143e70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143e74:
    // 0x143e74: 0x60f809  jalr        $v1
label_143e78:
    if (ctx->pc == 0x143E78u) {
        ctx->pc = 0x143E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E74u;
        // 0x143e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E7Cu;
        goto label_fallthrough_0x143e74;
    }
    ctx->pc = 0x143E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143E7Cu);
        ctx->pc = 0x143E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E74u;
        // 0x143e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E74u, 0x143E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143e74:
    ctx->pc = 0x143E7Cu;
}
