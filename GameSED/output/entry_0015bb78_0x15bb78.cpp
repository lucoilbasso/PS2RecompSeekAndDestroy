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

// Function: entry_0015bb78
// Address: 0x15bb78 - 0x15bba8
void entry_0015bb78_0x15bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb78_0x15bb78");
#endif

    switch (ctx->pc) {
        case 0x15bb9cu: goto label_15bb9c;
        default: break;
    }

    ctx->pc = 0x15bb78u;

label_15bb78:
    // 0x15bb78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bb7c:
    // 0x15bb7c: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15bb80:
    if (ctx->pc == 0x15BB80u) {
        ctx->pc = 0x15BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB7Cu;
        // 0x15bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB84u;
        goto label_15bb84;
    }
    ctx->pc = 0x15BB7Cu;
    {
        const bool branch_taken_0x15bb7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB7Cu;
        // 0x15bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb7c) {
            ctx->pc = 0x15BCE8u;
            return;
        }
    }
    ctx->pc = 0x15BB84u;
label_15bb84:
    // 0x15bb84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb88:
    // 0x15bb88: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb8c:
    // 0x15bb8c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb90:
    // 0x15bb90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb94:
    // 0x15bb94: 0x60f809  jalr        $v1
label_15bb98:
    if (ctx->pc == 0x15BB98u) {
        ctx->pc = 0x15BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB94u;
        // 0x15bb98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB9Cu;
        goto label_15bb9c;
    }
    ctx->pc = 0x15BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB9Cu);
        ctx->pc = 0x15BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB94u;
        // 0x15bb98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB94u, 0x15BB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB9Cu;
label_15bb9c:
    // 0x15bb9c: 0x10000053  b           . + 4 + (0x53 << 2)
label_15bba0:
    if (ctx->pc == 0x15BBA0u) {
        ctx->pc = 0x15BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB9Cu;
        // 0x15bba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBA4u;
        goto label_15bba4;
    }
    ctx->pc = 0x15BB9Cu;
    {
        const bool branch_taken_0x15bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB9Cu;
        // 0x15bba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb9c) {
            ctx->pc = 0x15BCECu;
            return;
        }
    }
    ctx->pc = 0x15BBA4u;
label_15bba4:
    // 0x15bba4: 0x0  nop
    ctx->pc = 0x15bba4u;
    // NOP
    ctx->pc = 0x15bba8u;
}
