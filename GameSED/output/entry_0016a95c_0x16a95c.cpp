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

// Function: entry_0016a95c
// Address: 0x16a95c - 0x16a994
void entry_0016a95c_0x16a95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a95c_0x16a95c");
#endif

    switch (ctx->pc) {
        case 0x16a978u: goto label_16a978;
        default: break;
    }

    ctx->pc = 0x16a95cu;

label_16a95c:
    // 0x16a95c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a960:
    // 0x16a960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a964:
    // 0x16a964: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_16a968:
    // 0x16a968: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a96c:
    // 0x16a96c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a970:
    // 0x16a970: 0x60f809  jalr        $v1
label_16a974:
    if (ctx->pc == 0x16A974u) {
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A978u;
        goto label_16a978;
    }
    ctx->pc = 0x16A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A978u);
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A970u, 0x16A978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A978u;
label_16a978:
    // 0x16a978: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16a978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a97c:
    // 0x16a97c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16a97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a980:
    // 0x16a980: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16a980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a984:
    // 0x16a984: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a988:
    // 0x16a988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a98c:
    // 0x16a98c: 0x3e00008  jr          $ra
label_16a990:
    if (ctx->pc == 0x16A990u) {
        ctx->pc = 0x16A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A98Cu;
        // 0x16a990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A994u;
        goto label_fallthrough_0x16a98c;
    }
    ctx->pc = 0x16A98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A98Cu;
        // 0x16a990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a98c:
    ctx->pc = 0x16A994u;
}
