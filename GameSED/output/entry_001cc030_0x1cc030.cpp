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

// Function: entry_001cc030
// Address: 0x1cc030 - 0x1cc088
void entry_001cc030_0x1cc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc030_0x1cc030");
#endif

    switch (ctx->pc) {
        case 0x1cc050u: goto label_1cc050;
        default: break;
    }

    ctx->pc = 0x1cc030u;

    // 0x1cc030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc038: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1cc038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc03c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc044: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc048: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CC048u;
    SET_GPR_U32(ctx, 31, 0x1CC050u);
    ctx->pc = 0x1CC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC048u;
    // 0x1cc04c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC048u, 0x1CC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC050u;
label_1cc050:
    // 0x1cc050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc054: 0x32430006  andi        $v1, $s2, 0x6
    ctx->pc = 0x1cc054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
    // 0x1cc058: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc05c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x1cc05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1cc060: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc064: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC064u;
    {
        const bool branch_taken_0x1cc064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC064u;
        // 0x1cc068: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc064) {
            ctx->pc = 0x1CC088u;
            return;
        }
    }
    ctx->pc = 0x1CC06Cu;
    // 0x1cc06c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x1cc06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cc070: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cc074: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1cc074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x1cc078: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1cc07c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC07Cu;
    {
        const bool branch_taken_0x1cc07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC07Cu;
        // 0x1cc080: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc07c) {
            ctx->pc = 0x1CC0A4u;
            return;
        }
    }
    ctx->pc = 0x1CC084u;
    // 0x1cc084: 0x0  nop
    ctx->pc = 0x1cc084u;
    // NOP
    ctx->pc = 0x1cc088u;
}
