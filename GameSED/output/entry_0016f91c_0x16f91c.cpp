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

// Function: entry_0016f91c
// Address: 0x16f91c - 0x16f948
void entry_0016f91c_0x16f91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f91c_0x16f91c");
#endif

    ctx->pc = 0x16f91cu;

label_16f91c:
    // 0x16f91c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16f920:
    // 0x16f920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16f924:
    // 0x16f924: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_16f928:
    if (ctx->pc == 0x16F928u) {
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F92Cu;
        goto label_16f92c;
    }
    ctx->pc = 0x16F924u;
    {
        const bool branch_taken_0x16f924 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f924) {
            ctx->pc = 0x16F950u;
            return;
        }
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_16f930:
    // 0x16f930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f934:
    // 0x16f934: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16f938:
    // 0x16f938: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16f93c:
    // 0x16f93c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f940:
    // 0x16f940: 0x60f809  jalr        $v1
label_16f944:
    if (ctx->pc == 0x16F944u) {
        ctx->pc = 0x16F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F940u;
        // 0x16f944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F948u;
        goto label_fallthrough_0x16f940;
    }
    ctx->pc = 0x16F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F948u);
        ctx->pc = 0x16F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F940u;
        // 0x16f944: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F940u, 0x16F948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16f940:
    ctx->pc = 0x16F948u;
}
