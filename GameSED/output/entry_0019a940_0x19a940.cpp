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

// Function: entry_0019a940
// Address: 0x19a940 - 0x19a970
void entry_0019a940_0x19a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a940_0x19a940");
#endif

    switch (ctx->pc) {
        case 0x19a96cu: goto label_19a96c;
        default: break;
    }

    ctx->pc = 0x19a940u;

label_19a940:
    // 0x19a940: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_19a944:
    if (ctx->pc == 0x19A944u) {
        ctx->pc = 0x19A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A940u;
        // 0x19a944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A948u;
        goto label_19a948;
    }
    ctx->pc = 0x19A940u;
    {
        const bool branch_taken_0x19a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a940) {
            ctx->pc = 0x19A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A940u;
            // 0x19a944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A99Cu;
            return;
        }
    }
    ctx->pc = 0x19A948u;
label_19a948:
    // 0x19a948: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
label_19a94c:
    if (ctx->pc == 0x19A94Cu) {
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A950u;
        goto label_19a950;
    }
    ctx->pc = 0x19A948u;
    {
        const bool branch_taken_0x19a948 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a948) {
            ctx->pc = 0x19A970u;
            return;
        }
    }
    ctx->pc = 0x19A950u;
label_19a950:
    // 0x19a950: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19a954:
    // 0x19a954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a958:
    // 0x19a958: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x19a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_19a95c:
    // 0x19a95c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a960:
    // 0x19a960: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a964:
    // 0x19a964: 0x60f809  jalr        $v1
label_19a968:
    if (ctx->pc == 0x19A968u) {
        ctx->pc = 0x19A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A964u;
        // 0x19a968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A96Cu;
        goto label_19a96c;
    }
    ctx->pc = 0x19A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A96Cu);
        ctx->pc = 0x19A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A964u;
        // 0x19a968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A964u, 0x19A96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A96Cu;
label_19a96c:
    // 0x19a96c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19a970u;
}
