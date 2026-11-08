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

// Function: entry_0013afa4
// Address: 0x13afa4 - 0x13afd8
void entry_0013afa4_0x13afa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013afa4_0x13afa4");
#endif

    ctx->pc = 0x13afa4u;

label_13afa4:
    // 0x13afa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13afa8:
    // 0x13afa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13afac:
    // 0x13afac: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13afacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13afb0:
    // 0x13afb0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_13afb4:
    // 0x13afb4: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x13afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_13afb8:
    // 0x13afb8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13afbc:
    if (ctx->pc == 0x13AFBCu) {
        ctx->pc = 0x13AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB8u;
        // 0x13afbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFC0u;
        goto label_13afc0;
    }
    ctx->pc = 0x13AFB8u;
    {
        const bool branch_taken_0x13afb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFB8u;
        // 0x13afbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afb8) {
            ctx->pc = 0x13AFD8u;
            return;
        }
    }
    ctx->pc = 0x13AFC0u;
label_13afc0:
    // 0x13afc0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13afc4:
    // 0x13afc4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13afc8:
    // 0x13afc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13afcc:
    // 0x13afcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13afd0:
    // 0x13afd0: 0x60f809  jalr        $v1
label_13afd4:
    if (ctx->pc == 0x13AFD4u) {
        ctx->pc = 0x13AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD0u;
        // 0x13afd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13AFD8u;
        goto label_fallthrough_0x13afd0;
    }
    ctx->pc = 0x13AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13AFD8u);
        ctx->pc = 0x13AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD0u;
        // 0x13afd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AFD0u, 0x13AFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13afd0:
    ctx->pc = 0x13AFD8u;
}
