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

// Function: entry_00156fc4
// Address: 0x156fc4 - 0x156fec
void entry_00156fc4_0x156fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156fc4_0x156fc4");
#endif

    ctx->pc = 0x156fc4u;

label_156fc4:
    // 0x156fc4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_156fc8:
    // 0x156fc8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_156fcc:
    // 0x156fcc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x156fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_156fd0:
    // 0x156fd0: 0x84c6a120  lh          $a2, -0x5EE0($a2)
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294943008)));
label_156fd4:
    // 0x156fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x156fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_156fd8:
    // 0x156fd8: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_156fdc:
    // 0x156fdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_156fe0:
    // 0x156fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x156fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_156fe4:
    // 0x156fe4: 0x40f809  jalr        $v0
label_156fe8:
    if (ctx->pc == 0x156FE8u) {
        ctx->pc = 0x156FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE4u;
        // 0x156fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FECu;
        goto label_fallthrough_0x156fe4;
    }
    ctx->pc = 0x156FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156FECu);
        ctx->pc = 0x156FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE4u;
        // 0x156fe8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FE4u, 0x156FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x156fe4:
    ctx->pc = 0x156FECu;
}
