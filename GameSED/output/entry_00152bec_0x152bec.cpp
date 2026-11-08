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

// Function: entry_00152bec
// Address: 0x152bec - 0x152c58
void entry_00152bec_0x152bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152bec_0x152bec");
#endif

    switch (ctx->pc) {
        case 0x152c10u: goto label_152c10;
        case 0x152c18u: goto label_152c18;
        case 0x152c2cu: goto label_152c2c;
        default: break;
    }

    ctx->pc = 0x152becu;

    // 0x152bec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152bf0: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x152bf0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x152bf4: 0x2a2800a  movz        $s0, $s5, $v0
    ctx->pc = 0x152bf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x152bf8: 0x6000017  bltz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152BF8u;
    {
        const bool branch_taken_0x152bf8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x152BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BF8u;
        // 0x152bfc: 0xaf919144  sw          $s1, -0x6EBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938948), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bf8) {
            ctx->pc = 0x152C58u;
            return;
        }
    }
    ctx->pc = 0x152C00u;
    // 0x152c00: 0x52c00016  beql        $s6, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x152C00u;
    {
        const bool branch_taken_0x152c00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c00) {
            ctx->pc = 0x152C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C00u;
            // 0x152c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C5Cu;
            return;
        }
    }
    ctx->pc = 0x152C08u;
    // 0x152c08: 0xc04c99a  jal         func_132668
    ctx->pc = 0x152C08u;
    SET_GPR_U32(ctx, 31, 0x152C10u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x152C08u, 0x152C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x152C10u;
    SET_GPR_U32(ctx, 31, 0x152C18u);
    ctx->pc = 0x152C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C10u;
    // 0x152c14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x152C10u, 0x152C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C18u;
label_152c18:
    // 0x152c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c1c: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x152c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c24: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x152C24u;
    SET_GPR_U32(ctx, 31, 0x152C2Cu);
    ctx->pc = 0x152C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C24u;
    // 0x152c28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x152C24u, 0x152C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C2Cu;
label_152c2c:
    // 0x152c2c: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x152c30: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x152C30u;
    {
        const bool branch_taken_0x152c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C30u;
        // 0x152c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c30) {
            ctx->pc = 0x152C5Cu;
            return;
        }
    }
    ctx->pc = 0x152C38u;
    // 0x152c38: 0x16150008  bne         $s0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x152C38u;
    {
        const bool branch_taken_0x152c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x152C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C38u;
        // 0x152c3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c38) {
            ctx->pc = 0x152C5Cu;
            return;
        }
    }
    ctx->pc = 0x152C40u;
    // 0x152c40: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x152c44: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x240100u));
    // 0x152c48: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152C48u;
    {
        const bool branch_taken_0x152c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x152c48) {
            ctx->pc = 0x152C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C48u;
            // 0x152c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C5Cu;
            return;
        }
    }
    ctx->pc = 0x152C50u;
    // 0x152c50: 0xc04fb3a  jal         func_13ECE8
    ctx->pc = 0x152C50u;
    SET_GPR_U32(ctx, 31, 0x152C58u);
    ctx->pc = 0x13ECE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECE8u, 0x152C50u, 0x152C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C58u;
}
