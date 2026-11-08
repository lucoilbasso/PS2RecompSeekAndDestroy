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

// Function: entry_00185898
// Address: 0x185898 - 0x1858c8
void entry_00185898_0x185898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185898_0x185898");
#endif

    switch (ctx->pc) {
        case 0x1858c0u: goto label_1858c0;
        default: break;
    }

    ctx->pc = 0x185898u;

label_185898:
    // 0x185898: 0x1680ff85  bnez        $s4, . + 4 + (-0x7B << 2)
label_18589c:
    if (ctx->pc == 0x18589Cu) {
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A0u;
        goto label_1858a0;
    }
    ctx->pc = 0x185898u;
    {
        const bool branch_taken_0x185898 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x18589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185898u;
        // 0x18589c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185898) {
            ctx->pc = 0x1856B0u;
            return;
        }
    }
    ctx->pc = 0x1858A0u;
label_1858a0:
    // 0x1858a0: 0x12a00017  beqz        $s5, . + 4 + (0x17 << 2)
label_1858a4:
    if (ctx->pc == 0x1858A4u) {
        ctx->pc = 0x1858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A0u;
        // 0x1858a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858A8u;
        goto label_1858a8;
    }
    ctx->pc = 0x1858A0u;
    {
        const bool branch_taken_0x1858a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858A0u;
        // 0x1858a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858a0) {
            ctx->pc = 0x185900u;
            return;
        }
    }
    ctx->pc = 0x1858A8u;
label_1858a8:
    // 0x1858a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1858a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1858ac:
    // 0x1858ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1858acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1858b0:
    // 0x1858b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1858b4:
    // 0x1858b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1858b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1858b8:
    // 0x1858b8: 0x60f809  jalr        $v1
label_1858bc:
    if (ctx->pc == 0x1858BCu) {
        ctx->pc = 0x1858BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858B8u;
        // 0x1858bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858C0u;
        goto label_1858c0;
    }
    ctx->pc = 0x1858B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1858C0u);
        ctx->pc = 0x1858BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858B8u;
        // 0x1858bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1858B8u, 0x1858C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1858C0u;
label_1858c0:
    // 0x1858c0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1858c4:
    if (ctx->pc == 0x1858C4u) {
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858C8u;
        goto label_fallthrough_0x1858c0;
    }
    ctx->pc = 0x1858C0u;
    {
        const bool branch_taken_0x1858c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C0u;
        // 0x1858c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858c0) {
            ctx->pc = 0x185904u;
            return;
        }
    }
label_fallthrough_0x1858c0:
    ctx->pc = 0x1858C8u;
}
