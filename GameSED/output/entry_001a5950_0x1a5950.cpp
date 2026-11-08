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

// Function: entry_001a5950
// Address: 0x1a5950 - 0x1a5994
void entry_001a5950_0x1a5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5950_0x1a5950");
#endif

    switch (ctx->pc) {
        case 0x1a5974u: goto label_1a5974;
        default: break;
    }

    ctx->pc = 0x1a5950u;

label_1a5950:
    // 0x1a5950: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5954:
    // 0x1a5954: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1a5954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1a5958:
    // 0x1a5958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a595c:
    // 0x1a595c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5960:
    // 0x1a5960: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5964:
    // 0x1a5964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5968:
    // 0x1a5968: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x1a5968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
label_1a596c:
    // 0x1a596c: 0xa0f809  jalr        $a1
label_1a5970:
    if (ctx->pc == 0x1A5970u) {
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5974u;
        goto label_1a5974;
    }
    ctx->pc = 0x1A596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A5974u);
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A596Cu, 0x1A5974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5974u;
label_1a5974:
    // 0x1a5974: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5978:
    // 0x1a5978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a597c:
    // 0x1a597c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a5980:
    if (ctx->pc == 0x1A5980u) {
        ctx->pc = 0x1A5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A597Cu;
        // 0x1a5980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5984u;
        goto label_1a5984;
    }
    ctx->pc = 0x1A597Cu;
    {
        const bool branch_taken_0x1a597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a597c) {
            ctx->pc = 0x1A5980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A597Cu;
            // 0x1a5980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5998u;
            return;
        }
    }
    ctx->pc = 0x1A5984u;
label_1a5984:
    // 0x1a5984: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5988:
    // 0x1a5988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a598c:
    // 0x1a598c: 0x5460ffdc  bnel        $v1, $zero, . + 4 + (-0x24 << 2)
label_1a5990:
    if (ctx->pc == 0x1A5990u) {
        ctx->pc = 0x1A5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A598Cu;
        // 0x1a5990: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5994u;
        goto label_fallthrough_0x1a598c;
    }
    ctx->pc = 0x1A598Cu;
    {
        const bool branch_taken_0x1a598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a598c) {
            ctx->pc = 0x1A5990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A598Cu;
            // 0x1a5990: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5900u;
            return;
        }
    }
label_fallthrough_0x1a598c:
    ctx->pc = 0x1A5994u;
}
