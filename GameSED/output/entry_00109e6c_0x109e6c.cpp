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

// Function: entry_00109e6c
// Address: 0x109e6c - 0x109eb8
void entry_00109e6c_0x109e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e6c_0x109e6c");
#endif

    switch (ctx->pc) {
        case 0x109e78u: goto label_109e78;
        case 0x109e80u: goto label_109e80;
        case 0x109ea4u: goto label_109ea4;
        case 0x109eb0u: goto label_109eb0;
        default: break;
    }

    ctx->pc = 0x109e6cu;

    // 0x109e6c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x109e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x109e70: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x109E70u;
    SET_GPR_U32(ctx, 31, 0x109E78u);
    ctx->pc = 0x109E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E70u;
    // 0x109e74: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x109E70u, 0x109E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E78u;
label_109e78:
    // 0x109e78: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x109E78u;
    SET_GPR_U32(ctx, 31, 0x109E80u);
    ctx->pc = 0x109E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E78u;
    // 0x109e7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x109E78u, 0x109E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E80u;
label_109e80:
    // 0x109e80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x109e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x109e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x109e8c: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x109e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x109e90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x109e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x109e98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e9c: 0xc062cb0  jal         func_18B2C0
    ctx->pc = 0x109E9Cu;
    SET_GPR_U32(ctx, 31, 0x109EA4u);
    ctx->pc = 0x109EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E9Cu;
    // 0x109ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x109E9Cu, 0x109EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EA4u;
label_109ea4:
    // 0x109ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ea8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x109EA8u;
    SET_GPR_U32(ctx, 31, 0x109EB0u);
    ctx->pc = 0x109EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EA8u;
    // 0x109eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x109EA8u, 0x109EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EB0u;
label_109eb0:
    // 0x109eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109eb8u;
}
