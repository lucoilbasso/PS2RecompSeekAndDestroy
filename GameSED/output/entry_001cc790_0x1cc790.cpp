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

// Function: entry_001cc790
// Address: 0x1cc790 - 0x1cc7cc
void entry_001cc790_0x1cc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc790_0x1cc790");
#endif

    switch (ctx->pc) {
        case 0x1cc7c4u: goto label_1cc7c4;
        default: break;
    }

    ctx->pc = 0x1cc790u;

label_1cc790:
    // 0x1cc790: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc794:
    // 0x1cc794: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_1cc798:
    if (ctx->pc == 0x1CC798u) {
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC79Cu;
        goto label_1cc79c;
    }
    ctx->pc = 0x1CC794u;
    {
        const bool branch_taken_0x1cc794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC794u;
        // 0x1cc798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc794) {
            ctx->pc = 0x1CC7CCu;
            return;
        }
    }
    ctx->pc = 0x1CC79Cu;
label_1cc79c:
    // 0x1cc79c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1cc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1cc7a0:
    // 0x1cc7a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7a4:
    // 0x1cc7a4: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc7a8:
    // 0x1cc7a8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc7a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7ac:
    // 0x1cc7ac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc7b0:
    // 0x1cc7b0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc7b4:
    // 0x1cc7b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc7b8:
    // 0x1cc7b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc7bc:
    // 0x1cc7bc: 0x40f809  jalr        $v0
label_1cc7c0:
    if (ctx->pc == 0x1CC7C0u) {
        ctx->pc = 0x1CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7BCu;
        // 0x1cc7c0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC7C4u;
        goto label_1cc7c4;
    }
    ctx->pc = 0x1CC7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC7C4u);
        ctx->pc = 0x1CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7BCu;
        // 0x1cc7c0: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC7BCu, 0x1CC7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC7C4u;
label_1cc7c4:
    // 0x1cc7c4: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc7c4u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc7c8:
    // 0x1cc7c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc7c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cc7ccu;
}
