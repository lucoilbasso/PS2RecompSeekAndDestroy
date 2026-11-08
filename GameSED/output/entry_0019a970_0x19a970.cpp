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

// Function: entry_0019a970
// Address: 0x19a970 - 0x19a99c
void entry_0019a970_0x19a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a970_0x19a970");
#endif

    switch (ctx->pc) {
        case 0x19a998u: goto label_19a998;
        default: break;
    }

    ctx->pc = 0x19a970u;

label_19a970:
    // 0x19a970: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
label_19a974:
    if (ctx->pc == 0x19A974u) {
        ctx->pc = 0x19A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A970u;
        // 0x19a974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A978u;
        goto label_19a978;
    }
    ctx->pc = 0x19A970u;
    {
        const bool branch_taken_0x19a970 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a970) {
            ctx->pc = 0x19A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A970u;
            // 0x19a974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A99Cu;
            return;
        }
    }
    ctx->pc = 0x19A978u;
label_19a978:
    // 0x19a978: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_19a97c:
    // 0x19a97c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a980:
    // 0x19a980: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a984:
    // 0x19a984: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_19a988:
    // 0x19a988: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a98c:
    // 0x19a98c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a990:
    // 0x19a990: 0x60f809  jalr        $v1
label_19a994:
    if (ctx->pc == 0x19A994u) {
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A998u;
        goto label_19a998;
    }
    ctx->pc = 0x19A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A998u);
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A990u;
        // 0x19a994: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A990u, 0x19A998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A998u;
label_19a998:
    // 0x19a998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19a99cu;
}
