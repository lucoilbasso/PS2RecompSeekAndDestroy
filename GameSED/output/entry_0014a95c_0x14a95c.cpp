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

// Function: entry_0014a95c
// Address: 0x14a95c - 0x14a98c
void entry_0014a95c_0x14a95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a95c_0x14a95c");
#endif

    switch (ctx->pc) {
        case 0x14a988u: goto label_14a988;
        default: break;
    }

    ctx->pc = 0x14a95cu;

label_14a95c:
    // 0x14a95c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14a960:
    // 0x14a960: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_14a964:
    // 0x14a964: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_14a968:
    if (ctx->pc == 0x14A968u) {
        ctx->pc = 0x14A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A964u;
        // 0x14a968: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A96Cu;
        goto label_14a96c;
    }
    ctx->pc = 0x14A964u;
    {
        const bool branch_taken_0x14a964 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A964u;
        // 0x14a968: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a964) {
            ctx->pc = 0x14A98Cu;
            return;
        }
    }
    ctx->pc = 0x14A96Cu;
label_14a96c:
    // 0x14a96c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14a970:
    // 0x14a970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a974:
    // 0x14a974: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14a978:
    // 0x14a978: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a97c:
    // 0x14a97c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a980:
    // 0x14a980: 0x60f809  jalr        $v1
label_14a984:
    if (ctx->pc == 0x14A984u) {
        ctx->pc = 0x14A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A980u;
        // 0x14a984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A988u;
        goto label_14a988;
    }
    ctx->pc = 0x14A980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A988u);
        ctx->pc = 0x14A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A980u;
        // 0x14a984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A980u, 0x14A988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A988u;
label_14a988:
    // 0x14a988: 0xae4001c4  sw          $zero, 0x1C4($s2)
    ctx->pc = 0x14a988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
    ctx->pc = 0x14a98cu;
}
