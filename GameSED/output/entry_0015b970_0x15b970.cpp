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

// Function: entry_0015b970
// Address: 0x15b970 - 0x15b9a0
void entry_0015b970_0x15b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b970_0x15b970");
#endif

    switch (ctx->pc) {
        case 0x15b994u: goto label_15b994;
        default: break;
    }

    ctx->pc = 0x15b970u;

label_15b970:
    // 0x15b970: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15b974:
    // 0x15b974: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15b978:
    if (ctx->pc == 0x15B978u) {
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B97Cu;
        goto label_15b97c;
    }
    ctx->pc = 0x15B974u;
    {
        const bool branch_taken_0x15b974 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B974u;
        // 0x15b978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b974) {
            ctx->pc = 0x15BAE0u;
            return;
        }
    }
    ctx->pc = 0x15B97Cu;
label_15b97c:
    // 0x15b97c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15b980:
    // 0x15b980: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15b984:
    // 0x15b984: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15b988:
    // 0x15b988: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15b98c:
    // 0x15b98c: 0x60f809  jalr        $v1
label_15b990:
    if (ctx->pc == 0x15B990u) {
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B994u;
        goto label_15b994;
    }
    ctx->pc = 0x15B98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B994u);
        ctx->pc = 0x15B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B98Cu;
        // 0x15b990: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B98Cu, 0x15B994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B994u;
label_15b994:
    // 0x15b994: 0x10000053  b           . + 4 + (0x53 << 2)
label_15b998:
    if (ctx->pc == 0x15B998u) {
        ctx->pc = 0x15B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B994u;
        // 0x15b998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B99Cu;
        goto label_15b99c;
    }
    ctx->pc = 0x15B994u;
    {
        const bool branch_taken_0x15b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B994u;
        // 0x15b998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b994) {
            ctx->pc = 0x15BAE4u;
            return;
        }
    }
    ctx->pc = 0x15B99Cu;
label_15b99c:
    // 0x15b99c: 0x0  nop
    ctx->pc = 0x15b99cu;
    // NOP
    ctx->pc = 0x15b9a0u;
}
