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

// Function: entry_00107b88
// Address: 0x107b88 - 0x107bc0
void entry_00107b88_0x107b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b88_0x107b88");
#endif

    switch (ctx->pc) {
        case 0x107b98u: goto label_107b98;
        default: break;
    }

    ctx->pc = 0x107b88u;

label_107b88:
    // 0x107b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x107b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_107b8c:
    // 0x107b8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x107b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_107b90:
    // 0x107b90: 0xc0410e4  jal         func_104390
label_107b94:
    if (ctx->pc == 0x107B94u) {
        ctx->pc = 0x107B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B90u;
        // 0x107b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107B98u;
        goto label_107b98;
    }
    ctx->pc = 0x107B90u;
    SET_GPR_U32(ctx, 31, 0x107B98u);
    ctx->pc = 0x107B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B90u;
    // 0x107b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x107B90u, 0x107B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B98u;
label_107b98:
    // 0x107b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107b9c:
    // 0x107b9c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107ba0:
    // 0x107ba0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_107ba4:
    if (ctx->pc == 0x107BA4u) {
        ctx->pc = 0x107BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BA0u;
        // 0x107ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BA8u;
        goto label_107ba8;
    }
    ctx->pc = 0x107BA0u;
    {
        const bool branch_taken_0x107ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BA0u;
        // 0x107ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ba0) {
            ctx->pc = 0x107BC0u;
            return;
        }
    }
    ctx->pc = 0x107BA8u;
label_107ba8:
    // 0x107ba8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_107bac:
    // 0x107bac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x107bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_107bb0:
    // 0x107bb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x107bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_107bb4:
    // 0x107bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x107bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_107bb8:
    // 0x107bb8: 0x60f809  jalr        $v1
label_107bbc:
    if (ctx->pc == 0x107BBCu) {
        ctx->pc = 0x107BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB8u;
        // 0x107bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107BC0u;
        goto label_fallthrough_0x107bb8;
    }
    ctx->pc = 0x107BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107BC0u);
        ctx->pc = 0x107BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB8u;
        // 0x107bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107BB8u, 0x107BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x107bb8:
    ctx->pc = 0x107BC0u;
}
