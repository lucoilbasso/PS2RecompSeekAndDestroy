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

// Function: caseD_3
// Address: 0x132e60 - 0x132eb8
void caseD_3_0x132e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x132e60");
#endif

    switch (ctx->pc) {
        case 0x132e74u: goto label_132e74;
        case 0x132e84u: goto label_132e84;
        case 0x132e8cu: goto label_132e8c;
        case 0x132eb4u: goto label_132eb4;
        default: break;
    }

    ctx->pc = 0x132e60u;

    // 0x132e60: 0x8e510048  lw          $s1, 0x48($s2)
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x132e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e6c: 0xc04e354  jal         func_138D50
    ctx->pc = 0x132E6Cu;
    SET_GPR_U32(ctx, 31, 0x132E74u);
    ctx->pc = 0x132E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E6Cu;
    // 0x132e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D50u, 0x132E6Cu, 0x132E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E74u;
label_132e74:
    // 0x132e74: 0x24041118  addiu       $a0, $zero, 0x1118
    ctx->pc = 0x132e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x132e78: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e7c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x132E7Cu;
    SET_GPR_U32(ctx, 31, 0x132E84u);
    ctx->pc = 0x132E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E7Cu;
    // 0x132e80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132E7Cu, 0x132E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E84u;
label_132e84:
    // 0x132e84: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x132E84u;
    SET_GPR_U32(ctx, 31, 0x132E8Cu);
    ctx->pc = 0x132E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E84u;
    // 0x132e88: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132E84u, 0x132E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E8Cu;
label_132e8c:
    // 0x132e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x132e98: 0x2442f038  addiu       $v0, $v0, -0xFC8
    ctx->pc = 0x132e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963256));
    // 0x132e9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ea0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x132ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x132ea4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x132ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132eac: 0xc053508  jal         func_14D420
    ctx->pc = 0x132EACu;
    SET_GPR_U32(ctx, 31, 0x132EB4u);
    ctx->pc = 0x132EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EACu;
    // 0x132eb0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D420u, 0x132EACu, 0x132EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EB4u;
label_132eb4:
    // 0x132eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132eb8u;
}
