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

// Function: entry_001876d8
// Address: 0x1876d8 - 0x187714
void entry_001876d8_0x1876d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001876d8_0x1876d8");
#endif

    switch (ctx->pc) {
        case 0x187704u: goto label_187704;
        default: break;
    }

    ctx->pc = 0x1876d8u;

label_1876d8:
    // 0x1876d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1876dc:
    // 0x1876dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1876dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1876e0:
    // 0x1876e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1876e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1876e4:
    // 0x1876e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1876e8:
    // 0x1876e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1876ec:
    // 0x1876ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1876f0:
    // 0x1876f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1876f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1876f4:
    // 0x1876f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1876f8:
    // 0x1876f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1876fc:
    // 0x1876fc: 0x60f809  jalr        $v1
label_187700:
    if (ctx->pc == 0x187700u) {
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187704u;
        goto label_187704;
    }
    ctx->pc = 0x1876FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187704u);
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876FCu, 0x187704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187704u;
label_187704:
    // 0x187704: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_187708:
    // 0x187708: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x187708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18770c:
    // 0x18770c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_187710:
    if (ctx->pc == 0x187710u) {
        ctx->pc = 0x187710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18770Cu;
        // 0x187710: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187714u;
        goto label_fallthrough_0x18770c;
    }
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18770Cu;
            // 0x187710: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1876D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1876d8;
        }
    }
label_fallthrough_0x18770c:
    ctx->pc = 0x187714u;
}
