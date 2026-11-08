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

// Function: entry_001baf70
// Address: 0x1baf70 - 0x1bafcc
void entry_001baf70_0x1baf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf70_0x1baf70");
#endif

    switch (ctx->pc) {
        case 0x1baf7cu: goto label_1baf7c;
        case 0x1bafb0u: goto label_1bafb0;
        case 0x1bafc4u: goto label_1bafc4;
        default: break;
    }

    ctx->pc = 0x1baf70u;

    // 0x1baf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf74: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1BAF74u;
    SET_GPR_U32(ctx, 31, 0x1BAF7Cu);
    ctx->pc = 0x1BAF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF74u;
    // 0x1baf78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1BAF74u, 0x1BAF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF7Cu;
label_1baf7c:
    // 0x1baf7c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1baf80: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1baf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1baf84: 0x2450d280  addiu       $s0, $v0, -0x2D80
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955648));
    // 0x1baf88: 0x2484dac8  addiu       $a0, $a0, -0x2538
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957768));
    // 0x1baf8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1baf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1baf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1baf94: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1baf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1baf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf9c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1baf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bafa0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bafa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1bafa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bafa8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BAFA8u;
    SET_GPR_U32(ctx, 31, 0x1BAFB0u);
    ctx->pc = 0x1BAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFA8u;
    // 0x1bafac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BAFA8u, 0x1BAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFB0u;
label_1bafb0:
    // 0x1bafb0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAFB0u;
    {
        const bool branch_taken_0x1bafb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFB0u;
        // 0x1bafb4: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafb0) {
            ctx->pc = 0x1BAFCCu;
            return;
        }
    }
    ctx->pc = 0x1BAFB8u;
    // 0x1bafb8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bafbc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BAFBCu;
    SET_GPR_U32(ctx, 31, 0x1BAFC4u);
    ctx->pc = 0x1BAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFBCu;
    // 0x1bafc0: 0x8c44c0ac  lw          $a0, -0x3F54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BAFBCu, 0x1BAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFC4u;
label_1bafc4:
    // 0x1bafc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAFC4u;
    {
        const bool branch_taken_0x1bafc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFC4u;
        // 0x1bafc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafc4) {
            ctx->pc = 0x1BAFE4u;
            return;
        }
    }
    ctx->pc = 0x1BAFCCu;
}
