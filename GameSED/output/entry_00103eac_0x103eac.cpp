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

// Function: entry_00103eac
// Address: 0x103eac - 0x103ed0
void entry_00103eac_0x103eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103eac_0x103eac");
#endif

    ctx->pc = 0x103eacu;

label_103eac:
    // 0x103eac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_103eb0:
    // 0x103eb0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_103eb4:
    if (ctx->pc == 0x103EB4u) {
        ctx->pc = 0x103EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB0u;
        // 0x103eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103EB8u;
        goto label_103eb8;
    }
    ctx->pc = 0x103EB0u;
    {
        const bool branch_taken_0x103eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB0u;
        // 0x103eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103eb0) {
            ctx->pc = 0x103ED0u;
            return;
        }
    }
    ctx->pc = 0x103EB8u;
label_103eb8:
    // 0x103eb8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_103ebc:
    // 0x103ebc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_103ec0:
    // 0x103ec0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x103ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_103ec4:
    // 0x103ec4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x103ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103ec8:
    // 0x103ec8: 0x60f809  jalr        $v1
label_103ecc:
    if (ctx->pc == 0x103ECCu) {
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103ED0u;
        goto label_fallthrough_0x103ec8;
    }
    ctx->pc = 0x103EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103ED0u);
        ctx->pc = 0x103ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC8u;
        // 0x103ecc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103EC8u, 0x103ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x103ec8:
    ctx->pc = 0x103ED0u;
}
