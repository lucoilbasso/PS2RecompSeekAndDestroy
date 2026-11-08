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

// Function: entry_001cbea0
// Address: 0x1cbea0 - 0x1cbed4
void entry_001cbea0_0x1cbea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbea0_0x1cbea0");
#endif

    switch (ctx->pc) {
        case 0x1cbed0u: goto label_1cbed0;
        default: break;
    }

    ctx->pc = 0x1cbea0u;

label_1cbea0:
    // 0x1cbea0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cbea4:
    // 0x1cbea4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_1cbea8:
    if (ctx->pc == 0x1CBEA8u) {
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA4u;
        // 0x1cbea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEACu;
        goto label_1cbeac;
    }
    ctx->pc = 0x1CBEA4u;
    {
        const bool branch_taken_0x1cbea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA4u;
        // 0x1cbea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbea4) {
            ctx->pc = 0x1CBED4u;
            return;
        }
    }
    ctx->pc = 0x1CBEACu;
label_1cbeac:
    // 0x1cbeac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1cbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1cbeb0:
    // 0x1cbeb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb4:
    // 0x1cbeb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cbeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb8:
    // 0x1cbeb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1cbeb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbebc:
    // 0x1cbebc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cbec0:
    // 0x1cbec0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cbec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbec4:
    // 0x1cbec4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cbec8:
    // 0x1cbec8: 0x40f809  jalr        $v0
label_1cbecc:
    if (ctx->pc == 0x1CBECCu) {
        ctx->pc = 0x1CBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC8u;
        // 0x1cbecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBED0u;
        goto label_1cbed0;
    }
    ctx->pc = 0x1CBEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBED0u);
        ctx->pc = 0x1CBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEC8u;
        // 0x1cbecc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEC8u, 0x1CBED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBED0u;
label_1cbed0:
    // 0x1cbed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cbed4u;
}
